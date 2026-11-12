#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EAIJJHGMBNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1346C310)
#define EAIJJHGMBNI_GET_DISHIDS_OFFSET UNITYSDK_OFFSET(0x1346C2F0)
#define EAIJJHGMBNI_SET_DISHIDS_OFFSET UNITYSDK_OFFSET(0x1346C300)

inline static constexpr unsigned int EAIJJHGMBNI_TypeDefinitionIndex = 77013;

	class EAIJJHGMBNI : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _DishIds_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIJJHGMBNI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_DishIds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAIJJHGMBNI_GET_DISHIDS_OFFSET))(this);
		}

		::System::Void set_DishIds(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EAIJJHGMBNI_SET_DISHIDS_OFFSET))(this, a1);
		}

	};
