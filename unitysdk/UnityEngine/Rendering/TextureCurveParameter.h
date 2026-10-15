#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::Rendering { class TextureCurve; }

#define UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CAE80)
#define UNITYENGINE_RENDERING_TEXTURECURVEPARAMETER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F2CAFD0)

namespace UnityEngine::Rendering
{
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
