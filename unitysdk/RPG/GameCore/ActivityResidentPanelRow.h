#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityResidentPanelRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA97350)
#define RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA96EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityResidentPanelRow_TypeDefinitionIndex = 11256;

	class ActivityResidentPanelRow : public ::System::Object
	{
	public:
		::System::String* IntroGuideImg; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* FinishConditions; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x20
		::System::String* EntranceImg; // 0x28
		::RPG::Client::TextID PanelDesc; // 0x30
		::RPG::Client::TextID IntroDesc; // 0x40
		::System::UInt32 SortWeight; // 0x50
		::System::Boolean DisplayItemManualSort; // 0x54
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FixPoint ExpectTime; // 0x58
		::System::UInt32 PanelID; // 0x60
		::System::UInt32 IntroGuideVideoID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityResidentPanelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityResidentPanelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
