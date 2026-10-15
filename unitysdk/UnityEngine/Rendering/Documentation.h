#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/DocumentationInfo.h"

#define UNITYENGINE_RENDERING_DOCUMENTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C14D0)

namespace UnityEngine::Rendering
{
	class Documentation : public ::UnityEngine::Rendering::DocumentationInfo
	{
	public:
		// static const ::System::String* baseURL; // 0x0
		// static const ::System::String* subURL; // 0x0
		// static const ::System::String* endURL; // 0x0
		// static const ::System::String* releaseVersion; // 0x0
		// static const ::System::String* baseURLHDRP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DOCUMENTATION_CTOR_OFFSET))(this);
		}

	};
}
