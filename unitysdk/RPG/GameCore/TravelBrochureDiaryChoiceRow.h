#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TravelBrochureDiaryChoiceRow; }

#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE4EAA0)
#define RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE4E000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureDiaryChoiceRow_TypeDefinitionIndex = 15529;

	class TravelBrochureDiaryChoiceRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChoiceMessage; // 0x10
		::RPG::Client::TextID DetailMessage; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelBrochureDiaryChoiceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelBrochureDiaryChoiceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHUREDIARYCHOICEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
