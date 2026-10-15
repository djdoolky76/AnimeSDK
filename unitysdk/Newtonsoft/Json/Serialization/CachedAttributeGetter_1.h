#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class ThreadSafeStore_2; }
namespace System { class Object; }

namespace Newtonsoft::Json::Serialization
{
	template <typename T>
	class CachedAttributeGetter_1 : public ::System::Object
	{
	public:
		static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>** StaticGet_TypeAttributeCache()
		{
			return (::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*, T>**)UnitySDK::FromName("Newtonsoft.Json.Serialization", "CachedAttributeGetter`1")->GetStaticField(0x0);
		}

	};
}
