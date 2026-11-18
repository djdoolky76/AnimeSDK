#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJLEHEKHCB.h"
#include "unitysdk/LHJLEHEKHCB_PNNPOLBKDGM.h"

namespace System { class String; }

#define AMEFJLPOIAK_NJOJMPDLFFH_OFFSET UNITYSDK_OFFSET(0x143773A0)
#define AMEFJLPOIAK_PHCPAKMBBOD_OFFSET UNITYSDK_OFFSET(0x143773F0)
#define AMEFJLPOIAK__CTOR_OFFSET UNITYSDK_OFFSET(0x14377440)

inline static constexpr unsigned int AMEFJLPOIAK_TypeDefinitionIndex = 73817;

class AMEFJLPOIAK : public ::LHJLEHEKHCB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEFJLPOIAK__CTOR_OFFSET))(this);
	}

	::System::Void NJOJMPDLFFH(::LHJLEHEKHCB_PNNPOLBKDGM OBNIAHNMHPF, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::LHJLEHEKHCB_PNNPOLBKDGM, ::System::String*))((::PBYTE)hIl2Cpp + AMEFJLPOIAK_NJOJMPDLFFH_OFFSET))(this, OBNIAHNMHPF, HIAIKHDFCLN);
	}

	::System::Void PHCPAKMBBOD(::LHJLEHEKHCB_PNNPOLBKDGM OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::LHJLEHEKHCB_PNNPOLBKDGM))((::PBYTE)hIl2Cpp + AMEFJLPOIAK_PHCPAKMBBOD_OFFSET))(this, OBNIAHNMHPF);
	}
};
