#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EJNIBAJBOBL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x10642930)
#define EJNIBAJBOBL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x106428A0)
#define EJNIBAJBOBL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10642810)
#define EJNIBAJBOBL__CCTOR_OFFSET UNITYSDK_OFFSET(0x10642790)
#define EJNIBAJBOBL__CTOR_OFFSET UNITYSDK_OFFSET(0x10642800)

inline static constexpr unsigned int EJNIBAJBOBL_TypeDefinitionIndex = 72840;

class EJNIBAJBOBL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x3A; // 0x0
	::System::UInt32 KODHKJGAHHC; // 0x20
	::System::UInt32 BHPBPJCDHHG; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJNIBAJBOBL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNIBAJBOBL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNIBAJBOBL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNIBAJBOBL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 BHPBPJCDHHG, ::System::UInt32 KODHKJGAHHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJNIBAJBOBL_CNHBDOMKKDE_OFFSET))(this, BHPBPJCDHHG, KODHKJGAHHC);
	}
};
