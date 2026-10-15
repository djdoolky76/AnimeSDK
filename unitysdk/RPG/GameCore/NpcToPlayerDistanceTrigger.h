#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcToPlayerDistanceTrigger; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B0510)
#define RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B0530)
#define RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B04C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcToPlayerDistanceTrigger_TypeDefinitionIndex = 20334;

	class NpcToPlayerDistanceTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupNpcID; // 0x1C
		::System::Single NearDistance; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NearTask; // 0x28
		::System::Single FarDistance; // 0x30
		::System::Byte _padding1[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* FarTask; // 0x38
		::System::Single AwakeWaitTime; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcToPlayerDistanceTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcToPlayerDistanceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcToPlayerDistanceTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcToPlayerDistanceTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCTOPLAYERDISTANCETRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
