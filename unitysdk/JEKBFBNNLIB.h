#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMBFIGBAENC.h"

namespace System { class Action; }

#define JEKBFBNNLIB_HCNHNGKMJAB_OFFSET UNITYSDK_OFFSET(0x19450360)
#define JEKBFBNNLIB_HONFJFLIBIL_OFFSET UNITYSDK_OFFSET(0x19450180)
#define JEKBFBNNLIB_KJDDAHNOEJP_OFFSET UNITYSDK_OFFSET(0x19450110)
#define JEKBFBNNLIB__CTOR_OFFSET UNITYSDK_OFFSET(0x19450170)

inline static constexpr unsigned int JEKBFBNNLIB_TypeDefinitionIndex = 56369;

class JEKBFBNNLIB : public ::CMBFIGBAENC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKBFBNNLIB__CTOR_OFFSET))(this);
	}

	::System::Void KJDDAHNOEJP(::System::Action* NBCEOMOEKDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JEKBFBNNLIB_KJDDAHNOEJP_OFFSET))(this, NBCEOMOEKDL);
	}

	::System::Boolean HONFJFLIBIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKBFBNNLIB_HONFJFLIBIL_OFFSET))(this);
	}

	::System::Void HCNHNGKMJAB(::System::Action* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JEKBFBNNLIB_HCNHNGKMJAB_OFFSET))(this, MIALFKCCCPI);
	}
};
