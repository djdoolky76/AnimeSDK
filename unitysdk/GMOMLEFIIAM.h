#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

class LOICBEJNBOB;

#define GMOMLEFIIAM_CFINLEBEOPC_OFFSET UNITYSDK_OFFSET(0x15F30800)
#define GMOMLEFIIAM_DNAKEIJEHJO_OFFSET UNITYSDK_OFFSET(0x15F30560)
#define GMOMLEFIIAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15F307F0)

inline static constexpr unsigned int GMOMLEFIIAM_TypeDefinitionIndex = 82417;

class GMOMLEFIIAM : public ::JNAGFFCCOHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOMLEFIIAM__CTOR_OFFSET))(this);
	}

	::System::Void DNAKEIJEHJO(::LOICBEJNBOB* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::LOICBEJNBOB*))((::PBYTE)hIl2Cpp + GMOMLEFIIAM_DNAKEIJEHJO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void CFINLEBEOPC(::LOICBEJNBOB* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LOICBEJNBOB*))((::PBYTE)hIl2Cpp + GMOMLEFIIAM_CFINLEBEOPC_OFFSET))(this, MIALFKCCCPI);
	}
};
