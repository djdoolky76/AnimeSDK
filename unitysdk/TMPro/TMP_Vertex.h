#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define TMPRO_TMP_VERTEX_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F320F10)
#define TMPRO_TMP_VERTEX_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1F320EE0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Vertex_TypeDefinitionIndex = 44542;

	struct alignas(4) TMP_Vertex
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector2 uv; // 0x1C
		::UnityEngine::Vector2 uv2; // 0x24
		::UnityEngine::Vector2 uv4; // 0x2C
		::UnityEngine::Color32 color; // 0x34
		static ::TMPro::TMP_Vertex* StaticGet_k_Zero()
		{
			return (::TMPro::TMP_Vertex*)UnitySDK::FromName("TMPro", "TMP_Vertex")->GetStaticField(0x13A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_VERTEX_CCTOR_OFFSET))();
		}

		/*
		static ::TMPro::TMP_Vertex get_zero()
		{
			return ((::TMPro::TMP_Vertex(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_VERTEX_GET_ZERO_OFFSET))();
		}
		*/

	};
}
