#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDIKGPOMBGJ;

#define GHLKNDPGDHG_ACALKPGHILE_OFFSET UNITYSDK_OFFSET(0x1F125C20)
#define GHLKNDPGDHG_CFPIHIJPGOI_OFFSET UNITYSDK_OFFSET(0x1F125C00)
#define GHLKNDPGDHG_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1F125E10)
#define GHLKNDPGDHG_CPBGMHNOOHB_OFFSET UNITYSDK_OFFSET(0x1F125EE0)
#define GHLKNDPGDHG_DBCOLPNOPOA_OFFSET UNITYSDK_OFFSET(0x1F125ED0)
#define GHLKNDPGDHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F125C90)
#define GHLKNDPGDHG_FFHAFHJPOPH_OFFSET UNITYSDK_OFFSET(0x1F125EB0)
#define GHLKNDPGDHG_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1F125D30)
#define GHLKNDPGDHG_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1F125D50)
#define GHLKNDPGDHG_GET_SUBLAYER_OFFSET UNITYSDK_OFFSET(0x1F125D40)
#define GHLKNDPGDHG_ILADJADAIIM_OFFSET UNITYSDK_OFFSET(0x1F125BF0)
#define GHLKNDPGDHG_JCBCDIEJIFA_OFFSET UNITYSDK_OFFSET(0x1F125EC0)
#define GHLKNDPGDHG_JLCCJELKGDC_OFFSET UNITYSDK_OFFSET(0x1F125C10)
#define GHLKNDPGDHG_SET_OFFSET UNITYSDK_OFFSET(0x1F125D60)
#define GHLKNDPGDHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F125E00)

inline static constexpr unsigned int GHLKNDPGDHG_TypeDefinitionIndex = 94926;

class GHLKNDPGDHG : public ::System::Object
{
public:
	::MDIKGPOMBGJ* _IKHKOJLDHFF_k__BackingField; // 0x10
	::System::Int32 _CLNDLFNBOFD_k__BackingField; // 0x18
	::System::Single _LAAJHDMLBMM_k__BackingField; // 0x1C
	::System::Single _ADFPJDCNPKM_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLKNDPGDHG__CTOR_OFFSET))(this);
	}

	::MDIKGPOMBGJ* ILADJADAIIM()
	{
		return ((::MDIKGPOMBGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_ILADJADAIIM_OFFSET))(this);
	}

	::System::Single CFPIHIJPGOI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_CFPIHIJPGOI_OFFSET))(this);
	}

	::System::Single JLCCJELKGDC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_JLCCJELKGDC_OFFSET))(this);
	}

	::System::Void ACALKPGHILE(::System::Single GMKLLBIKFPF, ::System::Single KILPCOMOCMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_ACALKPGHILE_OFFSET))(this, GMKLLBIKFPF, KILPCOMOCMD);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_DISPOSE_OFFSET))(this);
	}

	::System::Int32 get_Layer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_GET_LAYER_OFFSET))(this);
	}

	::System::Int32 get_SubLayer()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_GET_SUBLAYER_OFFSET))(this);
	}

	::System::Int32 get_Order()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_GET_ORDER_OFFSET))(this);
	}

	::System::Void Set(::System::Int32 OCALHHLFBAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_SET_OFFSET))(this, OCALHHLFBAF);
	}

	static ::GHLKNDPGDHG* COKNIICCODC(::MDIKGPOMBGJ* IFAJBOBJDJE)
	{
		return ((::GHLKNDPGDHG*(*)(::MDIKGPOMBGJ*))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_COKNIICCODC_OFFSET))(IFAJBOBJDJE);
	}

	::System::Void FFHAFHJPOPH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_FFHAFHJPOPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JCBCDIEJIFA(::MDIKGPOMBGJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MDIKGPOMBGJ*))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_JCBCDIEJIFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DBCOLPNOPOA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_DBCOLPNOPOA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CPBGMHNOOHB(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHLKNDPGDHG_CPBGMHNOOHB_OFFSET))(this, EGEGIMGMJHN);
	}
};
