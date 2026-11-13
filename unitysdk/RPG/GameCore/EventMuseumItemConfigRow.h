#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EventMuseumItemConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0FA280)
#define RPG_GAMECORE_EVENTMUSEUMITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F0F9B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventMuseumItemConfigRow_TypeDefinitionIndex = 14392;

	class EventMuseumItemConfigRow : public ::System::Object
	{
	public:
		::System::String* MissionStartString; // 0x10
		::System::UInt32 MissionID; // 0x18
		::System::Boolean ForceComplete; // 0x1C
		::System::Boolean IsTargetReward; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 MuseumItemID; // 0x20
		::System::UInt32 EventMuseumItemID; // 0x24
		::RPG::Client::TextID EventContentTextID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EventMuseumItemConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EventMuseumItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTMUSEUMITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
