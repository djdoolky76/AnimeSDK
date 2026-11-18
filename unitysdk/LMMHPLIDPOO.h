#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LMMHPLIDPOO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15900900)
#define LMMHPLIDPOO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15900950)
#define LMMHPLIDPOO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15900870)
#define LMMHPLIDPOO__CCTOR_OFFSET UNITYSDK_OFFSET(0x159007F0)
#define LMMHPLIDPOO__CTOR_OFFSET UNITYSDK_OFFSET(0x15900860)

inline static constexpr unsigned int LMMHPLIDPOO_TypeDefinitionIndex = 75395;

class LMMHPLIDPOO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x130; // 0x0
	::System::Int32 HDAJFMNJDAH; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMMHPLIDPOO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHPLIDPOO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHPLIDPOO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 NBBBLAIBPGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMMHPLIDPOO_CNHBDOMKKDE_OFFSET))(this, NBBBLAIBPGD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMMHPLIDPOO_FIGPAOKNJLN_OFFSET))(this);
	}
};
