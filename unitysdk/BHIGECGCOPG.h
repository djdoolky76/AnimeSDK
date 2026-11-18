#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/AICOMPNOFJO.h"

#define BHIGECGCOPG_IIHLGEFGOBL_OFFSET UNITYSDK_OFFSET(0x726520)

inline static constexpr unsigned int BHIGECGCOPG_TypeDefinitionIndex = 81951;

struct alignas(4) BHIGECGCOPG
{
	::UnityEngine::Vector4 KLJNCPOCGCN; // 0x10
	::System::Boolean HJLIGGGMJGH; // 0x20

	::System::Void IIHLGEFGOBL(::System::Int32 ABHBKFJKINO, ::AICOMPNOFJO& HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::AICOMPNOFJO&))((::PBYTE)hIl2Cpp + BHIGECGCOPG_IIHLGEFGOBL_OFFSET))(this, ABHBKFJKINO, HMMMOCJAEOA);
	}
};
