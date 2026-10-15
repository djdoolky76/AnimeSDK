#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::GCFreeClosure
{
	template <typename T>
	class ObjectPool_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<T>** StaticGet_objects()
		{
			return (::System::Collections::Generic::Queue_1<T>**)UnitySDK::FromName("RPG.GCFreeClosure", "ObjectPool`1")->GetStaticField(0x0);
		}

	};
}
