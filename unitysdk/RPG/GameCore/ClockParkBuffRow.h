#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkBuffRow; }

#define RPG_GAMECORE_CLOCKPARKBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F502C10)
#define RPG_GAMECORE_CLOCKPARKBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F502390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffRow_TypeDefinitionIndex = 11200;

	class ClockParkBuffRow : public ::System::Object
	{
	public:
		::System::Int32 Param1; // 0x10
		::System::Int32 Param2; // 0x14
		::RPG::GameCore::ClockParkBuffType BuffType; // 0x18
		::System::Int32 Param3; // 0x1C
		::RPG::Client::TextID BuffTitle; // 0x20
		::RPG::Client::TextID BuffDesc; // 0x30
		::System::UInt32 Times; // 0x40
		::System::UInt32 BuffID; // 0x44
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
