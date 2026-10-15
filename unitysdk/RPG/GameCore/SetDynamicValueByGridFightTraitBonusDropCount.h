#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueByGridFightTraitBonusDropCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA59A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA59B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA5970)

namespace RPG::GameCore
{
	class SetDynamicValueByGridFightTraitBonusDropCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Trait; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::GridFightDropCfgType DropType; // 0x2C
		::System::UInt32 TraitID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* TraitBonusCountFrom; // 0x38
		::RPG::GameCore::DynamicFloat* TraitBonusCountTo; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSDROPCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
