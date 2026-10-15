#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetSkillSlotData; }
namespace RPG::GameCore { class AdvSetSkillSlotDataItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETSKILLSLOTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0F10)
#define RPG_GAMECORE_ADVSETSKILLSLOTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B0F50)
#define RPG_GAMECORE_ADVSETSKILLSLOTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B0EB0)

namespace RPG::GameCore
{
	class AdvSetSkillSlotData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::AdvSetSkillSlotDataItem*>* Datas; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetSkillSlotData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetSkillSlotData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetSkillSlotData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetSkillSlotData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
