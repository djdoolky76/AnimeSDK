#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KBDIDMBGFCE.h"

#define DIHOKPBADBI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x183430C0)
#define DIHOKPBADBI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18343120)
#define DIHOKPBADBI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18343030)
#define DIHOKPBADBI__CCTOR_OFFSET UNITYSDK_OFFSET(0x18342FB0)
#define DIHOKPBADBI__CTOR_OFFSET UNITYSDK_OFFSET(0x18343020)

inline static constexpr unsigned int DIHOKPBADBI_TypeDefinitionIndex = 68874;

class DIHOKPBADBI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE5; // 0x0
	::System::Int32 MFPKGNIGAOK; // 0x20
	::KBDIDMBGFCE PBBAJGBCFAO; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIHOKPBADBI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHOKPBADBI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHOKPBADBI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 CFFFADGEKLK, ::KBDIDMBGFCE NFEJLEOLEFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::KBDIDMBGFCE))((::PBYTE)hIl2Cpp + DIHOKPBADBI_CNHBDOMKKDE_OFFSET))(this, CFFFADGEKLK, NFEJLEOLEFD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHOKPBADBI_FIGPAOKNJLN_OFFSET))(this);
	}
};
