#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }

#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_CREATE_OFFSET UNITYSDK_OFFSET(0x1F1BF700)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1BF880)
#define ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1F1BF770)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int StandaloneShutdown_TypeDefinitionIndex = 40491;

	class StandaloneShutdown : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action** StaticGet_OnShutDown()
		{
			return (::System::Action**)UnitySDK::FromName("ZenFulcrum.EmbeddedBrowser", "StandaloneShutdown")->GetStaticField(0x22680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void Create()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_CREATE_OFFSET))();
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_STANDALONESHUTDOWN_ONAPPLICATIONQUIT_OFFSET))(this);
		}

	};
}
