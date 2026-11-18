#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GraphicsBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class NapGPUInstancedRenderer; }

#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER_BUILDBUFFER_OFFSET UNITYSDK_OFFSET(0x11087D70)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER_BUILDUNITCUBE_OFFSET UNITYSDK_OFFSET(0x11087010)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11088240)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER_START_OFFSET UNITYSDK_OFFSET(0x11086A70)
#define NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x11088440)

namespace NapGPUInstancedDemo
{
	inline static constexpr unsigned int NapGPUInstancedDemoGPUBuffer_TypeDefinitionIndex = 96782;

	class NapGPUInstancedDemoGPUBuffer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 gridSize; // 0x18
		::System::Single spacing; // 0x1C
		::System::Single heightVariation; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* instanceMesh; // 0x28
		::UnityEngine::Material* instanceMaterial; // 0x30
		::UnityEngine::NapGPUInstancedRenderer* m_Renderer; // 0x38
		::UnityEngine::GraphicsBuffer* m_InstanceBuffer; // 0x40
		::UnityEngine::Mesh* m_GeneratedMesh; // 0x48
		::System::Int32 m_InstanceCount; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER_START_OFFSET))(this);
		}

		::System::Void BuildBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER_BUILDBUFFER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER_ONDESTROY_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* BuildUnitCube()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + NAPGPUINSTANCEDDEMO_NAPGPUINSTANCEDDEMOGPUBUFFER_BUILDUNITCUBE_OFFSET))();
		}
	};
}
