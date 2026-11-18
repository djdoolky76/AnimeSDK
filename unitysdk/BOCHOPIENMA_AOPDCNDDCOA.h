#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZipLineHintChildWindowController; }

#define BOCHOPIENMA_AOPDCNDDCOA_FPPCAMFGOHF_OFFSET UNITYSDK_OFFSET(0x18DAF850)
#define BOCHOPIENMA_AOPDCNDDCOA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAF840)

inline static constexpr unsigned int BOCHOPIENMA_AOPDCNDDCOA_TypeDefinitionIndex = 85576;

class BOCHOPIENMA_AOPDCNDDCOA : public ::System::Object
{
public:
	::MoleMole::UIZipLineHintChildWindowController* NCIMBHDKIJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHOPIENMA_AOPDCNDDCOA__CTOR_OFFSET))(this);
	}

	::System::Void FPPCAMFGOHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHOPIENMA_AOPDCNDDCOA_FPPCAMFGOHF_OFFSET))(this);
	}
};
