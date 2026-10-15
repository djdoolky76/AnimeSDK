#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DispelOrder.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DispelStatus; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DISPELSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6179D0)
#define RPG_GAMECORE_DISPELSTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6179F0)
#define RPG_GAMECORE_DISPELSTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D617990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DispelStatus_TypeDefinitionIndex = 22684;

	class DispelStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean OnlyAlive; // 0x20
		::System::Boolean OnlyCanDispel; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::EnumStatusType BuffType; // 0x24
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlags; // 0x28
		::RPG::GameCore::DynamicFloat* Numbers; // 0x30
		::RPG::GameCore::DispelOrder Order; // 0x38
		::System::Byte _padding1[0x4];
		::System::String* DispelCountKey; // 0x40
		::RPG::GameCore::PredicateConfig* Condition; // 0x48
		::System::Boolean IsSilentDispel; // 0x50
		::System::Boolean MuteAllVisualEffect; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPELSTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DispelStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DispelStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPELSTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DispelStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DispelStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISPELSTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
