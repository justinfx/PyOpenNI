/* ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This file is part of PyOpenNI.
 *
 * PyOpenNI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PyOpenNI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with PyOpenNI.  If not, see <http://www.gnu.org/licenses/>.
 *
 * PyOpenNI is Copyright (C) 2011, Xavier Mendez (jmendeth).
 * OpenNI Python Wrapper (ONIPY) is Copyright (C) 2011, Gabriele Nataneli (gamix).
 *
 * ***** END GPL LICENSE BLOCK ***** */


#ifndef PRODUCTION_NODE_WRAPPER_H
#define	PRODUCTION_NODE_WRAPPER_H

#include "wrapperTypes.h"

XnBool ProductionNode_IsCapabilitySupported_wrapped(xn::ProductionNode& self, std::string capabilityName);

std::string ProductionNode_GetName_wrapped(xn::ProductionNode& self);

xn::Context ProductionNode_GetContext_wrapped(xn::ProductionNode& self);

#endif	/* PRODUCTION_NODE_WRAPPER_H */
