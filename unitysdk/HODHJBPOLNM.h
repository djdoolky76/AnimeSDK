#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class CKLEBCDLGKC;
class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define HODHJBPOLNM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15387AE0)
#define HODHJBPOLNM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x153879A0)
#define HODHJBPOLNM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15387750)
#define HODHJBPOLNM__CTOR_OFFSET UNITYSDK_OFFSET(0x15387AD0)

inline static constexpr unsigned int HODHJBPOLNM_TypeDefinitionIndex = 73633;

class HODHJBPOLNM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x18
	::MoleMole::MonoGamepadSelectable* JNGDADACCCH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x28
	::LGINJIKKBJA* BAPGIBLMHPJ; // 0x30
	::UnityEngine::GameObject* CMHCFHJBGOP; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::KNLFLMMHALL_1<::CKLEBCDLGKC*>* BAOBIBPKOEK; // 0x48
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODHJBPOLNM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HODHJBPOLNM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HODHJBPOLNM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODHJBPOLNM_KGEBDLGBGNM_OFFSET))(this);
	}
};
