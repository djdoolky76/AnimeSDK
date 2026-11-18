#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PNHFPGHHJOO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1EED06E0)
#define PNHFPGHHJOO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1EED05E0)
#define PNHFPGHHJOO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EED0410)
#define PNHFPGHHJOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED06D0)

inline static constexpr unsigned int PNHFPGHHJOO_TypeDefinitionIndex = 95102;

class PNHFPGHHJOO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::UnityEngine::RectTransform* ABMHHIIEHKJ; // 0x20
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x38
	::FGCOIBFFCHB* EGEMIFNNNEA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHFPGHHJOO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNHFPGHHJOO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHFPGHHJOO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNHFPGHHJOO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
