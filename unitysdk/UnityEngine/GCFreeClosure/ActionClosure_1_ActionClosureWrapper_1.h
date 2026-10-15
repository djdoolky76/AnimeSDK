#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/Closure.h"
namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2> class ActionByRef_2; }

namespace UnityEngine::GCFreeClosure
{
	template <typename T>
	class ActionClosure_1_ActionClosureWrapper_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::GCFreeClosure::ActionByRef_2<::UnityEngine::GCFreeClosure::Closure, T>** StaticGet__default()
		{
			return (::UnityEngine::GCFreeClosure::ActionByRef_2<::UnityEngine::GCFreeClosure::Closure, T>**)UnitySDK::FromName("UnityEngine.GCFreeClosure", "ActionClosureWrapper`1")->GetStaticField(0x0);
		}

	};
}
