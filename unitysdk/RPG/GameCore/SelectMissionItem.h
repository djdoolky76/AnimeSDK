#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SelectMissionItem; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SELECTMISSIONITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8BE80)
#define RPG_GAMECORE_SELECTMISSIONITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8BF00)
#define RPG_GAMECORE_SELECTMISSIONITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8BDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectMissionItem_TypeDefinitionIndex = 20447;

	class SelectMissionItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
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
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitSucceed; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitFail; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x78
		::Il2CppArray<::System::UInt32>* SubmittedItemIDs; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectMissionItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectMissionItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectMissionItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectMissionItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
