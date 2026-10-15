#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotExperimentFilesRow; }

#define RPG_GAMECORE_TAROTEXPERIMENTFILESROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB77C20)
#define RPG_GAMECORE_TAROTEXPERIMENTFILESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB77A60)

namespace RPG::GameCore
{
	class TarotExperimentFilesRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 VoiceID; // 0x14
		::RPG::Client::TextID Sentence; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTEXPERIMENTFILESROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotExperimentFilesRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotExperimentFilesRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTEXPERIMENTFILESROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
