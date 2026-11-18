#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class NapGPUInstancedRenderer; }

#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_ALLOCATEGRID_OFFSET UNITYSDK_OFFSET(0x11083E90)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_BUILDUNITCUBE_OFFSET UNITYSDK_OFFSET(0x11083130)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11084160)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_START_OFFSET UNITYSDK_OFFSET(0x11082BA0)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_UPDATE_OFFSET UNITYSDK_OFFSET(0x11084350)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x110847B0)

namespace NapGPUInstancedDemo
{
	inline static constexpr unsigned int NapGPUInstancedDemoCPUArray_TypeDefinitionIndex = 96747;

	class NapGPUInstancedDemoCPUArray : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 k_MaxInstancesPerComponent = 0x3FF; // 0x0
		::System::Int32 gridSize; // 0x18
		::System::Single spacing; // 0x1C
		::System::Single waveHeight; // 0x20
		::System::Single waveSpeed; // 0x24
		::System::Single spinSpeed; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* instanceMesh; // 0x30
		::UnityEngine::Material* instanceMaterial; // 0x38
		::UnityEngine::NapGPUInstancedRenderer* m_Renderer; // 0x40
		::Il2CppArray<::UnityEngine::Matrix4x4>* m_Matrices; // 0x48
		::Il2CppArray<::UnityEngine::Vector4>* m_Colors; // 0x50
		::System::Int32 m_InstanceCount; // 0x58
		::System::Int32 m_ColorPropertyId; // 0x5C
		::UnityEngine::Mesh* m_GeneratedMesh; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void AllocateGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_ALLOCATEGRID_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_UPDATE_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* BuildUnitCube()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOCPUARRAY_BUILDUNITCUBE_OFFSET))();
		}
	};
}
