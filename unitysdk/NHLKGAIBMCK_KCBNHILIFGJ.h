#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }

#define NHLKGAIBMCK_KCBNHILIFGJ_KMCINMBPFDC_OFFSET UNITYSDK_OFFSET(0x10D79450)
#define NHLKGAIBMCK_KCBNHILIFGJ_OEDGJCNMDFI_OFFSET UNITYSDK_OFFSET(0x10D792F0)
#define NHLKGAIBMCK_KCBNHILIFGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10D792E0)

inline static constexpr unsigned int NHLKGAIBMCK_KCBNHILIFGJ_TypeDefinitionIndex = 71956;

class NHLKGAIBMCK_KCBNHILIFGJ : public ::System::Object
{
public:
	::MoleMole::UIGeneralTutorialTipsRowWidgetController* JOLDOMEIKEF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLKGAIBMCK_KCBNHILIFGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OEDGJCNMDFI(::System::Int32 JEHLHNMFMBM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHLKGAIBMCK_KCBNHILIFGJ_OEDGJCNMDFI_OFFSET))(this, JEHLHNMFMBM);
	}

	::System::Void KMCINMBPFDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLKGAIBMCK_KCBNHILIFGJ_KMCINMBPFDC_OFFSET))(this);
	}
};
