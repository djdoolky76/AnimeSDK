#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEDINKOJCJO_JHJBDBAACMP.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DEDINKOJCJO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15369870)
#define DEDINKOJCJO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x153697E0)
#define DEDINKOJCJO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15369750)
#define DEDINKOJCJO__CCTOR_OFFSET UNITYSDK_OFFSET(0x153696D0)
#define DEDINKOJCJO__CTOR_OFFSET UNITYSDK_OFFSET(0x15369740)

inline static constexpr unsigned int DEDINKOJCJO_TypeDefinitionIndex = 39375;

class DEDINKOJCJO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x93; // 0x0
	::System::Int32 ANONIKBHHIO; // 0x20
	::DEDINKOJCJO_JHJBDBAACMP MMCJLMHPLOL; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEDINKOJCJO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDINKOJCJO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDINKOJCJO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDINKOJCJO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Int32 ANONIKBHHIO, ::DEDINKOJCJO_JHJBDBAACMP JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::DEDINKOJCJO_JHJBDBAACMP))((::PBYTE)hIl2Cpp + DEDINKOJCJO_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, ANONIKBHHIO, JKBLDFBGBPK);
	}
};
