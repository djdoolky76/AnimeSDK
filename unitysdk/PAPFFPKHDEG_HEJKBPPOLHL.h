#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOIMINJPFHO;
class DIHNHHLDLDP;
class NBDEOHKBODI;
class PAPFFPKHDEG;

#define PAPFFPKHDEG_HEJKBPPOLHL_BJIBMIBAOAA_OFFSET UNITYSDK_OFFSET(0x1D9A5F00)
#define PAPFFPKHDEG_HEJKBPPOLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A5EF0)

inline static constexpr unsigned int PAPFFPKHDEG_HEJKBPPOLHL_TypeDefinitionIndex = 93329;

class PAPFFPKHDEG_HEJKBPPOLHL : public ::System::Object
{
public:
	::PAPFFPKHDEG* KLHPEBKNIFB; // 0x10
	::NBDEOHKBODI* ACMIDENMJEH; // 0x18
	::System::Single PBKKBBHOCLC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAPFFPKHDEG_HEJKBPPOLHL__CTOR_OFFSET))(this);
	}

	::System::Void BJIBMIBAOAA(::AOIMINJPFHO* JILPBNOILEK, ::System::Int32 LCBNPPFCKNB, ::DIHNHHLDLDP* GKECCNEHHNI)
	{
		return ((::System::Void(*)(::PVOID, ::AOIMINJPFHO*, ::System::Int32, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + PAPFFPKHDEG_HEJKBPPOLHL_BJIBMIBAOAA_OFFSET))(this, JILPBNOILEK, LCBNPPFCKNB, GKECCNEHHNI);
	}
};
