#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONPROXY_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E978AB0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PlanarReflectionProxy_NativeSRP_TypeDefinitionIndex = 6020;

	class PlanarReflectionProxy_NativeSRP : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single important; // 0x18
		::UnityEngine::Vector3 m_Size; // 0x1C
		::System::Single yOffset; // 0x28
		::System::Boolean captureFog; // 0x2C
		::System::Boolean captureSkybox; // 0x2D
		::System::Byte _padding0[0x2];
		::UnityEngine::Color backgroundColor; // 0x30
		::System::Boolean keepMoveWithCharacter; // 0x40
		::System::Boolean useHDRColorMode; // 0x41
		::System::Boolean disableFade; // 0x42
		::System::Byte _padding1[0x1];
		::System::Single reflectionDistance; // 0x44
		::UnityEngine::Camera* m_Camera; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PLANARREFLECTIONPROXY_NATIVESRP__CTOR_OFFSET))(this);
		}
	};
}
