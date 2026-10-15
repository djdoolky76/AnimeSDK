#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"
class LPNPMKNMMOK;

#define AELMAJAHPCP___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF029D0)
#define AELMAJAHPCP___C__DISPLAYCLASS5_0__COUNTMODIFIERCALLBACKEVENTSTACK_B__0_OFFSET UNITYSDK_OFFSET(0xCF02AA0)

	class AELMAJAHPCP___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierEvent callBackEventType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMAJAHPCP___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _CountModifierCallBackEventStack_b__0(::LPNPMKNMMOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPNPMKNMMOK*))((::PBYTE)hIl2Cpp + AELMAJAHPCP___C__DISPLAYCLASS5_0__COUNTMODIFIERCALLBACKEVENTSTACK_B__0_OFFSET))(this, a1);
		}

	};
