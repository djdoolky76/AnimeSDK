#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesRegionPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESREGIONPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FD840)
#define RPG_GAMECORE_PLANETFESREGIONPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8FD4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesRegionPhaseRow_TypeDefinitionIndex = 12255;

	class PlanetFesRegionPhaseRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::System::UInt32 BuffID; // 0x18
		::System::UInt32 PhaseID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::RPG::Client::TextID EffectDesc; // 0x30
		::System::UInt32 ProgressValue; // 0x40
		::System::UInt32 RewardID; // 0x44
		::RPG::Client::TextID Description; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESREGIONPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesRegionPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesRegionPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESREGIONPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
