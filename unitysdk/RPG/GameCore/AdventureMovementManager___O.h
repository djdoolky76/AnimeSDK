#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Animator_OnAnimatorDispatchMovementJobFinishDelegate; }

namespace RPG::GameCore
{
	class AdventureMovementManager___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Animator_OnAnimatorDispatchMovementJobFinishDelegate** StaticGet__0___DispatchMovementJobScheduler()
		{
			return (::UnityEngine::Animator_OnAnimatorDispatchMovementJobFinishDelegate**)UnitySDK::FromName("RPG.GameCore", "<>O")->GetStaticField(0x59340);
		}

	};
}
