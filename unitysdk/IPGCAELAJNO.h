#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Camera; }

#define IPGCAELAJNO_OALFBAGCBHG_OFFSET UNITYSDK_OFFSET(0x192FEE20)

inline static constexpr unsigned int IPGCAELAJNO_TypeDefinitionIndex = 79765;

	class IPGCAELAJNO : public ::System::Object
	{
	public:
		static ::System::Boolean OALFBAGCBHG(::UnityEngine::Camera* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IPGCAELAJNO_OALFBAGCBHG_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
