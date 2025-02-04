/**
 * \file            lwshell_opts.h
 * \brief           Template config file
 */

/*
 * Copyright (c) 2024 Tilen MAJERLE
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of LwSHELL - Lightweight shell library.
 *
 * Author:          Tilen MAJERLE <tilen@majerle.eu>
 * Version:         v1.2.0
 */
#ifndef LWSHELL_OPTS_HDR_H
#define LWSHELL_OPTS_HDR_H

/* Rename this file to "lwshell_opts.h" for your application */

/*
 * Open "include/lwshell/lwshell_opt.h" and
 * copy & replace here settings you want to change values
 */

/* Включаем использование функции вывода */
#define LWSHELL_CFG_USE_OUTPUT       1

/* Включаем команду listcmd */
#define LWSHELL_CFG_USE_LIST_CMD     1

/* Включаем команду echo */
#define LWSHELL_CFG_USE_ECHO_CMD 1

/* Включаем команду cls (очистить экран) */
#define LWSHELL_CFG_USE_CLS_CMD 1

#endif /* LWSHELL_OPTS_HDR_H */
