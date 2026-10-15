#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class ShowActionBarEffect; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWACTIONBAREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD5EF0)
#define RPG_GAMECORE_SHOWACTIONBAREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD5F40)
#define RPG_GAMECORE_SHOWACTIONBAREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD5E80)

namespace RPG::GameCore
{
	class ShowActionBarEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::Int32>* MultiActionIndexes; // 0x20
		::System::Boolean IsShow; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::ActionBarEffectConfig*>* EffectPrefabs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONBAREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowActionBarEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowActionBarEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONBAREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowActionBarEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowActionBarEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWACTIONBAREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
