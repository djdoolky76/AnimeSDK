#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Buffers { template <typename T> class MemoryPool_1; }

namespace System::Buffers
{
	template <typename T>
	class MemoryPool_1 : public ::System::Object
	{
	public:
		static ::System::Buffers::MemoryPool_1<T>** StaticGet_s_shared()
		{
			return (::System::Buffers::MemoryPool_1<T>**)UnitySDK::FromName("System.Buffers", "MemoryPool`1")->GetStaticField(0x0);
		}

	};
}
