#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityDisplayRow; }

#define RPG_GAMECORE_CHIMERAABILITYDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596960)
#define RPG_GAMECORE_CHIMERAABILITYDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D596750)

namespace RPG::GameCore
{
	class ChimeraAbilityDisplayRow : public ::System::Object
	{
	public:
		::System::UInt32 DisplayID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AbilityName; // 0x18
		::RPG::Client::TextID AbilityDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
