#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DLLDGMJNNCB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x282350)
#define DLLDGMJNNCB_DOICHPKMAPI_OFFSET UNITYSDK_OFFSET(0x3E3C90)
#define DLLDGMJNNCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E3BC0)
#define DLLDGMJNNCB_HLFDCBBALIK_OFFSET UNITYSDK_OFFSET(0x3E3C80)
#define DLLDGMJNNCB_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x7FC2660)
#define DLLDGMJNNCB_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0x358B00)
#define DLLDGMJNNCB_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x7FC2790)
#define DLLDGMJNNCB__CTOR_OFFSET UNITYSDK_OFFSET(0x36F120)

inline static constexpr unsigned int DLLDGMJNNCB_TypeDefinitionIndex = 71540;

struct alignas(8) DLLDGMJNNCB
{
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x10
	::System::Boolean _ENEMAHJMNFI_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* HIAIKHDFCLN, ::System::Boolean EBAJLMBGMFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLLDGMJNNCB__CTOR_OFFSET))(this, HIAIKHDFCLN, EBAJLMBGMFE);
	}

	/*
	::System::Boolean Equals(::DLLDGMJNNCB LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DLLDGMJNNCB))((::PBYTE)hIl2Cpp + DLLDGMJNNCB_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	/*
	static ::System::Boolean INCFIJKMIGG(::DLLDGMJNNCB FFKBEGIHIGG, ::DLLDGMJNNCB CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::DLLDGMJNNCB, ::DLLDGMJNNCB))((::PBYTE)hIl2Cpp + DLLDGMJNNCB_INCFIJKMIGG_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLLDGMJNNCB_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HLFDCBBALIK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLLDGMJNNCB_HLFDCBBALIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLDGMJNNCB_DECMGICKDLH_OFFSET))(this);
	}

	/*
	static ::System::Boolean NOGJIJMACNO(::DLLDGMJNNCB FFKBEGIHIGG, ::DLLDGMJNNCB CKADGLGJJAB)
	{
		return ((::System::Boolean(*)(::DLLDGMJNNCB, ::DLLDGMJNNCB))((::PBYTE)hIl2Cpp + DLLDGMJNNCB_NOGJIJMACNO_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB);
	}
	*/

	::System::Boolean DOICHPKMAPI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLDGMJNNCB_DOICHPKMAPI_OFFSET))(this);
	}
};
