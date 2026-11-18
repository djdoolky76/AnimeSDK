#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class NLNIIPDCABP;

#define ONNJLBKOEDN_JJKHBIGDFJA_KBAOIBANAAF_OFFSET UNITYSDK_OFFSET(0x15F8A2F0)
#define ONNJLBKOEDN_JJKHBIGDFJA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8A2E0)

inline static constexpr unsigned int ONNJLBKOEDN_JJKHBIGDFJA_TypeDefinitionIndex = 55551;

class ONNJLBKOEDN_JJKHBIGDFJA : public ::System::Object
{
public:
	::NLNIIPDCABP* FNFNDIBMPDE; // 0x10
	::MoleMole::EntityHandle AMNIHACKELI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_JJKHBIGDFJA__CTOR_OFFSET))(this);
	}

	::System::Void KBAOIBANAAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_JJKHBIGDFJA_KBAOIBANAAF_OFFSET))(this);
	}
};
