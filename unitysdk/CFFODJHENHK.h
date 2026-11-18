#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CFFODJHENHK_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x159BF0D0)
#define CFFODJHENHK_CKIGDBFKHKC_OFFSET UNITYSDK_OFFSET(0x159BF0B0)
#define CFFODJHENHK_FEJNKBDNHLG_OFFSET UNITYSDK_OFFSET(0x159BF120)
#define CFFODJHENHK_HOHOMCEMKBI_OFFSET UNITYSDK_OFFSET(0x159BF100)
#define CFFODJHENHK_IGAGMAKFLDP_OFFSET UNITYSDK_OFFSET(0x159BF0E0)
#define CFFODJHENHK_MEPJGACLDKP_OFFSET UNITYSDK_OFFSET(0x159BF110)
#define CFFODJHENHK_NCLMJAEFJPI_OFFSET UNITYSDK_OFFSET(0x159BF0F0)
#define CFFODJHENHK_OBCLDNNCLPN_OFFSET UNITYSDK_OFFSET(0x159BF0C0)
#define CFFODJHENHK__CTOR_OFFSET UNITYSDK_OFFSET(0x159BEFF0)

inline static constexpr unsigned int CFFODJHENHK_TypeDefinitionIndex = 41521;

class CFFODJHENHK : public ::System::Attribute
{
public:
	// static const ::System::Int32 HEKIALGELMK = 0x10; // 0x0
	// static const ::System::Int32 FEMJCMIFALH = 0x10; // 0x0
	// static const ::System::Int32 HCLJHCPMBIN = 0x10; // 0x0
	::System::Type* _KDLKOHKDPAD_k__BackingField; // 0x10
	::System::Type* _JHJBODMKONH_k__BackingField; // 0x18
	::System::Int32 _ODPNGLAOIID_k__BackingField; // 0x20
	::System::Int32 _LGLBNPGBLCB_k__BackingField; // 0x24
	::System::Int32 _BBKBKEMEMBE_k__BackingField; // 0x28

	::System::Void _ctor(::System::Type* JAOOMPBBMMJ, ::System::Type* EHHEFPBKNBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CFFODJHENHK__CTOR_OFFSET))(this, JAOOMPBBMMJ, EHHEFPBKNBP);
	}

	::System::Void CKIGDBFKHKC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFODJHENHK_CKIGDBFKHKC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Type* OBCLDNNCLPN()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFODJHENHK_OBCLDNNCLPN_OFFSET))(this);
	}

	::System::Type* ABNCDAHLPHH()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFODJHENHK_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Int32 IGAGMAKFLDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFODJHENHK_IGAGMAKFLDP_OFFSET))(this);
	}

	::System::Void NCLMJAEFJPI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFODJHENHK_NCLMJAEFJPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HOHOMCEMKBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFODJHENHK_HOHOMCEMKBI_OFFSET))(this);
	}

	::System::Void MEPJGACLDKP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFFODJHENHK_MEPJGACLDKP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FEJNKBDNHLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFODJHENHK_FEJNKBDNHLG_OFFSET))(this);
	}
};
