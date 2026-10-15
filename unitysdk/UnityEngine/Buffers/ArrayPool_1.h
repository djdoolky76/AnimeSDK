#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Buffers { template <typename T> class ArrayPool_1; }

namespace UnityEngine::Buffers
{
	template <typename T>
	class ArrayPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::Buffers::ArrayPool_1<T>** StaticGet_s_sharedInstance()
		{
			return (::UnityEngine::Buffers::ArrayPool_1<T>**)UnitySDK::FromName("UnityEngine.Buffers", "ArrayPool`1")->GetStaticField(0x0);
		}

	};
}
