#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesEffectTypeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESEFFECTTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE668A0)
#define RPG_GAMECORE_PLANETFESEFFECTTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE666F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesEffectTypeConfigRow_TypeDefinitionIndex = 12258;

	class PlanetFesEffectTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Decription; // 0x18
		::RPG::GameCore::PlanetFesEffectType ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesEffectTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
