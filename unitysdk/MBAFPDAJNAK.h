#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MBAFPDAJNAK_CTOR_OFFSET UNITYSDK_OFFSET(0xC0B8F80)
#define MBAFPDAJNAK_GET_OPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xC0B8F60)
#define MBAFPDAJNAK_SET_OPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xC0B8F70)

inline static constexpr unsigned int MBAFPDAJNAK_TypeDefinitionIndex = 77890;

	class MBAFPDAJNAK : public ::System::Object
	{
	public:
		::System::Int32 _OptionIndex_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFPDAJNAK_CTOR_OFFSET))(this);
		}

		::System::Int32 get_OptionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAFPDAJNAK_GET_OPTIONINDEX_OFFSET))(this);
		}

		::System::Void set_OptionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBAFPDAJNAK_SET_OPTIONINDEX_OFFSET))(this, a1);
		}

	};
