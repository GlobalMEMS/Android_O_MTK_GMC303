/******************************************************************************
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/
#ifndef GMFS_INC_CSPEC_H
#define GMFS_INC_CSPEC_H

/*******************************************************************************
 User defines parameters.
 ******************************************************************************/
/* Parameters for Average */
/*	The number of magnetic/acceleration data to be averaged. */
#define CSPEC_HNAVE_D	4
#define CSPEC_ANAVE_D	4
#define CSPEC_HNAVE_V	8
#define CSPEC_ANAVE_V	8

#ifdef WIN32
#define CSPEC_SETTING_FILE	"gmeDaemon.txt"
#else
#define CSPEC_SETTING_FILE	"/data/misc/gmeDaemon.txt"
#endif

#endif
