#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPassengerDiaryRow; }

#define RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC05F20)
#define RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC05DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPassengerDiaryRow_TypeDefinitionIndex = 15319;

	class TrainPartyPassengerDiaryRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DiaryText; // 0x10
		::System::UInt32 DiaryID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPassengerDiaryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPassengerDiaryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
