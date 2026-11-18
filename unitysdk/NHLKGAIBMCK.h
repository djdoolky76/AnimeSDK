#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFNEDOLPIOO.h"

namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }

#define NHLKGAIBMCK_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x105BA1F0)
#define NHLKGAIBMCK_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x105BA8C0)
#define NHLKGAIBMCK_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x105BA220)
#define NHLKGAIBMCK_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x105BA740)
#define NHLKGAIBMCK__CTOR_OFFSET UNITYSDK_OFFSET(0x105BA200)

inline static constexpr unsigned int NHLKGAIBMCK_TypeDefinitionIndex = 71955;

class NHLKGAIBMCK : public ::BFNEDOLPIOO
{
public:
	::MoleMole::UIGeneralTutorialTipsRowWidgetController* NHJJFLPHAGI; // 0x30
	::System::Int32 DKIJFGOJIBC; // 0x38

	::System::Void _ctor(::System::Int32 AMENMGOBNON, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NHLKGAIBMCK__CTOR_OFFSET))(this, AMENMGOBNON, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLKGAIBMCK_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLKGAIBMCK_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLKGAIBMCK_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLKGAIBMCK_CPOLHKPOMEC_OFFSET))(this);
	}
};
