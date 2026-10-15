#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOUDINIENGINEUNITY_HEU_HOUDINIVERSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1B92BA90)

namespace HoudiniEngineUnity
{
	class HEU_HoudiniVersion : public ::System::Object
	{
	public:
		// static const ::System::Object HOUDINI_MAJOR; // 0x0
		// static const ::System::Object HOUDINI_MINOR; // 0x0
		// static const ::System::Object HOUDINI_BUILD; // 0x0
		// static const ::System::Object HOUDINI_PATCH; // 0x0
		// static const ::System::String* HOUDINI_VERSION_STRING; // 0x0
		// static const ::System::Object HOUDINI_ENGINE_MAJOR; // 0x0
		// static const ::System::Object HOUDINI_ENGINE_MINOR; // 0x0
		// static const ::System::Object HOUDINI_ENGINE_API; // 0x0
		// static const ::System::Object UNITY_PLUGIN_VERSION; // 0x0
		// static const ::System::String* HAPI_BIN_PATH; // 0x0
		// static const ::System::String* HAPI_LIBRARY; // 0x0
		// static const ::System::String* HARC_LIBRARY; // 0x0
		// static const ::System::String* SIDEFX_SOFTWARE_REGISTRY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIVERSION_CTOR_OFFSET))(this);
		}

	};
}
