#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEJDPBDKGOG.h"
#include "unitysdk/FCHFMCMPPIG.h"
#include "unitysdk/HABAIHAINBK.h"
#include "unitysdk/IADIKEHENEG.h"
#include "unitysdk/MoleMole/SurfCameraContext.h"
#include "unitysdk/OOFIJABOMCL.h"
#include "unitysdk/System/Object.h"

class JBEDANFJICI;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigSurfVehicle; }
namespace UnityEngine { class GameObject; }

#define FHGHJDPHHEL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x132135D0)
#define FHGHJDPHHEL__CTOR_OFFSET UNITYSDK_OFFSET(0x13213550)

inline static constexpr unsigned int FHGHJDPHHEL_TypeDefinitionIndex = 91593;

class FHGHJDPHHEL : public ::System::Object
{
public:
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18
	::BEJDPBDKGOG FBEABLLNNOK; // 0x20
	::MoleMole::Config::ConfigSurfVehicle* DFMKILICPFB; // 0xC0
	::JBEDANFJICI* ELKICNLJCAM; // 0xC8
	::HABAIHAINBK GHCOEDNLNDN; // 0xD0
	::OOFIJABOMCL NDMNMLLEJCE; // 0x1E0
	::FCHFMCMPPIG PGABKCHKKKH; // 0x210
	::IADIKEHENEG HLFFCMIFFIB; // 0x220
	::MoleMole::SurfCameraContext KONLMDBCDCK; // 0x258

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::MoleMole::Config::ConfigSurfVehicle* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::MoleMole::Config::ConfigSurfVehicle*))((::PBYTE)hIl2Cpp + FHGHJDPHHEL__CTOR_OFFSET))(this, KECKGDFIALJ, NJOAJLDJCCJ, DFMKILICPFB);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHGHJDPHHEL_NPOLNFDBOOD_OFFSET))(this);
	}
};
