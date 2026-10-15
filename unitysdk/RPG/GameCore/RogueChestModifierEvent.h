#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/RPG/GameCore/ModifierTriggerType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueChestModifierEvent; }

#define RPG_GAMECORE_ROGUECHESTMODIFIEREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D983720)
#define RPG_GAMECORE_ROGUECHESTMODIFIEREVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9834A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestModifierEvent_TypeDefinitionIndex = 17910;

	class RogueChestModifierEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierTriggerType TriggerType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* TriggerParamList; // 0x18
		::RPG::GameCore::ModifierEffectType EffectType; // 0x20
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Int32>* EffectParamList; // 0x28
		::Il2CppArray<::System::Int32>* EffectParam2List; // 0x30
		::System::Single Weight; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTMODIFIEREVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueChestModifierEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueChestModifierEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTMODIFIEREVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
