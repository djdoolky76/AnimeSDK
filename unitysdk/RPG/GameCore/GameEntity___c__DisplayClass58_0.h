#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/System/Object.h"
class HIOAMIPNLIN;

#define RPG_GAMECORE_GAMEENTITY___C__DISPLAYCLASS58_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE6A7BC0)
#define RPG_GAMECORE_GAMEENTITY___C__DISPLAYCLASS58_0__DEATHRATTLE_B__0_OFFSET UNITYSDK_OFFSET(0xE6A9D00)

namespace RPG::GameCore
{
	class GameEntity___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* pFlags; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY___C__DISPLAYCLASS58_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Deathrattle_b__0(::HIOAMIPNLIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY___C__DISPLAYCLASS58_0__DEATHRATTLE_B__0_OFFSET))(this, a1);
		}

	};
}
