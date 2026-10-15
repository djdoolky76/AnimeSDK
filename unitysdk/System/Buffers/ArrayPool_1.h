#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Buffers { template <typename T> class ArrayPool_1; }

namespace System::Buffers
{
	template <typename T>
	class ArrayPool_1 : public ::System::Object
	{
	public:
		static ::System::Buffers::ArrayPool_1<T>** StaticGet_s_sharedInstance()
		{
			return (::System::Buffers::ArrayPool_1<T>**)UnitySDK::FromName("System.Buffers", "ArrayPool`1")->GetStaticField(0x0);
		}

	};
}
