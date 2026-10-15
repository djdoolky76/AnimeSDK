#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
class CGBMCEKFFII;
namespace RPG::Client { class PlanetFesFloatingController; }
namespace UnityEngine { class Transform; }

#define CGBMCEKFFII_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCC7FF80)
#define CGBMCEKFFII_CTOR_OFFSET UNITYSDK_OFFSET(0xCC80150)
#define CGBMCEKFFII_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xCC800D0)
#define CGBMCEKFFII_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCC80010)
#define CGBMCEKFFII__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xCC80160)

inline static constexpr unsigned int CGBMCEKFFII_TypeDefinitionIndex = 74466;

	class CGBMCEKFFII : public ::MFDDEJCPLON
	{
	public:
		::UnityEngine::Transform* IGDPLGAGAHF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMCEKFFII_CTOR_OFFSET))(this);
		}

		static ::CGBMCEKFFII* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Transform* a2)
		{
			return ((::CGBMCEKFFII*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CGBMCEKFFII_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMCEKFFII_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMCEKFFII_ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnExecute_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBMCEKFFII__ONEXECUTE_B__1_0_OFFSET))(this);
		}

	};
