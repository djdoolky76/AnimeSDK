#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Rendering { class TextureCurve; }

#define UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6507B0)
#define UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F650900)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureCurveParameter_TypeDefinitionIndex = 36539;

	class TextureCurveParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::TextureCurve* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::TextureCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_RELEASE_OFFSET))(this);
		}

	};
}
