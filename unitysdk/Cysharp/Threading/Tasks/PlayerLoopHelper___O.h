#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

namespace Cysharp::Threading::Tasks
{
	class PlayerLoopHelper___O : public ::System::Object
	{
	public:
		static ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction** StaticGet__0___Run()
		{
			return (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>O")->GetStaticField(0x40060);
		}

	};
}
