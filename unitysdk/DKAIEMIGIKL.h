#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFGIFLBJDIL.h"
#include "unitysdk/System/ValueType.h"

class PJEJIAEDLFG;

#define DKAIEMIGIKL_HICLAEIBFLJ_OFFSET UNITYSDK_OFFSET(0x7F68A0)
#define DKAIEMIGIKL__CTOR_OFFSET UNITYSDK_OFFSET(0x368340)

inline static constexpr unsigned int DKAIEMIGIKL_TypeDefinitionIndex = 46271;

struct alignas(8) DKAIEMIGIKL
{
	::PJEJIAEDLFG* PIHFPFDGOLO; // 0x10
	::IFGIFLBJDIL HNPIKCPLFEA; // 0x18
	::System::Int32 DEFCLMNDLBK; // 0x1C

	::System::Void _ctor(::PJEJIAEDLFG* LHPFMGBDFPN, ::IFGIFLBJDIL FGHKMFMBOHI, ::System::Int32 EGBBGOIFOHK)
	{
		return ((::System::Void(*)(::PVOID, ::PJEJIAEDLFG*, ::IFGIFLBJDIL, ::System::Int32))((::PBYTE)hIl2Cpp + DKAIEMIGIKL__CTOR_OFFSET))(this, LHPFMGBDFPN, FGHKMFMBOHI, EGBBGOIFOHK);
	}

	::System::Boolean HICLAEIBFLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKAIEMIGIKL_HICLAEIBFLJ_OFFSET))(this);
	}
};
