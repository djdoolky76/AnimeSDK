#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARMATCAMERAPROPOVERRIDEMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C05BAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharMatCameraPropOverrideMonoPlugin_TypeDefinitionIndex = 72360;

	class CharMatCameraPropOverrideMonoPlugin
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* TargetRenderers; // 0x30
		::System::Single CameraFieldOfView; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARMATCAMERAPROPOVERRIDEMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
