/*
 * Copyright (C) 2013 Canonical, Ltd.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of version 3 of the GNU Lesser General Public License as published
 * by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Pete Woods <pete.woods@canonical.com>
 */

#pragma once

#include <QtCore/QObject>
class Q_DECL_EXPORT OrgFreedesktopDBusMockInterface;
class Q_DECL_EXPORT NetworkManagerMockInterface;
class Q_DECL_EXPORT OrgFreedesktopDBusPropertiesInterface;

namespace QtDBusMock {

typedef QMap<QString, QVariantMap> VariantDictMap;

}

#include <libqtdbusmock/MockInterface.h>
#include <libqtdbusmock/NetworkManagerMockInterface.h>
#include <libqtdbusmock/PropertiesInterface.h>
