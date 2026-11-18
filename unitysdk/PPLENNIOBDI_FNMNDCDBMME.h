#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPLENNIOBDI_FNMNDCDBMME_PNIDDCBKBLI.h"
#include "unitysdk/System/ValueType.h"

#define PPLENNIOBDI_FNMNDCDBMME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6BB2B0)

inline static constexpr unsigned int PPLENNIOBDI_FNMNDCDBMME_TypeDefinitionIndex = 67885;

struct alignas(4) PPLENNIOBDI_FNMNDCDBMME
{
	static ::PPLENNIOBDI_FNMNDCDBMME* StaticGet_ILFBJHPNDIM()
	{
		return (::PPLENNIOBDI_FNMNDCDBMME*)Il2CppClass::FromTypeDefinitionIndex(PPLENNIOBDI_FNMNDCDBMME_TypeDefinitionIndex)->GetStaticField(0xEC40);
	}
	static ::PPLENNIOBDI_FNMNDCDBMME* StaticGet_CONBBLDCMED()
	{
		return (::PPLENNIOBDI_FNMNDCDBMME*)Il2CppClass::FromTypeDefinitionIndex(PPLENNIOBDI_FNMNDCDBMME_TypeDefinitionIndex)->GetStaticField(0xEC44);
	}
	::PPLENNIOBDI_FNMNDCDBMME_PNIDDCBKBLI NOOLOILNGPL; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPLENNIOBDI_FNMNDCDBMME__CCTOR_OFFSET))();
	}
};
