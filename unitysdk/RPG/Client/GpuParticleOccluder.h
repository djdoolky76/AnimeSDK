#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GpuParticleOccluder_OBB.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_GPUPARTICLEOCCLUDER_CTOR_OFFSET UNITYSDK_OFFSET(0xDA49990)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_HONLHJIIKHD_OFFSET UNITYSDK_OFFSET(0xDA49390)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_NLOBDMHENKP_OFFSET UNITYSDK_OFFSET(0xDA494D0)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDA492F0)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDA48D00)
#define RPG_CLIENT_GPUPARTICLEOCCLUDER_REFRESHDISTANCETOCAMERA_OFFSET UNITYSDK_OFFSET(0xDA49750)

namespace RPG::Client
{
	inline static constexpr unsigned int GpuParticleOccluder_TypeDefinitionIndex = 71763;

	class GpuParticleOccluder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single DistanceToCamera; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::GpuParticleOccluder_OBB EKGEOOAKELB; // 0x20
		::UnityEngine::Matrix4x4 WorldToCccluder; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_ONDISABLE_OFFSET))(this);
		}

		::System::Single HONLHJIIKHD(::RPG::Client::GpuParticleOccluder_OBB a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GpuParticleOccluder_OBB, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_HONLHJIIKHD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 NLOBDMHENKP(::RPG::Client::GpuParticleOccluder_OBB a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::GpuParticleOccluder_OBB, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_NLOBDMHENKP_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshDistanceToCamera(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLEOCCLUDER_REFRESHDISTANCETOCAMERA_OFFSET))(this, a1);
		}

	};
}
