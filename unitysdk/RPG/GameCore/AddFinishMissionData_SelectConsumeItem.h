#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddFinishMissionData_SelectConsumeItem; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3877B0)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D387830)
#define RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D387710)

namespace RPG::GameCore
{
	class AddFinishMissionData_SelectConsumeItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::System::Boolean OnlyPerformance; // 0x1C
		::System::Byte _padding0[0x3];
		::Il2CppArray<::System::UInt32>* ItemIDList; // 0x20
		::Il2CppArray<::System::UInt32>* ItemHiddenIDList; // 0x28
		::Il2CppArray<::System::UInt32>* ItemInvisibleIDList; // 0x30
		::Il2CppArray<::RPG::GameCore::SelectMissionItemConfig*>* ItemSelect; // 0x38
		::System::UInt32 SlotNum; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID InfoText; // 0x48
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x58
		::System::Boolean MaskErrorItem; // 0x60
		::System::Byte _padding2[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitFail; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDFINISHMISSIONDATA_SELECTCONSUMEITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
