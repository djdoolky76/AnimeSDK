#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/OverrideLightModule.h"
#include "unitysdk/UnityEngine/Space.h"
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_OVERRIDELIGHTMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xDA12520)

namespace RPG::Client
{
	inline static constexpr unsigned int OverrideLightMonoPlugin_TypeDefinitionIndex = 70296;

	class OverrideLightMonoPlugin
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x30
		::UnityEngine::Space OverrideLightSpace; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TAUtils::OverrideLightModule OverrideLightModule; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OVERRIDELIGHTMONOPLUGIN_CTOR_OFFSET))(this);
		}

	};
}
