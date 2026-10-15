#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunProjectile.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0xE47B9A0)
#define RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_GKOIKCBJICD_1_OFFSET UNITYSDK_OFFSET(0xE47B490)
#define RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_GKOIKCBJICD_OFFSET UNITYSDK_OFFSET(0xE47B0B0)
#define RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_GLKGNALFGLF_OFFSET UNITYSDK_OFFSET(0xE47B800)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayerProjectile_TypeDefinitionIndex = 68763;

	class WolfBroGunPlayerProjectile : public ::RPG::Client::WolfBroGunProjectile
	{
	public:
		// static const ::System::Object BOAPMGKGGJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_CTOR_OFFSET))(this);
		}

		::System::Void GKOIKCBJICD(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_GKOIKCBJICD_OFFSET))(this, a1, a2);
		}

		::System::Void GKOIKCBJICD_1(::RPG::Client::WolfBroGunPlayTarget* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_GKOIKCBJICD_1_OFFSET))(this, a1, a2);
		}

		::System::Void GLKGNALFGLF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYERPROJECTILE_GLKGNALFGLF_OFFSET))(this, a1);
		}

	};
}
