#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/Closure.h"
namespace UnityEngine::GCFreeClosure { template <typename T1, typename T2, typename T3> class ActionByRef_3; }

namespace UnityEngine::GCFreeClosure
{
	template <typename T1, typename T2>
	class ActionClosure_2_ActionClosureWrapper : public ::System::Object
	{
	public:
		static ::UnityEngine::GCFreeClosure::ActionByRef_3<::UnityEngine::GCFreeClosure::Closure, T1, T2>** StaticGet__default()
		{
			return (::UnityEngine::GCFreeClosure::ActionByRef_3<::UnityEngine::GCFreeClosure::Closure, T1, T2>**)UnitySDK::FromName("UnityEngine.GCFreeClosure", "ActionClosureWrapper")->GetStaticField(0x0);
		}

	};
}
