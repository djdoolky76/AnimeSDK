#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvertisingBoardConfigRow; }

#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E904590)
#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E904350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvertisingBoardConfigRow_TypeDefinitionIndex = 12658;

	class AdvertisingBoardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 AdvertisingBoardID; // 0x10
		::System::UInt32 VoiceID; // 0x14
		::System::Boolean IsSwitch; // 0x18
		::System::Boolean IsPlayerInvolved; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single Interval; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvertisingBoardConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvertisingBoardConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
