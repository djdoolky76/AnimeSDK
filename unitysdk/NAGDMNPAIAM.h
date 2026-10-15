#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IFEABBJBIGK;
namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NAGDMNPAIAM_CNBDFMHINLA_OFFSET UNITYSDK_OFFSET(0xBA947F0)
#define NAGDMNPAIAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA939A0)
#define NAGDMNPAIAM_NHHHMIHOJCG_OFFSET UNITYSDK_OFFSET(0xBA939B0)
#define NAGDMNPAIAM_NJHLEMHBDCH_OFFSET UNITYSDK_OFFSET(0xBA94010)
#define NAGDMNPAIAM_OIACHHCPOEN_OFFSET UNITYSDK_OFFSET(0xBA94BF0)

inline static constexpr unsigned int NAGDMNPAIAM_TypeDefinitionIndex = 66469;

	class NAGDMNPAIAM : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesFloatingController* CFKHNPGEAJA; // 0x10
		::System::Void _ctor(::RPG::Client::PlanetFesFloatingController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController*))((::PBYTE)hIl2Cpp + NAGDMNPAIAM_CTOR_OFFSET))(this, a1);
		}

		::IFEABBJBIGK* NHHHMIHOJCG(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::PlanetFesFloatingController_CoinAmount a3)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::PlanetFesFloatingController_CoinAmount))((::PBYTE)hIl2Cpp + NAGDMNPAIAM_NHHHMIHOJCG_OFFSET))(this, a1, a2, a3);
		}

		::IFEABBJBIGK* NJHLEMHBDCH(::UnityEngine::Transform* a1, ::RPG::Client::PlanetFesFloatingController_ItemType a2, ::System::String* a3, ::System::String* a4, ::System::Single a5)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + NAGDMNPAIAM_NJHLEMHBDCH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::IFEABBJBIGK* CNBDFMHINLA(::UnityEngine::Vector3 a1, ::System::String* a2)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + NAGDMNPAIAM_CNBDFMHINLA_OFFSET))(this, a1, a2);
		}

		::IFEABBJBIGK* OIACHHCPOEN(::UnityEngine::Transform* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + NAGDMNPAIAM_OIACHHCPOEN_OFFSET))(this, a1, a2, a3, a4);
		}

	};
