#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/MaskShape.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHTMASK_GET_WORLDTOMASKMATRIX_OFFSET UNITYSDK_OFFSET(0x1D1A8370)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHTMASK_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D1A83E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHTMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A85A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricLightMask_TypeDefinitionIndex = 27203;

	class VolumetricLightMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Universal::MaskShape shape; // 0x18
		::System::Boolean reverseMask; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHTMASK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_worldToMaskMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHTMASK_GET_WORLDTOMASKMATRIX_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VOLUMETRICLIGHTMASK_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
