#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkBuffRow; }

#define RPG_GAMECORE_CLOCKPARKBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C9EB0)
#define RPG_GAMECORE_CLOCKPARKBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7C9630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffRow_TypeDefinitionIndex = 11200;

	class ClockParkBuffRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID BuffTitle; // 0x10
		::System::UInt32 Times; // 0x20
		::System::Int32 Param3; // 0x24
		::System::Int32 Param2; // 0x28
		::System::Int32 Param1; // 0x2C
		::RPG::Client::TextID BuffDesc; // 0x30
		::System::UInt32 BuffID; // 0x40
		::RPG::GameCore::ClockParkBuffType BuffType; // 0x44
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
