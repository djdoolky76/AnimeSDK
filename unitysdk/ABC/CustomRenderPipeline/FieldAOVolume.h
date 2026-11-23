#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class E2E2311225330715; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture3D; }

#define ABC_CUSTOMRENDERPIPELINE_FIELDAOVOLUME_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2789E10)
#define ABC_CUSTOMRENDERPIPELINE_FIELDAOVOLUME_FEB3D6A8EFC1EDF3_OFFSET UNITYSDK_OFFSET(0x278A0A0)
#define ABC_CUSTOMRENDERPIPELINE_FIELDAOVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x278A1D0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int FieldAOVolume_TypeDefinitionIndex = 16566;

	class FieldAOVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 m_VolumeScale; // 0x20
		::System::Int32 m_CuebSize; // 0x2C
		::System::Single m_CutFarPlane; // 0x30
		::UnityEngine::Vector3 m_BoundsExpand; // 0x34
		::UnityEngine::GameObject* m_AODecal; // 0x40
		::UnityEngine::Vector3 m_FieldStartPoint; // 0x48
		::UnityEngine::Vector3 m_FieldScale; // 0x54
		::UnityEngine::Texture3D* m_VolumeTex; // 0x60
		::UnityEngine::Material* m_MatDecal; // 0x68
		::UnityEngine::Vector3 m_StepWidth; // 0x70
		::UnityEngine::Vector3 m_StartPointCentered; // 0x7C
		::UnityEngine::E2E2311225330715* EBCB6FE85B69ECCA; // 0x88
		::UnityEngine::Renderer* BBEE2351869446B7; // 0x90
		::System::Boolean m_UseVisualization; // 0x98
		::System::Byte _padding0[0x3];
		::System::Single m_ArrowScale; // 0x9C
		::UnityEngine::Vector2 m_WidthRemapRange; // 0xA0

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_FIELDAOVOLUME_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void FEB3D6A8EFC1EDF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_FIELDAOVOLUME_FEB3D6A8EFC1EDF3_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_FIELDAOVOLUME__CTOR_OFFSET))(this);
		}
	};
}
