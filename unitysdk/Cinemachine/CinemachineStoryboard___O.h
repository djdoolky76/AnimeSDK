#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine::Events { class UnityAction; }

namespace Cinemachine
{
	class CinemachineStoryboard___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet__0___StaticBlendingHandler()
		{
			return (::UnityEngine::Events::UnityAction**)UnitySDK::FromName("Cinemachine", "<>O")->GetStaticField(0x54690);
		}

	};
}
