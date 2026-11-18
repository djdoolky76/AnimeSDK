#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class UIGlobalAlpha;
namespace UnityEngine { class CanvasGroup; }

#define CNHLKCKBNMK__CTOR_OFFSET UNITYSDK_OFFSET(0x7DFF10)

inline static constexpr unsigned int CNHLKCKBNMK_TypeDefinitionIndex = 61199;

struct alignas(8) CNHLKCKBNMK
{
	::UnityEngine::CanvasGroup* GPHAEDMALMK; // 0x10
	::UIGlobalAlpha* CHMAEEOHHCI; // 0x18

	::System::Void _ctor(::UnityEngine::CanvasGroup* OGGNEJKDDCJ, ::UIGlobalAlpha* OFAALPOFGEG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::UIGlobalAlpha*))((::PBYTE)hIl2Cpp + CNHLKCKBNMK__CTOR_OFFSET))(this, OGGNEJKDDCJ, OFAALPOFGEG);
	}
};
