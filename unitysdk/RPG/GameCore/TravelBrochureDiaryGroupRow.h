#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TravelBrochureDiaryGroupRow; }

#define RPG_GAMECORE_TRAVELBROCHUREDIARYGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3BA30)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC3B7F0)

namespace RPG::GameCore
{
	class TravelBrochureDiaryGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChoiceIDList; // 0x10
		::Il2CppArray<::System::UInt32>* TextIDList; // 0x18
		::RPG::Client::TextID DiaryDescription; // 0x20
		::System::UInt32 RewardID; // 0x30
		::System::UInt32 ID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelBrochureDiaryGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelBrochureDiaryGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
