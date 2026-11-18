#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JANFHIKPCFO.h"
#include "unitysdk/PIFBCHGBCBC.h"

#define IOPOPFNCCCA_DBACFHNPPPP_OFFSET UNITYSDK_OFFSET(0xF8862B0)
#define IOPOPFNCCCA_KAEIINKFAAA_OFFSET UNITYSDK_OFFSET(0xF8859E0)
#define IOPOPFNCCCA_LBEDJGHIDPK_OFFSET UNITYSDK_OFFSET(0xF885B30)
#define IOPOPFNCCCA_MGHDOECNEJA_OFFSET UNITYSDK_OFFSET(0xF885A30)
#define IOPOPFNCCCA_NDIDOIFFLDL_OFFSET UNITYSDK_OFFSET(0xF8860F0)
#define IOPOPFNCCCA_NFHMDNEEECM_OFFSET UNITYSDK_OFFSET(0xF886340)
#define IOPOPFNCCCA__CTOR_OFFSET UNITYSDK_OFFSET(0xF8860E0)

inline static constexpr unsigned int IOPOPFNCCCA_TypeDefinitionIndex = 54026;

class IOPOPFNCCCA : public ::JANFHIKPCFO
{
public:
	::System::Int32 MKNHMGMGCPI; // 0x18
	::System::Boolean MKKGDOEGNFF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPOPFNCCCA__CTOR_OFFSET))(this);
	}

	::System::Boolean KAEIINKFAAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPOPFNCCCA_KAEIINKFAAA_OFFSET))(this);
	}

	::System::Boolean MGHDOECNEJA(::PIFBCHGBCBC DMADIGMDIBK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIFBCHGBCBC))((::PBYTE)hIl2Cpp + IOPOPFNCCCA_MGHDOECNEJA_OFFSET))(this, DMADIGMDIBK);
	}

	::System::Void NDIDOIFFLDL(::System::Int32 PKHPPCCOKOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IOPOPFNCCCA_NDIDOIFFLDL_OFFSET))(this, PKHPPCCOKOM);
	}

	::System::Int32 LBEDJGHIDPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPOPFNCCCA_LBEDJGHIDPK_OFFSET))(this);
	}

	::System::Boolean DBACFHNPPPP(::PIFBCHGBCBC MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIFBCHGBCBC))((::PBYTE)hIl2Cpp + IOPOPFNCCCA_DBACFHNPPPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean NFHMDNEEECM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOPOPFNCCCA_NFHMDNEEECM_OFFSET))(this);
	}
};
