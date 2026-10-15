#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvertisingBoardConfigRow; }

#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A3790)
#define RPG_GAMECORE_ADVERTISINGBOARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3A3550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvertisingBoardConfigRow_TypeDefinitionIndex = 12591;

	class AdvertisingBoardConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 VoiceID; // 0x10
		::System::Single Interval; // 0x14
		::System::UInt32 AdvertisingBoardID; // 0x18
		::System::Boolean IsSwitch; // 0x1C
		::System::Boolean IsPlayerInvolved; // 0x1D
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
