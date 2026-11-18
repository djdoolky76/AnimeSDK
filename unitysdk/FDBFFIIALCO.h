#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFNEDOLPIOO.h"

class GOGADEDMKCC;
namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }

#define FDBFFIIALCO_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x10F5E740)
#define FDBFFIIALCO_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x10F5EC40)
#define FDBFFIIALCO_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x10F5E860)
#define FDBFFIIALCO_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x10F5EBE0)
#define FDBFFIIALCO__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5E750)

inline static constexpr unsigned int FDBFFIIALCO_TypeDefinitionIndex = 63183;

class FDBFFIIALCO : public ::BFNEDOLPIOO
{
public:
	::MoleMole::UIGeneralTutorialTipsRowWidgetController* JHCOOBBDPBN; // 0x30
	::GOGADEDMKCC* FOLDDKHJKDH; // 0x38

	::System::Void _ctor(::GOGADEDMKCC* LJBPECKCCEA, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::GOGADEDMKCC*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDBFFIIALCO__CTOR_OFFSET))(this, LJBPECKCCEA, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBFFIIALCO_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBFFIIALCO_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBFFIIALCO_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBFFIIALCO_CPOLHKPOMEC_OFFSET))(this);
	}
};
