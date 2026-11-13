#pragma once
#include "unitysdk/unitysdk.h"

#define LEMAIOLFEAJ_PMOJCPMDIEH_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define LEMAIOLFEAJ_PMOJCPMDIEH_GET_DISHID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define LEMAIOLFEAJ_PMOJCPMDIEH_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x7CEA10)

inline static constexpr unsigned int LEMAIOLFEAJ_PMOJCPMDIEH_TypeDefinitionIndex = 79914;

	struct alignas(4) LEMAIOLFEAJ_PMOJCPMDIEH
	{
		::System::UInt32 _DishId_k__BackingField; // 0x10
		::System::UInt32 _Result_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LEMAIOLFEAJ_PMOJCPMDIEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_DishId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMAIOLFEAJ_PMOJCPMDIEH_GET_DISHID_OFFSET))(this);
		}

		::System::UInt32 get_Result()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMAIOLFEAJ_PMOJCPMDIEH_GET_RESULT_OFFSET))(this);
		}

	};
