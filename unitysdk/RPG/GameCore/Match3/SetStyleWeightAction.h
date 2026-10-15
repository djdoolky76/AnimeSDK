#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace RPG::GameCore::Match3 { class SetStyleWeightAction; }

#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D850CD0)
#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D850CE0)
#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D850C80)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetStyleWeightAction_TypeDefinitionIndex = 24908;

	class SetStyleWeightAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::BirdStyleWeightConfig*>* StyleWeights; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetStyleWeightAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetStyleWeightAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::SetStyleWeightAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::SetStyleWeightAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
