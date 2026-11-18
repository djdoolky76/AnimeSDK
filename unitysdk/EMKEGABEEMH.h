#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGPPGMMOPB.h"
#include "unitysdk/System/Object.h"

class MDIKGPOMBGJ;

#define EMKEGABEEMH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1FF71660)
#define EMKEGABEEMH_DBCOLPNOPOA_OFFSET UNITYSDK_OFFSET(0x1FF71620)
#define EMKEGABEEMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF71570)
#define EMKEGABEEMH_DNMEMIKEJGM_OFFSET UNITYSDK_OFFSET(0x1FF71650)
#define EMKEGABEEMH_DOLGNIIJCEF_OFFSET UNITYSDK_OFFSET(0x1FF71560)
#define EMKEGABEEMH_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1FF71480)
#define EMKEGABEEMH_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1FF714A0)
#define EMKEGABEEMH_GET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1FF71490)
#define EMKEGABEEMH_ICELNPNKMMC_OFFSET UNITYSDK_OFFSET(0x1FF71790)
#define EMKEGABEEMH_ILADJADAIIM_OFFSET UNITYSDK_OFFSET(0x1FF71550)
#define EMKEGABEEMH_JCBCDIEJIFA_OFFSET UNITYSDK_OFFSET(0x1FF71640)
#define EMKEGABEEMH_KJMNODCDNFI_OFFSET UNITYSDK_OFFSET(0x1FF71630)
#define EMKEGABEEMH_SET_OFFSET UNITYSDK_OFFSET(0x1FF714B0)
#define EMKEGABEEMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF71610)

inline static constexpr unsigned int EMKEGABEEMH_TypeDefinitionIndex = 94912;

class EMKEGABEEMH : public ::System::Object
{
public:
	::MDIKGPOMBGJ* _IKHKOJLDHFF_k__BackingField; // 0x10
	::System::Int32 _CLNDLFNBOFD_k__BackingField; // 0x18
	::System::Int32 _HGLBACIFOBJ_k__BackingField; // 0x1C
	::System::Int32 _DCNOJOAIKJM_k__BackingField; // 0x20
	::System::Int32 _KBJKHHGGILH_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKEGABEEMH__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Layer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKEGABEEMH_GET_LAYER_OFFSET))(this);
	}

	::System::Int32 get_SubLayer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKEGABEEMH_GET_SUBLAYER_OFFSET))(this);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKEGABEEMH_GET_ORDER_OFFSET))(this);
	}

	::System::Void Set(::System::Int32 OCALHHLFBAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMKEGABEEMH_SET_OFFSET))(this, OCALHHLFBAF);
	}

	::MDIKGPOMBGJ* ILADJADAIIM()
	{
		return ((::MDIKGPOMBGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKEGABEEMH_ILADJADAIIM_OFFSET))(this);
	}

	::System::Int32 DOLGNIIJCEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKEGABEEMH_DOLGNIIJCEF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKEGABEEMH_DISPOSE_OFFSET))(this);
	}

	::System::Void DBCOLPNOPOA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMKEGABEEMH_DBCOLPNOPOA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KJMNODCDNFI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMKEGABEEMH_KJMNODCDNFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JCBCDIEJIFA(::MDIKGPOMBGJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MDIKGPOMBGJ*))((::PBYTE)hIl2Cpp + EMKEGABEEMH_JCBCDIEJIFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DNMEMIKEJGM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMKEGABEEMH_DNMEMIKEJGM_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::EMKEGABEEMH* COKNIICCODC(::MDIKGPOMBGJ* IFAJBOBJDJE, ::MAGPPGMMOPB KMOHKCADPNA, ::System::Int32 BBFAJBKOAOB)
	{
		return ((::EMKEGABEEMH*(*)(::MDIKGPOMBGJ*, ::MAGPPGMMOPB, ::System::Int32))((::PBYTE)hIl2Cpp + EMKEGABEEMH_COKNIICCODC_OFFSET))(IFAJBOBJDJE, KMOHKCADPNA, BBFAJBKOAOB);
	}

	::System::Void ICELNPNKMMC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMKEGABEEMH_ICELNPNKMMC_OFFSET))(this, EGEGIMGMJHN);
	}
};
