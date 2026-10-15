#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddFinishMissionData_ConsumeItem; }
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D386C10)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D386C20)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D386BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddFinishMissionData_ConsumeItem_TypeDefinitionIndex = 21574;

	class AddFinishMissionData_ConsumeItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Boolean IsUseLocalItemList; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* LocalItemList; // 0x20
		::System::Boolean OnlyPerformance; // 0x28
		::System::Boolean UseNewItemDialog; // 0x29
		::System::Boolean IsShowConsumeFinishTips; // 0x2A
		::System::Boolean IsAutoConsume; // 0x2B
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID Desc; // 0x30
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitConfirm; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_ConsumeItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_ConsumeItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_ConsumeItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_ConsumeItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_CONSUMEITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
