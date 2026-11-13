#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define TMPRO_SETPROPERTYUTILITY_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x19B8D8D0)

namespace TMPro
{
	inline static constexpr unsigned int SetPropertyUtility_TypeDefinitionIndex = 45682;

	class SetPropertyUtility : public ::System::Object
	{
	public:
		static ::System::Boolean SetColor(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TMPRO_SETPROPERTYUTILITY_SETCOLOR_OFFSET))(a1, a2);
		}

	};
}
