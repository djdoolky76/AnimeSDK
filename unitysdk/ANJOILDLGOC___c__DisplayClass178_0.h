#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"
class ANJOILDLGOC_COICIMMBADI;

#define ANJOILDLGOC___C__DISPLAYCLASS178_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A82E320)
#define ANJOILDLGOC___C__DISPLAYCLASS178_0___TRYSETUPMARKPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x1A8301A0)

inline static constexpr unsigned int ANJOILDLGOC___c__DisplayClass178_0_TypeDefinitionIndex = 74449;

	class ANJOILDLGOC___c__DisplayClass178_0 : public ::System::Object
	{
	public:
		::RPG::Client::UIFloatingTextType textType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANJOILDLGOC___C__DISPLAYCLASS178_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TrySetupMarkPanel_b__0(::ANJOILDLGOC_COICIMMBADI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANJOILDLGOC_COICIMMBADI*))((::PBYTE)hIl2Cpp + ANJOILDLGOC___C__DISPLAYCLASS178_0___TRYSETUPMARKPANEL_B__0_OFFSET))(this, a1);
		}

	};
