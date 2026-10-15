#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAHOFEAIMFO.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define JNLODJMGNJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB28C120)
#define JNLODJMGNJF_ELINOHABNCJ_OFFSET UNITYSDK_OFFSET(0xB28C130)

inline static constexpr unsigned int JNLODJMGNJF_TypeDefinitionIndex = 68998;

	class JNLODJMGNJF : public ::AAHOFEAIMFO
	{
	public:
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JNLODJMGNJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void ELINOHABNCJ(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + JNLODJMGNJF_ELINOHABNCJ_OFFSET))(this, a1);
		}

	};
