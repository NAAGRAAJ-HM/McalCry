#pragma once
/******************************************************************************/
/* File   : McalCry.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstMcalCry.hpp"
#include "CfgMcalCry.hpp"
#include "McalCry_core.hpp"
#include "infMcalCry_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalCry:
      INTERFACES_EXMCALPORTED_MCALCRY
      public abstract_module
   ,  public class_McalCry_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalCry_Type* lptrConst = (ConstMcalCry_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALCRY_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALCRY_CONST,       MCALCRY_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALCRY_CONFIG_DATA, MCALCRY_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALCRY_CODE) DeInitFunction (void);
      FUNC(void, MCALCRY_CODE) MainFunction   (void);
      MCALCRY_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_McalCry, MCALCRY_VAR) McalCry;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

