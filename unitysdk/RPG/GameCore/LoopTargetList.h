#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LoopTargetList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LOOPTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F6440)
#define RPG_GAMECORE_LOOPTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F64B0)
#define RPG_GAMECORE_LOOPTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F63B0)

namespace RPG::GameCore
{
	class LoopTargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MaxLoopCount; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
