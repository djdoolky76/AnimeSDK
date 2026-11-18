#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DBFHIOMAOJG__CTOR_OFFSET UNITYSDK_OFFSET(0x701E80)

inline static constexpr unsigned int DBFHIOMAOJG_TypeDefinitionIndex = 71059;

struct alignas(4) DBFHIOMAOJG
{
	::System::UInt16 FKGNDKNHAEH; // 0x10
	::System::Byte KMKBJKOEBMF; // 0x12
	::System::Byte _padding0[0x1];
	::System::UInt16 BCCCCPJGKPK; // 0x14

	::System::Void _ctor(::System::UInt16 OBNIAHNMHPF, ::System::UInt16 GIAEPMKCBIB, ::System::Byte ODJKACDGJLM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::Byte))((::PBYTE)hIl2Cpp + DBFHIOMAOJG__CTOR_OFFSET))(this, OBNIAHNMHPF, GIAEPMKCBIB, ODJKACDGJLM);
	}
};
