#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIDJKGFGAOA.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IEGBBFDBGAA.h"

#define CCJJNBEOOFN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16A0F7B0)
#define CCJJNBEOOFN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16A0F8B0)
#define CCJJNBEOOFN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16A0F720)
#define CCJJNBEOOFN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16A0F810)
#define CCJJNBEOOFN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16A0F610)
#define CCJJNBEOOFN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A0F6A0)
#define CCJJNBEOOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0F710)

inline static constexpr unsigned int CCJJNBEOOFN_TypeDefinitionIndex = 56842;

class CCJJNBEOOFN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x115; // 0x0
	::EIDJKGFGAOA MEBECDCAAEN; // 0x20
	::IEGBBFDBGAA OLPMJAECJBO; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCJJNBEOOFN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJNBEOOFN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJNBEOOFN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJNBEOOFN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::IEGBBFDBGAA DCCDGIDJFKB, ::EIDJKGFGAOA HHDAEKDONEL)
	{
		return ((::System::Void(*)(::PVOID, ::IEGBBFDBGAA, ::EIDJKGFGAOA))((::PBYTE)hIl2Cpp + CCJJNBEOOFN_CNHBDOMKKDE_OFFSET))(this, DCCDGIDJFKB, HHDAEKDONEL);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJNBEOOFN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJJNBEOOFN_FIGPAOKNJLN_OFFSET))(this);
	}
};
