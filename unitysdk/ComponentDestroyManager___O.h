#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

	class ComponentDestroyManager___O : public ::System::Object
	{
	public:
		static ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction** StaticGet__0___ProcessPendingDestroy()
		{
			return (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction**)UnitySDK::FromName("", "<>O")->GetStaticField(0x5AFF0);
		}

	};
