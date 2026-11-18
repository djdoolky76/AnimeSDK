#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFNEDOLPIOO.h"

namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }
namespace System { class String; }

#define MDDHFJELJMN_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x177A11B0)
#define MDDHFJELJMN_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x177A1790)
#define MDDHFJELJMN_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x177A11E0)
#define MDDHFJELJMN_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x177A1610)
#define MDDHFJELJMN__CTOR_OFFSET UNITYSDK_OFFSET(0x177A11C0)

inline static constexpr unsigned int MDDHFJELJMN_TypeDefinitionIndex = 52804;

class MDDHFJELJMN : public ::BFNEDOLPIOO
{
public:
	::System::String* PAMOPLPBHKE; // 0x30
	::MoleMole::UIGeneralTutorialTipsRowWidgetController* NHJJFLPHAGI; // 0x38

	::System::Void _ctor(::System::String* JBNFBGMMKJI, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDDHFJELJMN__CTOR_OFFSET))(this, JBNFBGMMKJI, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDHFJELJMN_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDHFJELJMN_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDHFJELJMN_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDHFJELJMN_CPOLHKPOMEC_OFFSET))(this);
	}
};
