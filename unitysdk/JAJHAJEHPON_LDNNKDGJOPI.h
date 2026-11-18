#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LEFFOBDDLPC;

#define JAJHAJEHPON_LDNNKDGJOPI_HGLBKKONOMC_OFFSET UNITYSDK_OFFSET(0x1ACC7280)
#define JAJHAJEHPON_LDNNKDGJOPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC7270)

inline static constexpr unsigned int JAJHAJEHPON_LDNNKDGJOPI_TypeDefinitionIndex = 55490;

class JAJHAJEHPON_LDNNKDGJOPI : public ::System::Object
{
public:
	::System::Int32 HCPIELPBNKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJHAJEHPON_LDNNKDGJOPI__CTOR_OFFSET))(this);
	}

	::System::Boolean HGLBKKONOMC(::LEFFOBDDLPC* HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::LEFFOBDDLPC*))((::PBYTE)hIl2Cpp + JAJHAJEHPON_LDNNKDGJOPI_HGLBKKONOMC_OFFSET))(this, HMMMOCJAEOA);
	}
};
