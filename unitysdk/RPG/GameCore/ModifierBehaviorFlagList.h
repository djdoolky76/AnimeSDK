#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierBehaviorFlagList; }

#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88C860)
#define RPG_GAMECORE_MODIFIERBEHAVIORFLAGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88C7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierBehaviorFlagList_TypeDefinitionIndex = 17106;

	class ModifierBehaviorFlagList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierBehaviorFlagList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierBehaviorFlagList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERBEHAVIORFLAGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
