#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkBuffRow; }

#define RPG_GAMECORE_CLOCKPARKBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58C5D0)
#define RPG_GAMECORE_CLOCKPARKBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D58BD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffRow_TypeDefinitionIndex = 11184;

	class ClockParkBuffRow : public ::System::Object
	{
	public:
		::System::UInt32 Times; // 0x10
		::System::Int32 Param3; // 0x14
		::RPG::Client::TextID BuffTitle; // 0x18
		::RPG::Client::TextID BuffDesc; // 0x28
		::System::Int32 Param2; // 0x38
		::RPG::GameCore::ClockParkBuffType BuffType; // 0x3C
		::System::UInt32 BuffID; // 0x40
		::System::Int32 Param1; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
