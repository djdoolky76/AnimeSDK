#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELDKPCBCIIO;
namespace System { class Action; }

#define ELDKPCBCIIO___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x155121E0)
#define ELDKPCBCIIO___C__DISPLAYCLASS8_0___CREATEUIMENUBGMENTERCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x15512270)

inline static constexpr unsigned int ELDKPCBCIIO___c__DisplayClass8_0_TypeDefinitionIndex = 80622;

	class ELDKPCBCIIO___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::ELDKPCBCIIO* __4__this; // 0x10
		::System::Action* onEnter; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateUIMenuBGMEnterCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDKPCBCIIO___C__DISPLAYCLASS8_0___CREATEUIMENUBGMENTERCALLBACK_B__0_OFFSET))(this);
		}

	};
