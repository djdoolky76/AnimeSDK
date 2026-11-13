#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BasePlanetFesBuff; }
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::GameCore { class PlanetFesEffectRow; }

#define AJNGOHLNFKK_CTOR_OFFSET UNITYSDK_OFFSET(0x19D4A260)
#define AJNGOHLNFKK_JCEMLMIABIP_1_OFFSET UNITYSDK_OFFSET(0x19D4A1F0)
#define AJNGOHLNFKK_JCEMLMIABIP_OFFSET UNITYSDK_OFFSET(0x19D49F70)
#define AJNGOHLNFKK_NECKGJFCFJK_OFFSET UNITYSDK_OFFSET(0x19D4A100)

inline static constexpr unsigned int AJNGOHLNFKK_TypeDefinitionIndex = 68480;

	class AJNGOHLNFKK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNGOHLNFKK_CTOR_OFFSET))(this);
		}

		::RPG::Client::IPlanetFesBuff* JCEMLMIABIP(::RPG::GameCore::PlanetFesEffectRow* a1)
		{
			return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectRow*))((::PBYTE)hIl2Cpp + AJNGOHLNFKK_JCEMLMIABIP_OFFSET))(this, a1);
		}

		::RPG::Client::IPlanetFesBuff* JCEMLMIABIP_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNGOHLNFKK_JCEMLMIABIP_1_OFFSET))(this, a1);
		}

		::RPG::Client::BasePlanetFesBuff* NECKGJFCFJK(::RPG::GameCore::PlanetFesEffectType a1)
		{
			return ((::RPG::Client::BasePlanetFesBuff*(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectType))((::PBYTE)hIl2Cpp + AJNGOHLNFKK_NECKGJFCFJK_OFFSET))(this, a1);
		}

	};
