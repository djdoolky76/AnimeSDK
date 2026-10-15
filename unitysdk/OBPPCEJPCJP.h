#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
#include "unitysdk/UnityEngine/Vector3.h"
class OBPPCEJPCJP;
namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }

#define OBPPCEJPCJP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD53A90)
#define OBPPCEJPCJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD53C30)
#define OBPPCEJPCJP_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBD53B40)
#define OBPPCEJPCJP__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBD53C40)

	class OBPPCEJPCJP : public ::MFDDEJCPLON
	{
	public:
		::System::String* MJPKBIGCFOM; // 0x28
		::UnityEngine::Vector3 FJBPOFJPFNP; // 0x30
		::RPG::Client::PlanetFesFloatingController_CoinAmount OKMFOGLIGOI; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPPCEJPCJP_CTOR_OFFSET))(this);
		}

		static ::OBPPCEJPCJP* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
		{
			return ((::OBPPCEJPCJP*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + OBPPCEJPCJP_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPPCEJPCJP_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnExecute_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPPCEJPCJP__ONEXECUTE_B__1_0_OFFSET))(this);
		}

	};
