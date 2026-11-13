#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesRegionPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESREGIONPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6BFA0)
#define RPG_GAMECORE_PLANETFESREGIONPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE6BC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesRegionPhaseRow_TypeDefinitionIndex = 12312;

	class PlanetFesRegionPhaseRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::RPG::Client::TextID EffectDesc; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 BuffID; // 0x38
		::System::UInt32 RewardID; // 0x3C
		::RPG::Client::TextID Description; // 0x40
		::System::UInt32 PhaseID; // 0x50
		::System::UInt32 ProgressValue; // 0x54
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
