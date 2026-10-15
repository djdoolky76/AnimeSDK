#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS144_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD013EC0)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS144_0__SETUPSIMPLETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xD022FD0)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS144_0__SETUPSIMPLETRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0xD023030)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimGameInstance___c__DisplayClass144_0_TypeDefinitionIndex = 60393;

	class FiveDimGameInstance___c__DisplayClass144_0 : public ::System::Object
	{
	public:
		::KJFIKOKBCCA onEnter; // 0x10
		::KJFIKOKBCCA onExit; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS144_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupSimpleTrigger_b__0(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS144_0__SETUPSIMPLETRIGGER_B__0_OFFSET))(this, a1);
		}

		::System::Void _SetupSimpleTrigger_b__1(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS144_0__SETUPSIMPLETRIGGER_B__1_OFFSET))(this, a1);
		}

	};
}
