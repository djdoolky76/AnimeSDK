#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EventStuffConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVENTSTUFFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88FBB0)
#define RPG_GAMECORE_EVENTSTUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E88F470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventStuffConfigRow_TypeDefinitionIndex = 14394;

	class EventStuffConfigRow : public ::System::Object
	{
	public:
		::System::String* MissionStartString; // 0x10
		::System::UInt32 MissionID; // 0x18
		::System::UInt32 EventStuffID; // 0x1C
		::System::UInt32 StuffID; // 0x20
		::System::Boolean ForceComplete; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID EventContentTextID; // 0x28
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
