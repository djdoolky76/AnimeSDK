#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODPROXY_ISONETIMELODPROXY_OFFSET UNITYSDK_OFFSET(0x1C827F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C827EA0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLodProxy_TypeDefinitionIndex = 27169;

	class NapLodProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODPROXY__CTOR_OFFSET))(this);
		}

		::System::Boolean IsOneTimeLodProxy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODPROXY_ISONETIMELODPROXY_OFFSET))(this);
		}
	};
}
