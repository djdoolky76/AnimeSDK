#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PNHALKGJNHE_MPDHBLNCKHN_JCGMEODENKG_OFFSET UNITYSDK_OFFSET(0x1F54D3E0)
#define PNHALKGJNHE_MPDHBLNCKHN_LOGMNFFOOCB_OFFSET UNITYSDK_OFFSET(0x1F54D3F0)
#define PNHALKGJNHE_MPDHBLNCKHN__CTOR_OFFSET UNITYSDK_OFFSET(0x7E0F10)

inline static constexpr unsigned int PNHALKGJNHE_MPDHBLNCKHN_TypeDefinitionIndex = 29106;

struct alignas(4) PNHALKGJNHE_MPDHBLNCKHN
{
	::System::Boolean EDBPKBINMLP; // 0x10
	::System::Boolean HCMGMBAAABA; // 0x11
	::System::Boolean CICJAHOFIFK; // 0x12

	::System::Void _ctor(::System::Boolean JAJOJCKHBCH, ::System::Boolean PIFILGBJBFM, ::System::Boolean JOBGEGCDPBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PNHALKGJNHE_MPDHBLNCKHN__CTOR_OFFSET))(this, JAJOJCKHBCH, PIFILGBJBFM, JOBGEGCDPBJ);
	}

	/*
	static ::PNHALKGJNHE_MPDHBLNCKHN JCGMEODENKG()
	{
		return ((::PNHALKGJNHE_MPDHBLNCKHN(*)())((::PBYTE)hIl2Cpp + PNHALKGJNHE_MPDHBLNCKHN_JCGMEODENKG_OFFSET))();
	}
	*/

	/*
	static ::PNHALKGJNHE_MPDHBLNCKHN LOGMNFFOOCB()
	{
		return ((::PNHALKGJNHE_MPDHBLNCKHN(*)())((::PBYTE)hIl2Cpp + PNHALKGJNHE_MPDHBLNCKHN_LOGMNFFOOCB_OFFSET))();
	}
	*/
};
