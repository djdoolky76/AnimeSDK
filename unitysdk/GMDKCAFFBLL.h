#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMBFIGBAENC.h"

namespace System { class Action; }

#define GMDKCAFFBLL_HCNHNGKMJAB_OFFSET UNITYSDK_OFFSET(0x13D6A7F0)
#define GMDKCAFFBLL_KJDDAHNOEJP_OFFSET UNITYSDK_OFFSET(0x13D6A470)
#define GMDKCAFFBLL__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6A7E0)

inline static constexpr unsigned int GMDKCAFFBLL_TypeDefinitionIndex = 50958;

class GMDKCAFFBLL : public ::CMBFIGBAENC
{
public:
	::System::Action* JDKLAEACDPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDKCAFFBLL__CTOR_OFFSET))(this);
	}

	::System::Void KJDDAHNOEJP(::System::Action* NBCEOMOEKDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GMDKCAFFBLL_KJDDAHNOEJP_OFFSET))(this, NBCEOMOEKDL);
	}

	::System::Void HCNHNGKMJAB(::System::Action* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GMDKCAFFBLL_HCNHNGKMJAB_OFFSET))(this, MIALFKCCCPI);
	}
};
