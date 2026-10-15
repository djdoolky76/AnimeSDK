#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::Immutable
{
	template <typename T>
	class ImmutableHashSet_1_HashBucketByRefEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>** StaticGet_s_defaultInstance()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::Object*>**)UnitySDK::FromName("System.Collections.Immutable", "HashBucketByRefEqualityComparer")->GetStaticField(0x0);
		}

	};
}
