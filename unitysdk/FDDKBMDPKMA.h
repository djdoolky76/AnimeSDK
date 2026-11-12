#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKCLHMNONOD.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FDDKBMDPKMA_CTOR_OFFSET UNITYSDK_OFFSET(0x165EE5C0)
#define FDDKBMDPKMA_GET_DISHIDS_OFFSET UNITYSDK_OFFSET(0x165EE5A0)
#define FDDKBMDPKMA_GET_DISHSETID_OFFSET UNITYSDK_OFFSET(0x165EE580)
#define FDDKBMDPKMA_SET_DISHIDS_OFFSET UNITYSDK_OFFSET(0x165EE5B0)
#define FDDKBMDPKMA_SET_DISHSETID_OFFSET UNITYSDK_OFFSET(0x165EE590)

inline static constexpr unsigned int FDDKBMDPKMA_TypeDefinitionIndex = 77058;

	class FDDKBMDPKMA : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::AKCLHMNONOD>* _DishIds_k__BackingField; // 0x10
		::System::UInt32 _DishSetId_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDKBMDPKMA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DishSetId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDKBMDPKMA_GET_DISHSETID_OFFSET))(this);
		}

		::System::Void set_DishSetId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDDKBMDPKMA_SET_DISHSETID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::AKCLHMNONOD>* get_DishIds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::AKCLHMNONOD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDKBMDPKMA_GET_DISHIDS_OFFSET))(this);
		}

		::System::Void set_DishIds(::System::Collections::Generic::IReadOnlyList_1<::AKCLHMNONOD>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::AKCLHMNONOD>*))((::PBYTE)hIl2Cpp + FDDKBMDPKMA_SET_DISHIDS_OFFSET))(this, a1);
		}

	};
