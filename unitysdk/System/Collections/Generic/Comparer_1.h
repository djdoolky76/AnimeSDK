#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class Comparer_1; }

namespace System::Collections::Generic
{
	template <typename T>
	class Comparer_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Comparer_1<T>** StaticGet_defaultComparer()
		{
			return (::System::Collections::Generic::Comparer_1<T>**)UnitySDK::FromName("System.Collections.Generic", "Comparer`1")->GetStaticField(0x0);
		}

	};
}
