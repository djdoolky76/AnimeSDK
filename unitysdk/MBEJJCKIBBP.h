#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMBFIGBAENC.h"

namespace System { class Action; }

#define MBEJJCKIBBP_HCNHNGKMJAB_OFFSET UNITYSDK_OFFSET(0x14D5C740)
#define MBEJJCKIBBP_KJDDAHNOEJP_OFFSET UNITYSDK_OFFSET(0x14D5C450)
#define MBEJJCKIBBP__CTOR_OFFSET UNITYSDK_OFFSET(0x14D5C730)

inline static constexpr unsigned int MBEJJCKIBBP_TypeDefinitionIndex = 86561;

class MBEJJCKIBBP : public ::CMBFIGBAENC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJJCKIBBP__CTOR_OFFSET))(this);
	}

	::System::Void KJDDAHNOEJP(::System::Action* NBCEOMOEKDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MBEJJCKIBBP_KJDDAHNOEJP_OFFSET))(this, NBCEOMOEKDL);
	}

	::System::Void HCNHNGKMJAB(::System::Action* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MBEJJCKIBBP_HCNHNGKMJAB_OFFSET))(this, MIALFKCCCPI);
	}
};
