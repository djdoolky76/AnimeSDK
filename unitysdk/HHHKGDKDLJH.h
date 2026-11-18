#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HHHKGDKDLJH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140B29F0)
#define HHHKGDKDLJH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140B2900)
#define HHHKGDKDLJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140B26A0)
#define HHHKGDKDLJH__CTOR_OFFSET UNITYSDK_OFFSET(0x140B29E0)

inline static constexpr unsigned int HHHKGDKDLJH_TypeDefinitionIndex = 42934;

class HHHKGDKDLJH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::UnityEngine::GameObject* GJFHEMGEDJH; // 0x20
	::MoleMole::MonoGamepadSelectable* HEKACEMIHKE; // 0x28
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x30
	::UnityEngine::RectTransform* IPCOIFBOEPA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* LKIHDIDNCJL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NHCHJOAOOHE; // 0x48
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x50
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x58
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x60
	::FGCOIBFFCHB* IMDLHCPGEDN; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHKGDKDLJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHHKGDKDLJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHHKGDKDLJH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHKGDKDLJH_KGEBDLGBGNM_OFFSET))(this);
	}
};
