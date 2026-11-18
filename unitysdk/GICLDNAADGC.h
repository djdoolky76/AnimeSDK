#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFNEDOLPIOO.h"

namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }
namespace System { class String; }

#define GICLDNAADGC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x13D599E0)
#define GICLDNAADGC_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x13D59FC0)
#define GICLDNAADGC_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x13D59A10)
#define GICLDNAADGC_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x13D59E40)
#define GICLDNAADGC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D599F0)

inline static constexpr unsigned int GICLDNAADGC_TypeDefinitionIndex = 86076;

class GICLDNAADGC : public ::BFNEDOLPIOO
{
public:
	::System::String* PAMOPLPBHKE; // 0x30
	::MoleMole::UIGeneralTutorialTipsRowWidgetController* NHJJFLPHAGI; // 0x38

	::System::Void _ctor(::System::String* JBNFBGMMKJI, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + GICLDNAADGC__CTOR_OFFSET))(this, JBNFBGMMKJI, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GICLDNAADGC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICLDNAADGC_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICLDNAADGC_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICLDNAADGC_CPOLHKPOMEC_OFFSET))(this);
	}
};
