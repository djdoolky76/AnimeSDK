#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddWeakness; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDWEAKNESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D35F890)
#define RPG_GAMECORE_ADDWEAKNESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D35F8A0)
#define RPG_GAMECORE_ADDWEAKNESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35F860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddWeakness_TypeDefinitionIndex = 23076;

	class AddWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackDamageType DamageType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ResistanceDeltaValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKNESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKNESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKNESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
