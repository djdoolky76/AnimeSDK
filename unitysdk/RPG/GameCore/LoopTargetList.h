#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class LoopTargetList; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LOOPTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1F07ABC0)
#define RPG_GAMECORE_LOOPTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F07AC30)
#define RPG_GAMECORE_LOOPTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F07AB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopTargetList_TypeDefinitionIndex = 23323;

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
