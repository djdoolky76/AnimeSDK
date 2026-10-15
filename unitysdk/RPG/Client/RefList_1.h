#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RefList_1_TypeDefinitionIndex = 35251;

	template <typename T>
	class RefList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _items; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _version; // 0x0
		static ::Il2CppArray<T>** StaticGet__emptyArray()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("RPG.Client", "RefList`1")->GetStaticField(0x0);
		}

		// static const ::System::Object _defaultCapacity; // 0x0
	};
}
