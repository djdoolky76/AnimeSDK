#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RayFire { class RFSound; }
namespace RayFire { class RayfireRigid; }

#define RAYFIRE_RAYFIRESOUND_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x2993DE0)
#define RAYFIRE_RAYFIRESOUND_B88EF2FF921A89C7_OFFSET UNITYSDK_OFFSET(0x2993B60)
#define RAYFIRE_RAYFIRESOUND_BC7F534A8275D79E_OFFSET UNITYSDK_OFFSET(0x2993A50)
#define RAYFIRE_RAYFIRESOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x2994190)

namespace RayFire
{
	inline static constexpr unsigned int RayfireSound_TypeDefinitionIndex = 15506;

	class RayfireSound : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single baseVolume; // 0x20
		::System::Single sizeVolume; // 0x24
		::RayFire::RFSound* initialization; // 0x28
		::RayFire::RFSound* activation; // 0x30
		::RayFire::RFSound* demolition; // 0x38
		::System::Single minimumSize; // 0x40
		::System::Single cameraDistance; // 0x44
		::RayFire::RayfireRigid* rigid; // 0x48

		::System::Void BC7F534A8275D79E(::RayFire::RayfireSound* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireSound*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESOUND_BC7F534A8275D79E_OFFSET))(this, AFE8F10692F5139F);
		}

		::System::Void A788EA8D7C189191()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESOUND_A788EA8D7C189191_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESOUND__CTOR_OFFSET))(this);
		}

		::System::Void B88EF2FF921A89C7(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESOUND_B88EF2FF921A89C7_OFFSET))(this, F2C7FF5A19F78852);
		}
	};
}
