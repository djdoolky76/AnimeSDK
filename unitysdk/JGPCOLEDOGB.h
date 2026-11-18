#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBMMOHJKGOB.h"
#include "unitysdk/HGOBBALJENJ.h"
#include "unitysdk/MoleMole/UIGeneralIntimacyUpPopWindowController_Context_Type.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class UIGeneralIntimacyUpPopWindowController; }

#define JGPCOLEDOGB_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x165A7DC0)
#define JGPCOLEDOGB_GJHDFLDDNGM_OFFSET UNITYSDK_OFFSET(0x165A8770)
#define JGPCOLEDOGB_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x165A7EE0)
#define JGPCOLEDOGB_HFMHKBAPHAI_OFFSET UNITYSDK_OFFSET(0x165A86D0)
#define JGPCOLEDOGB_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x165A84E0)
#define JGPCOLEDOGB_PJNNELGKEPF_OFFSET UNITYSDK_OFFSET(0x165A8680)
#define JGPCOLEDOGB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x165A7EA0)
#define JGPCOLEDOGB__CTOR_OFFSET UNITYSDK_OFFSET(0x165A7DD0)

inline static constexpr unsigned int JGPCOLEDOGB_TypeDefinitionIndex = 38598;

class JGPCOLEDOGB : public ::HGOBBALJENJ
{
public:
	::MoleMole::UIGeneralIntimacyUpPopWindowController* HDNKMBCIOHD; // 0x30
	::System::Int32 JHIGPMJNKGD; // 0x38
	::System::Nullable_1<::System::Int32> LCJJFDBPGFC; // 0x3C
	::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type LCNFAIMOHFE; // 0x44

	::System::Void _ctor(::System::Int32 JHIGPMJNKGD, ::System::Nullable_1<::System::Int32> LCJJFDBPGFC, ::FBMMOHJKGOB ECKCJEIKJAP, ::System::Boolean EIHFHKDEACE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::FBMMOHJKGOB, ::System::Boolean))((::PBYTE)hIl2Cpp + JGPCOLEDOGB__CTOR_OFFSET))(this, JHIGPMJNKGD, LCJJFDBPGFC, ECKCJEIKJAP, EIHFHKDEACE);
	}

	::System::Void _ctor_1(::System::Int32 JHIGPMJNKGD, ::System::Nullable_1<::System::Int32> LCJJFDBPGFC, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type LCNFAIMOHFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Int32>, ::MoleMole::UIGeneralIntimacyUpPopWindowController_Context_Type))((::PBYTE)hIl2Cpp + JGPCOLEDOGB__CTOR_1_OFFSET))(this, JHIGPMJNKGD, LCJJFDBPGFC, LCNFAIMOHFE);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPCOLEDOGB_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPCOLEDOGB_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPCOLEDOGB_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void PJNNELGKEPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPCOLEDOGB_PJNNELGKEPF_OFFSET))(this);
	}

	::System::Void HFMHKBAPHAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPCOLEDOGB_HFMHKBAPHAI_OFFSET))(this);
	}

	::System::Void GJHDFLDDNGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPCOLEDOGB_GJHDFLDDNGM_OFFSET))(this);
	}
};
