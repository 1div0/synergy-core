/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2012-2016 Symless Ltd.
 * Copyright (C) 2002 Chris Schoeneman
 *
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file LICENSE that should have accompanied this file.
 *
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "arch/IArchFile.h"

#define ARCH_FILE ArchFileWindows

//! Win32 implementation of IArchFile
class ArchFileWindows : public IArchFile {
public:
	ArchFileWindows();
	virtual ~ArchFileWindows();

	// IArchFile overrides
	virtual const char*	getBasename(const char* pathname);
	virtual std::string	getInstalledDirectory();
	virtual std::string	getLogDirectory();
	virtual std::string	getConfigDirectory();
	virtual void		setConfigDirectory(const String& s);

private:
	String				m_configDirectory;
};
