#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int RepeatedField_1_TypeDefinitionIndex = 35866;

	template <typename T>
	class RepeatedField_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 count; // 0x0
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Collections", "RepeatedField`1")->GetStaticField(0x0);
		}

	};
}
