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

#define RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37CFC0)
#define RPG_GAMECORE_ACTIVITYRESIDENTPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D37CB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityResidentPanelRow_TypeDefinitionIndex = 11205;

	class ActivityResidentPanelRow : public ::System::Object
	{
	public:
		::System::String* IntroGuideImg; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x18
		::System::String* EntranceImg; // 0x20
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* FinishConditions; // 0x28
		::RPG::GameCore::FixPoint ExpectTime; // 0x30
		::System::UInt32 PanelID; // 0x38
		::System::Boolean DisplayItemManualSort; // 0x3C
		::System::Byte _padding0[0x3];
		::System::UInt32 IntroGuideVideoID; // 0x40
		::System::UInt32 SortWeight; // 0x44
		::RPG::Client::TextID PanelDesc; // 0x48
		::RPG::Client::TextID IntroDesc; // 0x58
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
