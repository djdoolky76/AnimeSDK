#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E974020)
#define RPG_GAMECORE_HELIOBUSPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E973750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPhaseRow_TypeDefinitionIndex = 13896;

	class HeliobusPhaseRow : public ::System::Object
	{
	public:
		::System::String* PhaseBigIconPath; // 0x10
		::System::String* PhaseSmallIconPath; // 0x18
		::RPG::Client::TextID PhaseTextID; // 0x20
		::System::UInt32 PhaseFans; // 0x30
		::System::UInt32 ReceiveMissionID; // 0x34
		::RPG::Client::TextID Heliobus_ToDoListTitle_After; // 0x38
		::System::UInt32 UnlockMissionID; // 0x48
		::System::UInt32 HeliobusPhaseID; // 0x4C
		::RPG::Client::TextID Heliobus_UpMissionDesc; // 0x50
		::RPG::Client::TextID Heliobus_ToDoListTitle_Before; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
