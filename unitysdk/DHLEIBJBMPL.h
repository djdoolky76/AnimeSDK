#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DHLEIBJBMPL_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x1329C9F0)
#define DHLEIBJBMPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1329CA70)
#define DHLEIBJBMPL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1329C910)
#define DHLEIBJBMPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1329C710)
#define DHLEIBJBMPL_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x1329CB10)
#define DHLEIBJBMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1329CA60)

inline static constexpr unsigned int DHLEIBJBMPL_TypeDefinitionIndex = 39436;

class DHLEIBJBMPL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::UnityEngine::GameObject* LIMEJNBGAJE; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::UnityEngine::GameObject* CMHCFHJBGOP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLEIBJBMPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHLEIBJBMPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + DHLEIBJBMPL_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHLEIBJBMPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLEIBJBMPL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + DHLEIBJBMPL_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
