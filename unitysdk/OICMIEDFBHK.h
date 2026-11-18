#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define OICMIEDFBHK_ALGDLJGCEHD_OFFSET UNITYSDK_OFFSET(0x359150)
#define OICMIEDFBHK_CDAFGHFEFFG_OFFSET UNITYSDK_OFFSET(0x11B34830)
#define OICMIEDFBHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6B83A0)
#define OICMIEDFBHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x6B8350)
#define OICMIEDFBHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6B83B0)
#define OICMIEDFBHK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6B8460)
#define OICMIEDFBHK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x6B8400)
#define OICMIEDFBHK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x359320)
#define OICMIEDFBHK__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int OICMIEDFBHK_TypeDefinitionIndex = 80604;

struct alignas(4) OICMIEDFBHK
{
	::System::UInt32 _HHNNKGPFJNO_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OICMIEDFBHK__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	/*
	::System::Boolean Equals(::OICMIEDFBHK LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OICMIEDFBHK))((::PBYTE)hIl2Cpp + OICMIEDFBHK_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OICMIEDFBHK_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICMIEDFBHK_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OICMIEDFBHK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	/*
	static ::OICMIEDFBHK CDAFGHFEFFG(::OICMIEDFBHK CBLGCIFLMKL)
	{
		return ((::OICMIEDFBHK(*)(::OICMIEDFBHK))((::PBYTE)hIl2Cpp + OICMIEDFBHK_CDAFGHFEFFG_OFFSET))(CBLGCIFLMKL);
	}
	*/

	::System::Void ALGDLJGCEHD(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OICMIEDFBHK_ALGDLJGCEHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICMIEDFBHK_HLPHPBAODIF_OFFSET))(this);
	}

	::System::UInt32 PPIFNHNGCGO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OICMIEDFBHK_PPIFNHNGCGO_OFFSET))(this);
	}
};
