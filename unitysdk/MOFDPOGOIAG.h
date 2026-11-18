#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KBDIDMBGFCE.h"

#define MOFDPOGOIAG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x127448F0)
#define MOFDPOGOIAG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12744860)
#define MOFDPOGOIAG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x127447D0)
#define MOFDPOGOIAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12744750)
#define MOFDPOGOIAG__CTOR_OFFSET UNITYSDK_OFFSET(0x127447C0)

inline static constexpr unsigned int MOFDPOGOIAG_TypeDefinitionIndex = 57885;

class MOFDPOGOIAG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xF8; // 0x0
	::KBDIDMBGFCE PBBAJGBCFAO; // 0x20
	::System::Int32 MFPKGNIGAOK; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOFDPOGOIAG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFDPOGOIAG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFDPOGOIAG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFDPOGOIAG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 CFFFADGEKLK, ::KBDIDMBGFCE NFEJLEOLEFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::KBDIDMBGFCE))((::PBYTE)hIl2Cpp + MOFDPOGOIAG_CNHBDOMKKDE_OFFSET))(this, CFFFADGEKLK, NFEJLEOLEFD);
	}
};
