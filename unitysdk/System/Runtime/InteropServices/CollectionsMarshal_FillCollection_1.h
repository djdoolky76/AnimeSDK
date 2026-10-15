#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Runtime::InteropServices
{
	template <typename T>
	class CollectionsMarshal_FillCollection_1 : public ::System::Object
	{
	public:
		::System::Int32 _count_P; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
		static ::System::Object** StaticGet_Instance()
		{
			return (::System::Object**)UnitySDK::FromName("System.Runtime.InteropServices", "FillCollection`1")->GetStaticField(0x0);
		}

	};
}
