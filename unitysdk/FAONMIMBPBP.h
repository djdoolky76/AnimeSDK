#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FAONMIMBPBP__CCTOR_OFFSET UNITYSDK_OFFSET(0x14282250)
#define FAONMIMBPBP__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int FAONMIMBPBP_TypeDefinitionIndex = 42525;

struct alignas(4) FAONMIMBPBP
{
	static ::FAONMIMBPBP* StaticGet_EFMCBKOMKIH()
	{
		return (::FAONMIMBPBP*)Il2CppClass::FromTypeDefinitionIndex(FAONMIMBPBP_TypeDefinitionIndex)->GetStaticField(0xD860);
	}
	::System::Int32 BELNJJKMMJP; // 0x10

	::System::Void _ctor(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAONMIMBPBP__CTOR_OFFSET))(this, ABHBKFJKINO);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAONMIMBPBP__CCTOR_OFFSET))();
	}
};
