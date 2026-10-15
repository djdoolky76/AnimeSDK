#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Entitas
{
	template <typename T>
	class EntityEqualityComparer_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<T>** StaticGet_comparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<T>**)UnitySDK::FromName("Entitas", "EntityEqualityComparer`1")->GetStaticField(0x0);
		}

	};
}
