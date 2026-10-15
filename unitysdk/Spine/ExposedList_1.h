#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine
{
	template <typename T>
	class ExposedList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* Items; // 0x0
		::System::Int32 Count; // 0x0
		::System::Int32 version; // 0x0
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("Spine", "ExposedList`1")->GetStaticField(0x0);
		}

		// static const ::System::Object DefaultCapacity; // 0x0
	};
}
