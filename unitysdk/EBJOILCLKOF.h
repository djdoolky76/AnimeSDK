#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class EBJOILCLKOF_KCNHEKCJILC;
class MonoUITableScrollV2;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBJOILCLKOF_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x132AE790)
#define EBJOILCLKOF_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x132AE780)
#define EBJOILCLKOF_LMGDAJNLHBE_OFFSET UNITYSDK_OFFSET(0x132AE860)
#define EBJOILCLKOF_OIBOOKACOCF_OFFSET UNITYSDK_OFFSET(0x132AE8C0)
#define EBJOILCLKOF__CTOR_OFFSET UNITYSDK_OFFSET(0x132AE850)

inline static constexpr unsigned int EBJOILCLKOF_TypeDefinitionIndex = 52361;

class EBJOILCLKOF : public ::DDHEGIHEKLH
{
public:
	::EBJOILCLKOF_KCNHEKCJILC* HMKKJKLFCBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJOILCLKOF__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJOILCLKOF_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + EBJOILCLKOF_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, JNLBPMKIFNK);
	}

	::UnityEngine::UI::Extension::UILocalizationText* LMGDAJNLHBE()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJOILCLKOF_LMGDAJNLHBE_OFFSET))(this);
	}

	::MonoUITableScrollV2* OIBOOKACOCF()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBJOILCLKOF_OIBOOKACOCF_OFFSET))(this);
	}
};
