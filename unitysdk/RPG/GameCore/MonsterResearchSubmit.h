#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterResearchSubmit; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B7270)
#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B7280)
#define RPG_GAMECORE_MONSTERRESEARCHSUBMIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B7240)

namespace RPG::GameCore
{
	class MonsterResearchSubmit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ActivityMonsterResearchID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion1; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion2; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnQuestion3; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterResearchSubmit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterResearchSubmit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterResearchSubmit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterResearchSubmit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERRESEARCHSUBMIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
