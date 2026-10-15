#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace MessagePack::Formatters
{
	template <typename T1, typename T2>
	class CollectionHelpers_2 : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Int32, T1, T2>** StaticGet_collectionCreator()
		{
			return (::System::Func_3<::System::Int32, T1, T2>**)UnitySDK::FromName("MessagePack.Formatters", "CollectionHelpers`2")->GetStaticField(0x0);
		}

	};
}
