#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RECTTRANSFORMDEBUG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C6BB2D0)
#define RECTTRANSFORMDEBUG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C6BB3A0)
#define RECTTRANSFORMDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BB530)

inline static constexpr unsigned int RectTransformDebug_TypeDefinitionIndex = 74916;

class RectTransformDebug : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector2 RectSize; // 0x18
	::UnityEngine::RectTransform* _rectTransform; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTTRANSFORMDEBUG__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTTRANSFORMDEBUG_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTTRANSFORMDEBUG_UPDATE_OFFSET))(this);
	}
};
