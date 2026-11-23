#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/B34EF47D1093656A.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_AD3FD7BA35425393_B10456EE796D56CF_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_AD3FD7BA35425393_E1FC5B03E68AA828_OFFSET UNITYSDK_OFFSET(0x1EB8060)

namespace UnityEngine
{
	inline static constexpr unsigned int AD3FD7BA35425393_TypeDefinitionIndex = 17552;

	struct alignas(4) AD3FD7BA35425393
	{
		::System::Void E1FC5B03E68AA828(::UnityEngine::Object* A9BAF281B87EFA01, ::UnityEngine::RectTransform* EEA65111C33D0438, ::UnityEngine::B34EF47D1093656A B5761A1A7DE48E9F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::RectTransform*, ::UnityEngine::B34EF47D1093656A))((::PBYTE)hIl2Cpp + UNITYENGINE_AD3FD7BA35425393_E1FC5B03E68AA828_OFFSET))(this, A9BAF281B87EFA01, EEA65111C33D0438, B5761A1A7DE48E9F);
		}

		::System::Void B10456EE796D56CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AD3FD7BA35425393_B10456EE796D56CF_OFFSET))(this);
		}
	};
}
