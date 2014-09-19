/*
 * Copyright (C) 2012-2013 RCP100 Team (rcpteam@yahoo.com)
 *
 * This file is part of RCP100 project
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/
#include "http.h"
// This is a Public domain image https://openclipart.org/detail/1918/router-by-juanjo

//	"<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n"
//	"\n"
static char *data = 
	"<svg\n"
	"   xmlns:dc=\"http://purl.org/dc/elements/1.1/\"\n"
	"   xmlns:cc=\"http://creativecommons.org/ns#\"\n"
	"   xmlns:rdf=\"http://www.w3.org/1999/02/22-rdf-syntax-ns#\"\n"
	"   xmlns:svg=\"http://www.w3.org/2000/svg\"\n"
	"   xmlns=\"http://www.w3.org/2000/svg\"\n"
	"   xmlns:xlink=\"http://www.w3.org/1999/xlink\"\n"
	"   xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\"\n"
	"   version=\"1.1\"\n"
	"   width=\"48\"\n"
	"   height=\"23.998108\"\n"
	"   id=\"svg2\">\n"
	"  <defs\n"
	"     id=\"defs4\">\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688\"\n"
	"       xlink:href=\"#linearGradient12828\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828\">\n"
	"      <stop\n"
	"         id=\"stop12830\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690\"\n"
	"       xlink:href=\"#linearGradient12001\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001\">\n"
	"      <stop\n"
	"         id=\"stop12003\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-2\"\n"
	"       xlink:href=\"#linearGradient12828-1\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-1\">\n"
	"      <stop\n"
	"         id=\"stop12830-4\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-8\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-8\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-1\"\n"
	"       xlink:href=\"#linearGradient12001-1\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-1\">\n"
	"      <stop\n"
	"         id=\"stop12003-6\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-6\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-8\">\n"
	"      <stop\n"
	"         id=\"stop12830-0\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-2\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-9\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-5\">\n"
	"      <stop\n"
	"         id=\"stop12003-2\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-4\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-1\"\n"
	"       xlink:href=\"#linearGradient12828-5\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-5\">\n"
	"      <stop\n"
	"         id=\"stop12830-2\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-5\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-84\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-13\"\n"
	"       xlink:href=\"#linearGradient12001-2\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-2\">\n"
	"      <stop\n"
	"         id=\"stop12003-7\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-1\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-3\"\n"
	"       xlink:href=\"#linearGradient12828-83\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-83\">\n"
	"      <stop\n"
	"         id=\"stop12830-1\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-57\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-96\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-0\"\n"
	"       xlink:href=\"#linearGradient12001-0\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-0\">\n"
	"      <stop\n"
	"         id=\"stop12003-3\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-2\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9\">\n"
	"      <stop\n"
	"         id=\"stop12830-5\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8\">\n"
	"      <stop\n"
	"         id=\"stop12003-1\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <inkscape:path-effect\n"
	"       effect=\"spiro\"\n"
	"       id=\"path-effect4268\" />\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-8\"\n"
	"       xlink:href=\"#linearGradient12828-9-1\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-1\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-1\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-8\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-2\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-9\"\n"
	"       xlink:href=\"#linearGradient12001-8-7\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-7\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-0\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-6\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-5\"\n"
	"       xlink:href=\"#linearGradient12828-9-0\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-0\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-19\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-0\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-1\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-0\"\n"
	"       xlink:href=\"#linearGradient12001-8-6\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-6\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-6\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-64\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-50\"\n"
	"       xlink:href=\"#linearGradient12828-9-9\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-9\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-11\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-6\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-9\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-92\"\n"
	"       xlink:href=\"#linearGradient12001-8-0\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-0\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-2\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-3\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-50-3\"\n"
	"       xlink:href=\"#linearGradient12828-9-9-4\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-9-4\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-11-3\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-6-2\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-9-1\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-92-2\"\n"
	"       xlink:href=\"#linearGradient12001-8-0-2\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-0-2\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-2-0\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-3-6\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-50-2\"\n"
	"       xlink:href=\"#linearGradient12828-9-9-5\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-9-5\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-11-2\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-6-6\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-9-3\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-92-7\"\n"
	"       xlink:href=\"#linearGradient12001-8-0-29\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-0-29\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-2-04\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-3-2\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-50-0\"\n"
	"       xlink:href=\"#linearGradient12828-9-9-3\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-9-3\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-11-7\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-6-0\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-9-6\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-92-3\"\n"
	"       xlink:href=\"#linearGradient12001-8-0-1\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-0-1\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-2-8\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-3-9\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-50-2-2\"\n"
	"       xlink:href=\"#linearGradient12828-9-9-5-1\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-9-5-1\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-11-2-0\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-6-6-6\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-9-3-8\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-92-7-8\"\n"
	"       xlink:href=\"#linearGradient12001-8-0-29-0\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-0-29-0\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-2-04-3\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-3-2-9\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-50-2-1\"\n"
	"       xlink:href=\"#linearGradient12828-9-9-5-11\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-9-5-11\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-11-2-8\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-6-6-3\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-9-3-6\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-92-7-9\"\n"
	"       xlink:href=\"#linearGradient12001-8-0-29-7\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-0-29-7\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-2-04-0\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-3-2-99\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <radialGradient\n"
	"       cx=\"328.57144\"\n"
	"       cy=\"602.7193\"\n"
	"       r=\"147.14285\"\n"
	"       fx=\"328.57144\"\n"
	"       fy=\"602.7193\"\n"
	"       id=\"radialGradient13688-9-50-2-2-6\"\n"
	"       xlink:href=\"#linearGradient12828-9-9-5-1-5\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(1,0,0,0.177184,0,495.9268)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12828-9-9-5-1-5\">\n"
	"      <stop\n"
	"         id=\"stop12830-5-11-2-0-8\"\n"
	"         style=\"stop-color:#484849;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12862-0-6-6-6-5\"\n"
	"         style=\"stop-color:#434344;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12832-7-9-3-8-9\"\n"
	"         style=\"stop-color:#8f8f90;stop-opacity:0\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"    <linearGradient\n"
	"       x1=\"175.71875\"\n"
	"       y1=\"737.01562\"\n"
	"       x2=\"470.00089\"\n"
	"       y2=\"737.01562\"\n"
	"       id=\"linearGradient13690-7-92-7-8-9\"\n"
	"       xlink:href=\"#linearGradient12001-8-0-29-0-5\"\n"
	"       gradientUnits=\"userSpaceOnUse\"\n"
	"       gradientTransform=\"matrix(0.471308,0,0,0.471308,118.8781,123.5182)\" />\n"
	"    <linearGradient\n"
	"       id=\"linearGradient12001-8-0-29-0-5\">\n"
	"      <stop\n"
	"         id=\"stop12003-1-2-04-3-2\"\n"
	"         style=\"stop-color:#1b4a78;stop-opacity:1\"\n"
	"         offset=\"0\" />\n"
	"      <stop\n"
	"         id=\"stop12005-5-3-2-9-4\"\n"
	"         style=\"stop-color:#5dacd1;stop-opacity:1\"\n"
	"         offset=\"1\" />\n"
	"    </linearGradient>\n"
	"  </defs>\n"
	"  <metadata\n"
	"     id=\"metadata7\">\n"
	"    <rdf:RDF>\n"
	"      <cc:Work\n"
	"         rdf:about=\"\">\n"
	"        <dc:format>image/svg+xml</dc:format>\n"
	"        <dc:type\n"
	"           rdf:resource=\"http://purl.org/dc/dcmitype/StillImage\" />\n"
	"        <dc:title></dc:title>\n"
	"      </cc:Work>\n"
	"    </rdf:RDF>\n"
	"  </metadata>\n"
	"  <g\n"
	"     transform=\"translate(-15.718337,-18.606217)\"\n"
	"     id=\"layer1\">\n"
	"    <g\n"
	"       transform=\"matrix(0.27156717,0,0,0.20707661,11.718237,8.4453058)\"\n"
	"       id=\"layer1-3-2-2-4-0\">\n"
	"      <g\n"
	"         transform=\"translate(-168.5715,-361.4285)\"\n"
	"         id=\"g13678-4-1-6-6\">\n"
	"        <path\n"
	"           d=\"m 475.71429,602.7193 a 147.14285,26.071428 0 1 1 -294.2857,0 147.14285,26.071428 0 1 1 294.2857,0 z\"\n"
	"           transform=\"matrix(0.592567,0,0,1.045917,75.12109,-130.213)\"\n"
	"           id=\"path13641-3-3-3-6\"\n"
	"           style=\"fill:url(#radialGradient13688-9-50-2-2-6);fill-opacity:1;stroke:none\" />\n"
	"        <path\n"
	"           d=\"m 201.71286,435.70728 0,0.29457 c 0.006,-0.0975 0.0206,-0.19729 0.0295,-0.29457 l -0.0295,0 z m 138.62351,0 c 0.0302,0.33044 0.0589,0.66821 0.0589,1.00153 l 0,-1.00153 -0.0589,0 z m 0.0589,1.00153 c -10e-6,15.05224 -31.07495,27.26223 -69.35594,27.26223 -37.68286,10e-6 -68.3765,-11.82771 -69.32649,-26.55527 l 0,40.67979 c -0.0151,0.23376 -0.0147,0.45704 -0.0147,0.69223 0,0.22546 8.7e-4,0.45335 0.0147,0.67751 0.91151,14.74102 31.61889,26.59945 69.32649,26.59945 37.7076,0 68.41498,-11.85843 69.32648,-26.59945 l 0.0295,0 0,-0.50077 c 9.5e-4,-0.0587 0,-0.11794 0,-0.17674 0,-0.0588 9.4e-4,-0.11803 0,-0.17674 l 0,-41.90224 z\"\n"
	"           id=\"path13626-1-9-0-2\"\n"
	"           style=\"fill:url(#linearGradient13690-7-92-7-8-9);fill-opacity:1;stroke:none\" />\n"
	"        <path\n"
	"           d=\"m 475.71429,602.7193 a 147.14285,26.071428 0 1 1 -294.2857,0 147.14285,26.071428 0 1 1 294.2857,0 z\"\n"
	"           transform=\"matrix(0.471308,0,0,1.045917,116.1877,-191.5659)\"\n"
	"           id=\"path11090-31-2-83-0\"\n"
	"           style=\"fill:#3a78a0;fill-opacity:1;stroke:none\" />\n"
	"        <g\n"
	"           transform=\"matrix(0.84958,0.276715,-0.703617,0.334119,443.2028,133.2284)\"\n"
	"           id=\"g13565-2-8-9-1\"\n"
	"           style=\"fill:#f2fdff;fill-opacity:0.71171169\">\n"
	"          <path\n"
	"             d=\"m 328.66945,592.8253 -5.97867,10.35298 -5.97867,10.35297 6.18436,0 0,21.24074 11.53226,0 0,-21.24074 6.18435,0 -5.97867,-10.35297 -5.96496,-10.35298 z\"\n"
	"             id=\"path13507-3-5-9-8\"\n"
	"             style=\"fill:#f2fdff;fill-opacity:0.71171169;stroke:none\" />\n"
	"          <path\n"
	"             d=\"m 328.66945,687.10951 -5.97867,-10.35298 -5.97867,-10.35297 6.18436,0 0,-21.24074 11.53226,0 0,21.24074 6.18435,0 -5.97867,10.35297 -5.96496,10.35298 z\"\n"
	"             id=\"path13509-54-6-1-5\"\n"
	"             style=\"fill:#f2fdff;fill-opacity:0.71171169;stroke:none\" />\n"
	"          <path\n"
	"             d=\"m 333.74751,639.82449 10.35297,-5.97867 10.35297,-5.97867 0,6.18436 21.24074,0 0,11.53225 -21.24074,0 0,6.18436 -10.35297,-5.97867 -10.35297,-5.96496 z\"\n"
	"             id=\"path13511-1-1-3-6\"\n"
	"             style=\"fill:#f2fdff;fill-opacity:0.71171169;stroke:none\" />\n"
	"          <path\n"
	"             d=\"m 323.35667,639.82449 -10.35297,-5.97867 -10.35298,-5.97867 0,6.18436 -21.24073,0 0,11.53225 21.24073,0 0,6.18436 10.35298,-5.97867 10.35297,-5.96496 z\"\n"
	"             id=\"path13513-7-4-3-6\"\n"
	"             style=\"fill:#f2fdff;fill-opacity:0.71171169;stroke:none\" />\n"
	"        </g>\n"
	"      </g>\n"
	"    </g>\n"
	"  </g>\n"
	"</svg>\n";

	
void svg_router(void) {
	printf("%s", data);
}
	
