#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Rendering { template <typename T> class ObjectPool_1; }

namespace UnityEngine::Rendering
{
	template <typename T>
	class GenericPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ObjectPool_1<T>** StaticGet_s_Pool()
		{
			return (::UnityEngine::Rendering::ObjectPool_1<T>**)UnitySDK::FromName("UnityEngine.Rendering", "GenericPool`1")->GetStaticField(0x0);
		}

	};
}
