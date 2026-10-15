#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace UnityEngine::GCFreeClosure
{
	template <typename T>
	class SValue_Writer_1 : public ::System::Object
	{
	public:
		static ::System::Func_2<T, ::UnityEngine::GCFreeClosure::SValue>** StaticGet_InternalInvoke()
		{
			return (::System::Func_2<T, ::UnityEngine::GCFreeClosure::SValue>**)UnitySDK::FromName("UnityEngine.GCFreeClosure", "Writer`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<T, ::UnityEngine::GCFreeClosure::SValue>** StaticGet_Default()
		{
			return (::System::Func_2<T, ::UnityEngine::GCFreeClosure::SValue>**)UnitySDK::FromName("UnityEngine.GCFreeClosure", "Writer`1")->GetStaticField(0x0);
		}

	};
}
