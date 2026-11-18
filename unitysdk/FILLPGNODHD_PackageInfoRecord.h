#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILLPGNODHD_GFFFNLHGNED.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FILLPGNODHD_PACKAGEINFORECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x682390)

inline static constexpr unsigned int FILLPGNODHD_PackageInfoRecord_TypeDefinitionIndex = 59933;

struct alignas(8) FILLPGNODHD_PackageInfoRecord
{
	::System::String* packageType; // 0x10

	::System::Void _ctor(::FILLPGNODHD_GFFFNLHGNED EPDKNALBFMJ)
	{
		return ((::System::Void(*)(::PVOID, ::FILLPGNODHD_GFFFNLHGNED))((::PBYTE)hIl2Cpp + FILLPGNODHD_PACKAGEINFORECORD__CTOR_OFFSET))(this, EPDKNALBFMJ);
	}
};
