#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMBFIGBAENC.h"

namespace System { class Action; }
namespace System { class String; }

#define FCPOJKAHBKL_HCNHNGKMJAB_OFFSET UNITYSDK_OFFSET(0x141962A0)
#define FCPOJKAHBKL_HJLHHBKGCLJ_OFFSET UNITYSDK_OFFSET(0x141961C0)
#define FCPOJKAHBKL_KJDDAHNOEJP_OFFSET UNITYSDK_OFFSET(0x14195F80)
#define FCPOJKAHBKL_PLPIHHIGFEK_OFFSET UNITYSDK_OFFSET(0x14196330)
#define FCPOJKAHBKL__CTOR_OFFSET UNITYSDK_OFFSET(0x14196290)

inline static constexpr unsigned int FCPOJKAHBKL_TypeDefinitionIndex = 63954;

class FCPOJKAHBKL : public ::CMBFIGBAENC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPOJKAHBKL__CTOR_OFFSET))(this);
	}

	::System::Void KJDDAHNOEJP(::System::Action* NBCEOMOEKDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCPOJKAHBKL_KJDDAHNOEJP_OFFSET))(this, NBCEOMOEKDL);
	}

	::System::Void HCNHNGKMJAB(::System::Action* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCPOJKAHBKL_HCNHNGKMJAB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HJLHHBKGCLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPOJKAHBKL_HJLHHBKGCLJ_OFFSET))(this);
	}

	::System::Void PLPIHHIGFEK(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCPOJKAHBKL_PLPIHHIGFEK_OFFSET))(this, DKPGLAFDLBC);
	}
};
