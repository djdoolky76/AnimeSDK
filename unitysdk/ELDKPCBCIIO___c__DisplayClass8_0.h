#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELDKPCBCIIO;
namespace System { class Action; }

#define ELDKPCBCIIO___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1551DE90)
#define ELDKPCBCIIO___C__DISPLAYCLASS8_0___CREATEUIMENUBGMENTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1551DF20)

	class ELDKPCBCIIO___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* onEnter; // 0x10
		::ELDKPCBCIIO* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateUIMenuBGMEnterCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO___C__DISPLAYCLASS8_0___CREATEUIMENUBGMENTERCALLBACK_B__0_OFFSET))(this);
		}

	};
