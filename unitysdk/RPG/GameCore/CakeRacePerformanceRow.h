#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CakeRacePerformenceAudioTagType.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerPerformanceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRacePerformanceRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEPERFORMANCEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D552080)
#define RPG_GAMECORE_CAKERACEPERFORMANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D551E00)

namespace RPG::GameCore
{
	class CakeRacePerformanceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* PerformanceParam; // 0x10
		::RPG::GameCore::CakeRacePerformenceAudioTagType AudioTag; // 0x18
		::System::UInt32 Priority; // 0x1C
		::RPG::GameCore::CakeRaceTriggerPerformanceType PerformType; // 0x20
		::System::UInt32 PerformanceID; // 0x24
		::RPG::Client::TextID PerformTextmap; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPERFORMANCEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRacePerformanceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRacePerformanceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPERFORMANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
