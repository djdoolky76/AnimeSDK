#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PGNHKIPAGPK_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x1C1D42C0)
#define PGNHKIPAGPK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1D4360)
#define PGNHKIPAGPK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1D4220)
#define PGNHKIPAGPK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1D3FE0)
#define PGNHKIPAGPK_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x1C1D4400)
#define PGNHKIPAGPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D4350)

inline static constexpr unsigned int PGNHKIPAGPK_TypeDefinitionIndex = 50341;

class PGNHKIPAGPK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FLOANEOLEFN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x20
	::FGCOIBFFCHB* GJNNECLHOEB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x30
	::GCIMMDDIFBJ* PGDNKCDOECI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x40
	::UnityEngine::RectTransform* PPGOGGMDMGF; // 0x48
	::GCIMMDDIFBJ* IJDPDOHOCGB; // 0x50
	::FGCOIBFFCHB* LLHPHHPDAAO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNHKIPAGPK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGNHKIPAGPK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + PGNHKIPAGPK_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNHKIPAGPK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGNHKIPAGPK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + PGNHKIPAGPK_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
