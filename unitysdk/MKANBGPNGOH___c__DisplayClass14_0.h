#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define MKANBGPNGOH___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9868D0)
#define MKANBGPNGOH___C__DISPLAYCLASS14_0___DAMAGEHITPERFORMANCEDELAY_B__0_OFFSET UNITYSDK_OFFSET(0xB986BC0)

inline static constexpr unsigned int MKANBGPNGOH___c__DisplayClass14_0_TypeDefinitionIndex = 53856;

	class MKANBGPNGOH___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::GameCore::GameEntity* target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKANBGPNGOH___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __DamageHitPerformanceDelay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKANBGPNGOH___C__DISPLAYCLASS14_0___DAMAGEHITPERFORMANCEDELAY_B__0_OFFSET))(this);
		}

	};
