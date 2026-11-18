#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HALDKBIKHDN__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D09D00)
#define HALDKBIKHDN__CTOR_OFFSET UNITYSDK_OFFSET(0x748A00)

inline static constexpr unsigned int HALDKBIKHDN_TypeDefinitionIndex = 81107;

struct alignas(4) HALDKBIKHDN
{
	static ::HALDKBIKHDN* StaticGet_EFMCBKOMKIH()
	{
		return (::HALDKBIKHDN*)Il2CppClass::FromTypeDefinitionIndex(HALDKBIKHDN_TypeDefinitionIndex)->GetStaticField(0x113B0);
	}
	::System::UInt32 BELNJJKMMJP; // 0x10
	::System::Boolean MJIMNNFEKNB; // 0x14

	::System::Void _ctor(::System::UInt32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HALDKBIKHDN__CTOR_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HALDKBIKHDN__CCTOR_OFFSET))();
	}
};
