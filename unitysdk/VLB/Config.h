#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/VLB/RenderingMode.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class TextAsset; }
namespace VLB { class Config; }

#define VLB_CONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE9F38F0)
#define VLB_CONFIG_GET_ACTUALRENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xE9F05D0)
#define VLB_CONFIG_GET_BEAMSHADER_OFFSET UNITYSDK_OFFSET(0xE9F3660)
#define VLB_CONFIG_GET_GLOBALNOISEPARAM_OFFSET UNITYSDK_OFFSET(0xE9F3670)
#define VLB_CONFIG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE9F05C0)
#define VLB_CONFIG_GET_USESINGLEPASSSHADER_OFFSET UNITYSDK_OFFSET(0xE9F0B40)
#define VLB_CONFIG_HECDDLBMPJI_OFFSET UNITYSDK_OFFSET(0xE9F3680)
#define VLB_CONFIG_JGDKHDMKNPK_OFFSET UNITYSDK_OFFSET(0xE9F3870)
#define VLB_CONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE9F37F0)
#define VLB_CONFIG_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE9F38E0)

namespace VLB
{
	class Config : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean geometryOverrideLayer; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 geometryLayerID; // 0x1C
		::System::String* geometryTag; // 0x20
		::System::Int32 geometryRenderQueue; // 0x28
		::System::Boolean forceSinglePass; // 0x2C
		::System::Byte _padding1[0x3];
		::VLB::RenderingMode renderingMode; // 0x30
		::System::Byte _padding2[0x4];
		::UnityEngine::Shader* beamShader1Pass; // 0x38
		::UnityEngine::Shader* beamShader2Pass; // 0x40
		::System::Int32 sharedMeshSides; // 0x48
		::System::Int32 sharedMeshSegments; // 0x4C
		::System::Single globalNoiseScale; // 0x50
		::UnityEngine::Vector3 globalNoiseVelocity; // 0x54
		::UnityEngine::TextAsset* noise3DData; // 0x60
		::System::Int32 noise3DSize; // 0x68
		::System::Byte _padding3[0x4];
		::UnityEngine::ParticleSystem* dustParticlesPrefab; // 0x70
		::System::Int32 pluginVersion; // 0x78
		static ::VLB::Config** StaticGet_m_Instance()
		{
			return (::VLB::Config**)UnitySDK::FromName("VLB", "Config")->GetStaticField(0x14500);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_CTOR_OFFSET))(this);
		}

		::VLB::RenderingMode get_actualRenderingMode()
		{
			return ((::VLB::RenderingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_ACTUALRENDERINGMODE_OFFSET))(this);
		}

		::System::Boolean get_useSinglePassShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_USESINGLEPASSSHADER_OFFSET))(this);
		}

		::UnityEngine::Shader* get_beamShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_BEAMSHADER_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_globalNoiseParam()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_GLOBALNOISEPARAM_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* HECDDLBMPJI()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_HECDDLBMPJI_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_ONENABLE_OFFSET))(this);
		}

		::System::Void JGDKHDMKNPK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_CONFIG_JGDKHDMKNPK_OFFSET))(this, a1, a2);
		}

		static ::VLB::Config* get_Instance()
		{
			return ((::VLB::Config*(*)())((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::VLB::Config* a1)
		{
			return ((::System::Void(*)(::VLB::Config*))((::PBYTE)hIl2Cpp + VLB_CONFIG_SET_INSTANCE_OFFSET))(a1);
		}

	};
}
