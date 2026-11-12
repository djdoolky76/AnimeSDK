#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_BLUREVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x2075C700)
#define UNITYENGINE_UIELEMENTS_BLUREVENT_PREDISPATCH_OFFSET UNITYSDK_OFFSET(0x2075C430)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BlurEvent_TypeDefinitionIndex = 5950;

	class BlurEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BLUREVENT_CTOR_OFFSET))(this);
		}

		::System::Void PreDispatch(::UnityEngine::UIElements::IPanel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BLUREVENT_PREDISPATCH_OFFSET))(this, a1);
		}

	};
}
