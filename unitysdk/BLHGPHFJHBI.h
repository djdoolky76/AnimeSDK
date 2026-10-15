#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
class BLHGPHFJHBI;
namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define BLHGPHFJHBI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA73290)
#define BLHGPHFJHBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA734B0)
#define BLHGPHFJHBI_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBA73430)
#define BLHGPHFJHBI_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBA73330)
#define BLHGPHFJHBI__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBA734C0)

	class BLHGPHFJHBI : public ::MFDDEJCPLON
	{
	public:
		::System::String* GJEAIKIINML; // 0x28
		::UnityEngine::Transform* NPAFMEBNFOB; // 0x30
		::RPG::Client::PlanetFesFloatingController_CoinAmount OKMFOGLIGOI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGPHFJHBI_CTOR_OFFSET))(this);
		}

		static ::BLHGPHFJHBI* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::RPG::Client::PlanetFesFloatingController_CoinAmount a4)
		{
			return ((::BLHGPHFJHBI*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::PlanetFesFloatingController_CoinAmount))((::PBYTE)hIl2Cpp + BLHGPHFJHBI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGPHFJHBI_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGPHFJHBI_ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnExecute_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGPHFJHBI__ONEXECUTE_B__1_0_OFFSET))(this);
		}

	};
