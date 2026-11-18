#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension { class RangeFloat; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPARAMFLOAT_COPYSOURCE_OFFSET UNITYSDK_OFFSET(0x1CB6D7F0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPARAMFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB6D8B0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeParamFloat_TypeDefinitionIndex = 79346;

	class InteractionRangeParamFloat
	{
	public:
		::System::Single InitVal; // 0x48
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Extension::RangeFloat* FreeRangeEx; // 0x50
		::UnityEngine::UI::Extension::RangeFloat* MaxRangeEx; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPARAMFLOAT__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::InteractionRangeParamFloat* CopySource()
		{
			return ((::UnityEngine::UI::Extension::InteractionRangeParamFloat*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPARAMFLOAT_COPYSOURCE_OFFSET))(this);
		}
	};
}
