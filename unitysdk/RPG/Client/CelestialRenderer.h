#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CelestialBodyData;
class HGEGFCADEEC;
class OrbitData;
class PEKCKMDIAFL;

#define RPG_CLIENT_CELESTIALRENDERER_BINDTOSOLARSYSTEM_OFFSET UNITYSDK_OFFSET(0xC934FC0)
#define RPG_CLIENT_CELESTIALRENDERER_CTOR_OFFSET UNITYSDK_OFFSET(0xC935110)
#define RPG_CLIENT_CELESTIALRENDERER_GET_BODYTYPE_OFFSET UNITYSDK_OFFSET(0xC934FA0)
#define RPG_CLIENT_CELESTIALRENDERER_GET_SOLARSYSTEM_OFFSET UNITYSDK_OFFSET(0xC934F80)
#define RPG_CLIENT_CELESTIALRENDERER_SET_BODYTYPE_OFFSET UNITYSDK_OFFSET(0xC934FB0)
#define RPG_CLIENT_CELESTIALRENDERER_SET_SOLARSYSTEM_OFFSET UNITYSDK_OFFSET(0xC934F90)

namespace RPG::Client
{
	inline static constexpr unsigned int CelestialRenderer_TypeDefinitionIndex = 69792;

	class CelestialRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 BFJPDKHLGOF; // 0x18
		::System::Byte _padding0[0x4];
		::HGEGFCADEEC* EKNJLLJKOIH; // 0x28
		::PEKCKMDIAFL* _SolarSystem_k__BackingField; // 0x30
		::CelestialBodyType _BodyType_k__BackingField; // 0x38
		::System::Byte _padding1[0x4];
		::OrbitData* KDKDPCOAPHD; // 0x40
		::CelestialBodyData* LLLAGFNLJFF; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_CTOR_OFFSET))(this);
		}

		::PEKCKMDIAFL* get_SolarSystem()
		{
			return ((::PEKCKMDIAFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_GET_SOLARSYSTEM_OFFSET))(this);
		}

		::System::Void set_SolarSystem(::PEKCKMDIAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEKCKMDIAFL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_SET_SOLARSYSTEM_OFFSET))(this, a1);
		}

		::CelestialBodyType get_BodyType()
		{
			return ((::CelestialBodyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_GET_BODYTYPE_OFFSET))(this);
		}

		::System::Void set_BodyType(::CelestialBodyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::CelestialBodyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_SET_BODYTYPE_OFFSET))(this, a1);
		}

		::System::Void BindToSolarSystem(::PEKCKMDIAFL* a1, ::CelestialBodyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEKCKMDIAFL*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CELESTIALRENDERER_BINDTOSOLARSYSTEM_OFFSET))(this, a1, a2);
		}

	};
}
