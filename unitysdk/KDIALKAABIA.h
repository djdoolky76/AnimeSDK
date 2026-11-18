#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AJLGBLEMDCF;

#define KDIALKAABIA_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x753900)
#define KDIALKAABIA_FMFDHJIEHNP_OFFSET UNITYSDK_OFFSET(0x15201080)
#define KDIALKAABIA__CTOR_OFFSET UNITYSDK_OFFSET(0x7538F0)

inline static constexpr unsigned int KDIALKAABIA_TypeDefinitionIndex = 52000;

struct alignas(8) KDIALKAABIA
{
	::AJLGBLEMDCF* OANBLKOAGNN; // 0x10
	::System::Int32 PGMKIPCHFAF; // 0x18

	::System::Void _ctor(::AJLGBLEMDCF*& DAFELHALFDN, ::System::Int32& FMOPIACNALD)
	{
		return ((::System::Void(*)(::PVOID, ::AJLGBLEMDCF*&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDIALKAABIA__CTOR_OFFSET))(this, DAFELHALFDN, FMOPIACNALD);
	}

	/*
	static ::KDIALKAABIA FMFDHJIEHNP()
	{
		return ((::KDIALKAABIA(*)())((::PBYTE)hIl2Cpp + KDIALKAABIA_FMFDHJIEHNP_OFFSET))();
	}
	*/

	::System::Boolean FFCPIEDHBDP(::System::Int32& FMOPIACNALD, ::System::Int32& HGOHCNBBDHC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDIALKAABIA_FFCPIEDHBDP_OFFSET))(this, FMOPIACNALD, HGOHCNBBDHC);
	}
};
