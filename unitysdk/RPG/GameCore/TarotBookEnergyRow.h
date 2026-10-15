#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookEnergyRow; }

#define RPG_GAMECORE_TAROTBOOKENERGYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB76050)
#define RPG_GAMECORE_TAROTBOOKENERGYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB75E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookEnergyRow_TypeDefinitionIndex = 15236;

	class TarotBookEnergyRow : public ::System::Object
	{
	public:
		::System::UInt32 SubmissionID; // 0x10
		::System::Boolean IsRepetitive; // 0x14
		::System::Boolean IsSilence; // 0x15
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID Toast; // 0x18
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
