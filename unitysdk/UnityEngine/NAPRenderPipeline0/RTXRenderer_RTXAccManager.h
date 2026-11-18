#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_REQUESTRESETONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F025800)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F025810)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXRenderer_RTXAccManager_TypeDefinitionIndex = 5796;

	class RTXRenderer_RTXAccManager : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void RequestResetOnNextUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXRENDERER_RTXACCMANAGER_REQUESTRESETONNEXTUPDATE_OFFSET))();
		}
	};
}
