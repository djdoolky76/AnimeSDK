#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
namespace UnityEngine::Events { class UnityAction; }

namespace SRDebugger::Services::Implementation
{
	class DebugTriggerImpl___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet__0___OnActiveSceneChanged()
		{
			return (::UnityEngine::Events::UnityAction**)UnitySDK::FromName("SRDebugger.Services.Implementation", "<>O")->GetStaticField(0x3A7E0);
		}

	};
}
