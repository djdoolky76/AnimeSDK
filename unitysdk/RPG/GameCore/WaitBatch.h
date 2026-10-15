#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaitBatchTriggerRule.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitBatch; }
namespace RPG::GameCore { class WaitBatchItem; }

#define RPG_GAMECORE_WAITBATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC66E30)
#define RPG_GAMECORE_WAITBATCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC66E40)
#define RPG_GAMECORE_WAITBATCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC66DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBatch_TypeDefinitionIndex = 23760;

	class WaitBatch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WaitBatchTriggerRule TriggerRule; // 0x18
		::System::Boolean ParallelTrigger; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::WaitBatchItem*>* WaitList; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
