#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EventStuffConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVENTSTUFFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D683990)
#define RPG_GAMECORE_EVENTSTUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D683250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventStuffConfigRow_TypeDefinitionIndex = 14237;

	class EventStuffConfigRow : public ::System::Object
	{
	public:
		::System::String* MissionStartString; // 0x10
		::RPG::Client::TextID EventContentTextID; // 0x18
		::System::UInt32 EventStuffID; // 0x28
		::System::Boolean ForceComplete; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 StuffID; // 0x30
		::System::UInt32 MissionID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EventStuffConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EventStuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTSTUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
