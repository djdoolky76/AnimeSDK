#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWidgetController; }

#define ALHNDPMOFNF_FCCNDFMODLI_FLCMDAKEDMC_OFFSET UNITYSDK_OFFSET(0x11BB0570)
#define ALHNDPMOFNF_FCCNDFMODLI__CTOR_OFFSET UNITYSDK_OFFSET(0x11BB0560)

inline static constexpr unsigned int ALHNDPMOFNF_FCCNDFMODLI_TypeDefinitionIndex = 86721;

class ALHNDPMOFNF_FCCNDFMODLI : public ::System::Object
{
public:
	::MoleMole::UIWidgetController* MNOMCCLBJAO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_FCCNDFMODLI__CTOR_OFFSET))(this);
	}

	::System::Void FLCMDAKEDMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_FCCNDFMODLI_FLCMDAKEDMC_OFFSET))(this);
	}
};
