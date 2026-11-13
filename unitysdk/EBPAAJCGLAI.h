#pragma once
#include "unitysdk/unitysdk.h"

#define EBPAAJCGLAI_GET_OWNERDISHID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define EBPAAJCGLAI_GET_RECIPESTEP_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define EBPAAJCGLAI_SET_OWNERDISHID_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define EBPAAJCGLAI_SET_RECIPESTEP_OFFSET UNITYSDK_OFFSET(0xFDBF80)

inline static constexpr unsigned int EBPAAJCGLAI_TypeDefinitionIndex = 79856;

	struct alignas(4) EBPAAJCGLAI
	{
		::System::UInt32 _OwnerDishID_k__BackingField; // 0x10
		::System::Int32 _RecipeStep_k__BackingField; // 0x14
		::System::UInt32 get_OwnerDishID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAAJCGLAI_GET_OWNERDISHID_OFFSET))(this);
		}

		::System::Void set_OwnerDishID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBPAAJCGLAI_SET_OWNERDISHID_OFFSET))(this, a1);
		}

		::System::Int32 get_RecipeStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPAAJCGLAI_GET_RECIPESTEP_OFFSET))(this);
		}

		::System::Void set_RecipeStep(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBPAAJCGLAI_SET_RECIPESTEP_OFFSET))(this, a1);
		}

	};
