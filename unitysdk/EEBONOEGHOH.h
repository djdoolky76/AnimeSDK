#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJMCKOFAJJI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define EEBONOEGHOH_EPLIKGKENIE_OFFSET UNITYSDK_OFFSET(0x1F307AA0)
#define EEBONOEGHOH_EPOAKHMNACF_OFFSET UNITYSDK_OFFSET(0x1F307B40)
#define EEBONOEGHOH_GDNCIFELGFD_OFFSET UNITYSDK_OFFSET(0x967320)
#define EEBONOEGHOH_MBNBBKJHICE_OFFSET UNITYSDK_OFFSET(0x75E7A0)
#define EEBONOEGHOH_NKNLIOEONBD_OFFSET UNITYSDK_OFFSET(0x1F3079F0)
#define EEBONOEGHOH_PMHOGKFMFDA_OFFSET UNITYSDK_OFFSET(0x1F307950)

inline static constexpr unsigned int EEBONOEGHOH_TypeDefinitionIndex = 28883;

struct alignas(4) EEBONOEGHOH
{
	::LJMCKOFAJJI AAEDPMHMDIK; // 0x10
	::System::Int32 MNAIIBHLHMA; // 0x14
	::System::Single ONGKNJDGBLJ; // 0x18
	::System::Single JOGJHDBEDPN; // 0x1C
	::System::Single FIFMBOKJKNO; // 0x20
	::System::Single GKGIOEOFPOE; // 0x24
	::System::Boolean JICGPHAIEMP; // 0x28

	/*
	static ::EEBONOEGHOH PMHOGKFMFDA(::System::Single HAAEBCOBKFF, ::System::Single BFMMEICFNCD)
	{
		return ((::EEBONOEGHOH(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EEBONOEGHOH_PMHOGKFMFDA_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}
	*/

	/*
	static ::EEBONOEGHOH NKNLIOEONBD(::System::Int32 BKLGNCBNEGM, ::System::Single PLEOLBDFBBK, ::System::Single NDCEMNMFPDE)
	{
		return ((::EEBONOEGHOH(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EEBONOEGHOH_NKNLIOEONBD_OFFSET))(BKLGNCBNEGM, PLEOLBDFBBK, NDCEMNMFPDE);
	}
	*/

	/*
	static ::EEBONOEGHOH EPLIKGKENIE(::System::Single EAFIKNKFGGI, ::System::Single FMBEBCCMENL)
	{
		return ((::EEBONOEGHOH(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EEBONOEGHOH_EPLIKGKENIE_OFFSET))(EAFIKNKFGGI, FMBEBCCMENL);
	}
	*/

	/*
	static ::EEBONOEGHOH EPOAKHMNACF(::System::Int32 BKLGNCBNEGM)
	{
		return ((::EEBONOEGHOH(*)(::System::Int32))((::PBYTE)hIl2Cpp + EEBONOEGHOH_EPOAKHMNACF_OFFSET))(BKLGNCBNEGM);
	}
	*/

	::System::Boolean MBNBBKJHICE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBONOEGHOH_MBNBBKJHICE_OFFSET))(this);
	}

	::JGLIFHIAIEH GDNCIFELGFD()
	{
		return ((::JGLIFHIAIEH(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBONOEGHOH_GDNCIFELGFD_OFFSET))(this);
	}
};
