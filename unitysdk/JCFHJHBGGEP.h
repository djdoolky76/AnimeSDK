#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class CBKCCDGFNHH;

#define JCFHJHBGGEP_EKIFPEICBMK_OFFSET UNITYSDK_OFFSET(0x358B00)
#define JCFHJHBGGEP_PENDMLPCMKB_OFFSET UNITYSDK_OFFSET(0x282350)

inline static constexpr unsigned int JCFHJHBGGEP_TypeDefinitionIndex = 75767;

struct alignas(8) JCFHJHBGGEP
{
	::CBKCCDGFNHH* _NIIOHJPLBJF_k__BackingField; // 0x10

	::CBKCCDGFNHH* PENDMLPCMKB()
	{
		return ((::CBKCCDGFNHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFHJHBGGEP_PENDMLPCMKB_OFFSET))(this);
	}

	::System::Void EKIFPEICBMK(::CBKCCDGFNHH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CBKCCDGFNHH*))((::PBYTE)hIl2Cpp + JCFHJHBGGEP_EKIFPEICBMK_OFFSET))(this, EGEGIMGMJHN);
	}
};
