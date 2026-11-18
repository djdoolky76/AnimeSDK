#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASERRUNNER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D9EA720)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASERRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EA7B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImageMipBlurInactiveReleaserRunner_TypeDefinitionIndex = 89176;

	class UIImageMipBlurInactiveReleaserRunner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASERRUNNER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASERRUNNER_UPDATE_OFFSET))(this);
		}
	};
}
