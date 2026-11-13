#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyEventBgConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYEVENTBGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DBD10)
#define RPG_GAMECORE_TRAINPARTYEVENTBGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5DBB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyEventBgConfigRow_TypeDefinitionIndex = 15479;

	class TrainPartyEventBgConfigRow : public ::System::Object
	{
	public:
		::System::String* BgImage; // 0x10
		::System::String* BgConfigJsonPath; // 0x18
		::System::String* TriggerAnimationName; // 0x20
		::System::UInt32 BgID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTBGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyEventBgConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyEventBgConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYEVENTBGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
