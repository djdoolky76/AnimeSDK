#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define JLDKKNAFJBA_BMAKBFBOOJL_OFFSET UNITYSDK_OFFSET(0x152A7250)
#define JLDKKNAFJBA_FGEJAAJOBBC_OFFSET UNITYSDK_OFFSET(0x152A7290)
#define JLDKKNAFJBA_JJOKHIPFMJG_OFFSET UNITYSDK_OFFSET(0x754130)
#define JLDKKNAFJBA__CTOR_OFFSET UNITYSDK_OFFSET(0x754120)

inline static constexpr unsigned int JLDKKNAFJBA_TypeDefinitionIndex = 54061;

struct alignas(4) JLDKKNAFJBA
{
	::System::Boolean BMLCFJOONEL; // 0x10
	::System::Boolean KHPHNKGPHIG; // 0x11
	::System::Boolean POIGNPIICLL; // 0x12
	::System::Byte _padding0[0x1];
	::System::Int32 CAMJIFMENMC; // 0x14

	::System::Void _ctor(::System::Int32 CJPLACFCFBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JLDKKNAFJBA__CTOR_OFFSET))(this, CJPLACFCFBP);
	}

	/*
	static ::JLDKKNAFJBA BMAKBFBOOJL()
	{
		return ((::JLDKKNAFJBA(*)())((::PBYTE)hIl2Cpp + JLDKKNAFJBA_BMAKBFBOOJL_OFFSET))();
	}
	*/

	/*
	static ::JLDKKNAFJBA FGEJAAJOBBC()
	{
		return ((::JLDKKNAFJBA(*)())((::PBYTE)hIl2Cpp + JLDKKNAFJBA_FGEJAAJOBBC_OFFSET))();
	}
	*/

	::System::Boolean JJOKHIPFMJG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDKKNAFJBA_JJOKHIPFMJG_OFFSET))(this);
	}
};
