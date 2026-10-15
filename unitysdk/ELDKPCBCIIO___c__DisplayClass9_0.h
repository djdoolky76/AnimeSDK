#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELDKPCBCIIO;
namespace System { class Action; }

#define ELDKPCBCIIO___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1551DEA0)
#define ELDKPCBCIIO___C__DISPLAYCLASS9_0___CREATEUIMENUBGMEXITCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1551DFC0)

inline static constexpr unsigned int ELDKPCBCIIO___c__DisplayClass9_0_TypeDefinitionIndex = 80624;

	class ELDKPCBCIIO___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* onExit; // 0x10
		::ELDKPCBCIIO* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateUIMenuBGMExitCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO___C__DISPLAYCLASS9_0___CREATEUIMENUBGMEXITCALLBACK_B__0_OFFSET))(this);
		}

	};
