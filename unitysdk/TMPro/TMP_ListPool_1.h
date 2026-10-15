#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { template <typename T> class TMP_ObjectPool_1; }

namespace TMPro
{
	template <typename T>
	class TMP_ListPool_1 : public ::System::Object
	{
	public:
		static ::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>** StaticGet_s_ListPool()
		{
			return (::TMPro::TMP_ObjectPool_1<::System::Collections::Generic::List_1<T>*>**)UnitySDK::FromName("TMPro", "TMP_ListPool`1")->GetStaticField(0x0);
		}

	};
}
