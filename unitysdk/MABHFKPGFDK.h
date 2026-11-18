#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBEILOBMJPL.h"
#include "unitysdk/JJCKMHMCCAP.h"

class BEBIHODDALG;
class MEKLIGLLJKM;

#define MABHFKPGFDK_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x13D11660)
#define MABHFKPGFDK_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x13D11780)
#define MABHFKPGFDK_CFINLEBEOPC_OFFSET UNITYSDK_OFFSET(0x13D115D0)
#define MABHFKPGFDK_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x13D11530)
#define MABHFKPGFDK_DNAKEIJEHJO_OFFSET UNITYSDK_OFFSET(0x13D10B70)
#define MABHFKPGFDK_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x13D10BF0)
#define MABHFKPGFDK_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x13D11400)
#define MABHFKPGFDK_HEDKEJGHLJK_OFFSET UNITYSDK_OFFSET(0x13D116F0)
#define MABHFKPGFDK_MBCFJPBPCCN_OFFSET UNITYSDK_OFFSET(0x13D11150)
#define MABHFKPGFDK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13D110B0)
#define MABHFKPGFDK__CTOR_OFFSET UNITYSDK_OFFSET(0x13D115C0)

inline static constexpr unsigned int MABHFKPGFDK_TypeDefinitionIndex = 70329;

class MABHFKPGFDK : public ::JBEILOBMJPL
{
public:
	// static const ::System::Int32 BOMFFOHECFE = 0x9; // 0x0
	// static const ::System::Int32 EPNDBIJMLHH = 0x0; // 0x0
	::BEBIHODDALG* LAPADAILBBK; // 0x10
	::MEKLIGLLJKM* CDPHHNAGHJM; // 0x18
	::System::Single IFEKCBDMIAD; // 0x20
	::JJCKMHMCCAP IACKHFCLPJI; // 0x24
	::System::Single BLKONCLDPNG; // 0x2C
	::System::Single PKPJCHOKEFF; // 0x30
	::System::Boolean ADFPOJPACEG; // 0x34
	::System::Boolean CLHNFKEHKCO; // 0x35
	::System::Boolean AJDNOHJGINJ; // 0x36
	::System::Byte _padding0[0x1];
	::System::Single IEPPOCDAMDC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABHFKPGFDK__CTOR_OFFSET))(this);
	}

	::System::Void DNAKEIJEHJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABHFKPGFDK_DNAKEIJEHJO_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MABHFKPGFDK_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABHFKPGFDK_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void DIHCGHDHPJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABHFKPGFDK_DIHCGHDHPJP_OFFSET))(this);
	}

	::System::Void CFINLEBEOPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABHFKPGFDK_CFINLEBEOPC_OFFSET))(this);
	}

	::System::Void MBCFJPBPCCN(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MABHFKPGFDK_MBCFJPBPCCN_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABHFKPGFDK_BBJHAJJPFKG_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABHFKPGFDK_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void HEDKEJGHLJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABHFKPGFDK_HEDKEJGHLJK_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MABHFKPGFDK_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}
};
