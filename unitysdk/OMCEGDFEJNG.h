#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class JFLHGHFBNGJ;
namespace MoleMole { class UIGeneralIntimacyUpPopWindowController; }

#define OMCEGDFEJNG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x15F7CDD0)
#define OMCEGDFEJNG_GJHDFLDDNGM_OFFSET UNITYSDK_OFFSET(0x15F7D220)
#define OMCEGDFEJNG_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x15F7CE00)
#define OMCEGDFEJNG_HFMHKBAPHAI_OFFSET UNITYSDK_OFFSET(0x15F7D230)
#define OMCEGDFEJNG_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x15F7D030)
#define OMCEGDFEJNG_PJNNELGKEPF_OFFSET UNITYSDK_OFFSET(0x15F7D1D0)
#define OMCEGDFEJNG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7CDE0)

inline static constexpr unsigned int OMCEGDFEJNG_TypeDefinitionIndex = 88828;

class OMCEGDFEJNG : public ::HGOBBALJENJ
{
public:
	::MoleMole::UIGeneralIntimacyUpPopWindowController* HDNKMBCIOHD; // 0x30
	::JFLHGHFBNGJ* EFFAONJBCOG; // 0x38

	::System::Void _ctor(::JFLHGHFBNGJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JFLHGHFBNGJ*))((::PBYTE)hIl2Cpp + OMCEGDFEJNG__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCEGDFEJNG_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCEGDFEJNG_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCEGDFEJNG_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void PJNNELGKEPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCEGDFEJNG_PJNNELGKEPF_OFFSET))(this);
	}

	::System::Void GJHDFLDDNGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCEGDFEJNG_GJHDFLDDNGM_OFFSET))(this);
	}

	::System::Void HFMHKBAPHAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCEGDFEJNG_HFMHKBAPHAI_OFFSET))(this);
	}
};
