#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierBehaviorFlagListPair; }

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGLISTPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88C990)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGLISTPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88C870)

namespace RPG::GameCore
{
	class ModifierBehaviorFlagListPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierBehaviorFlag Key; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGLISTPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierBehaviorFlagListPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierBehaviorFlagListPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGLISTPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
