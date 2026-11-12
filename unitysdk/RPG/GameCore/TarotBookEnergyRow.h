#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookEnergyRow; }

#define RPG_GAMECORE_TAROTBOOKENERGYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE257D0)
#define RPG_GAMECORE_TAROTBOOKENERGYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE25590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookEnergyRow_TypeDefinitionIndex = 15392;

	class TarotBookEnergyRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Toast; // 0x10
		::System::UInt32 SubmissionID; // 0x20
		::System::Boolean IsSilence; // 0x24
		::System::Boolean IsRepetitive; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKENERGYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotBookEnergyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotBookEnergyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKENERGYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
