#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define EIFGNPAAHBH_NDJMKKKEHGM_DKKKNIAEHLL_OFFSET UNITYSDK_OFFSET(0x706E70)
#define EIFGNPAAHBH_NDJMKKKEHGM_JMHLOCJBCOD_OFFSET UNITYSDK_OFFSET(0x706ED0)
#define EIFGNPAAHBH_NDJMKKKEHGM__CTOR_OFFSET UNITYSDK_OFFSET(0x706E60)

inline static constexpr unsigned int EIFGNPAAHBH_NDJMKKKEHGM_TypeDefinitionIndex = 69066;

struct alignas(4) EIFGNPAAHBH_NDJMKKKEHGM
{
	::System::UInt32 BOHBDHAPLDN; // 0x10

	::System::Void _ctor(::System::UInt32 GONODCOMIAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIFGNPAAHBH_NDJMKKKEHGM__CTOR_OFFSET))(this, GONODCOMIAA);
	}

	::System::UInt32 DKKKNIAEHLL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFGNPAAHBH_NDJMKKKEHGM_DKKKNIAEHLL_OFFSET))(this);
	}

	::System::Int32 JMHLOCJBCOD(::System::Int32 JCPAANKOEBM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIFGNPAAHBH_NDJMKKKEHGM_JMHLOCJBCOD_OFFSET))(this, JCPAANKOEBM);
	}
};
