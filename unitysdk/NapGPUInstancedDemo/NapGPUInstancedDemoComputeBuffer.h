#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GraphicsBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class NapGPUInstancedRenderer; }

#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_BUILDBUFFER_OFFSET UNITYSDK_OFFSET(0x11085E30)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_BUILDUNITCUBE_OFFSET UNITYSDK_OFFSET(0x110850D0)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_CALCULATECONSERVATIVEBOUNDS_OFFSET UNITYSDK_OFFSET(0x11086370)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_CONFIGURERENDERER_OFFSET UNITYSDK_OFFSET(0x11086190)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_DISPATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x11085F20)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x110865C0)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_START_OFFSET UNITYSDK_OFFSET(0x11084810)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11086320)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_WARNONUNSUPPORTEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x11084EF0)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11086990)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x11086930)

namespace NapGPUInstancedDemo
{
	inline static constexpr unsigned int NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex = 96745;

	class NapGPUInstancedDemoComputeBuffer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_k_InstanceCountId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x14260);
		}
		static ::System::Int32* StaticGet_k_GridSizeId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x14264);
		}
		static ::System::Int32* StaticGet_k_InstanceBufferId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x14268);
		}
		static ::System::Int32* StaticGet_k_ScalePulseId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x1426C);
		}
		static ::System::Int32* StaticGet_k_AnimTimeId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x14270);
		}
		static ::System::Int32* StaticGet_k_HeightVariationId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x14274);
		}
		static ::System::Int32* StaticGet_k_OriginId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x14278);
		}
		static ::System::Int32* StaticGet_k_SpacingId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x1427C);
		}
		static ::System::Int32* StaticGet_k_RotationSpeedId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapGPUInstancedDemoComputeBuffer_TypeDefinitionIndex)->GetStaticField(0x14280);
		}
		// static const ::System::String* k_KernelName; // 0x0
		// static const ::System::Int32 k_ThreadGroupSize = 0x40; // 0x0
		::UnityEngine::ComputeShader* animateShader; // 0x18
		::System::Int32 gridSize; // 0x20
		::System::Single spacing; // 0x24
		::System::Single heightVariation; // 0x28
		::System::Single rotationSpeed; // 0x2C
		::System::Single scalePulse; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* instanceMesh; // 0x38
		::UnityEngine::Material* instanceMaterial; // 0x40
		::UnityEngine::NapGPUInstancedRenderer* m_Renderer; // 0x48
		::UnityEngine::GraphicsBuffer* m_InstanceBuffer; // 0x50
		::UnityEngine::Mesh* m_GeneratedMesh; // 0x58
		::UnityEngine::Material* m_GeneratedMaterial; // 0x60
		::System::Int32 m_InstanceCount; // 0x68
		::System::Int32 m_Kernel; // 0x6C
		::System::Int32 m_ThreadGroups; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_UPDATE_OFFSET))(this);
		}

		::System::Void BuildBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_BUILDBUFFER_OFFSET))(this);
		}

		::System::Void DispatchAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_DISPATCHANIMATION_OFFSET))(this);
		}

		::System::Void ConfigureRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_CONFIGURERENDERER_OFFSET))(this);
		}

		::UnityEngine::Bounds CalculateConservativeBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_CALCULATECONSERVATIVEBOUNDS_OFFSET))(this);
		}

		::System::Void WarnOnUnsupportedTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_WARNONUNSUPPORTEDTRANSFORM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_ONDESTROY_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* BuildUnitCube()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCOMPUTEBUFFER_BUILDUNITCUBE_OFFSET))();
		}
	};
}
