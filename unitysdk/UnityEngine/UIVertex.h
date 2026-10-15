#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_UIVERTEX_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4A9740)

namespace UnityEngine
{
	inline static constexpr unsigned int UIVertex_TypeDefinitionIndex = 5055;

	struct alignas(4) UIVertex
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 normal; // 0x1C
		::UnityEngine::Vector4 tangent; // 0x28
		::UnityEngine::Color32 color; // 0x38
		::UnityEngine::Vector2 uv0; // 0x3C
		::UnityEngine::Vector2 uv1; // 0x44
		::UnityEngine::Vector2 uv2; // 0x4C
		::UnityEngine::Vector2 uv3; // 0x54
		static ::UnityEngine::Color32* StaticGet_s_DefaultColor()
		{
			return (::UnityEngine::Color32*)UnitySDK::FromName("UnityEngine", "UIVertex")->GetStaticField(0x140);
		}

		static ::UnityEngine::UIVertex* StaticGet_simpleVert()
		{
			return (::UnityEngine::UIVertex*)UnitySDK::FromName("UnityEngine", "UIVertex")->GetStaticField(0x144);
		}

		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)UnitySDK::FromName("UnityEngine", "UIVertex")->GetStaticField(0x190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIVERTEX_CCTOR_OFFSET))();
		}

	};
}
