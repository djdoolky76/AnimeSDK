#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPCMLEONLI.h"

namespace System { class Action; }

#define CJGPEKAEIAP_CBJAEOKBGBE_OFFSET UNITYSDK_OFFSET(0x15338010)
#define CJGPEKAEIAP_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x15337FA0)
#define CJGPEKAEIAP_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x15337EF0)
#define CJGPEKAEIAP__CTOR_OFFSET UNITYSDK_OFFSET(0x15337DE0)

inline static constexpr unsigned int CJGPEKAEIAP_TypeDefinitionIndex = 74867;

class CJGPEKAEIAP : public ::GIPCMLEONLI
{
public:
	::System::Action* BCBFGOCODLJ; // 0x40
	::System::Single MEBIGNNCEIB; // 0x48
	::System::Single GPDCBHEPDGL; // 0x4C
	::System::Single EMGNBOIGEJD; // 0x50

	::System::Void _ctor(::System::Single MCBBFNIIEAN, ::System::Single EIHGLEEGAPO, ::System::Action* JOODFMNDDMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CJGPEKAEIAP__CTOR_OFFSET))(this, MCBBFNIIEAN, EIHGLEEGAPO, JOODFMNDDMK);
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJGPEKAEIAP_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGPEKAEIAP_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Void CBJAEOKBGBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGPEKAEIAP_CBJAEOKBGBE_OFFSET))(this);
	}
};
