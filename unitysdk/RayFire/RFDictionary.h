#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RAYFIRE_RFDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x29A6410)

namespace RayFire
{
	inline static constexpr unsigned int RFDictionary_TypeDefinitionIndex = 15629;

	class RFDictionary : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* keys; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* values; // 0x18

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* A63EF5086F6BF629)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDICTIONARY__CTOR_OFFSET))(this, A63EF5086F6BF629);
		}
	};
}
