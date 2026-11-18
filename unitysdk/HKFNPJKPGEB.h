#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HKFNPJKPGEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D32BA0)
#define HKFNPJKPGEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D329D0)
#define HKFNPJKPGEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D326D0)
#define HKFNPJKPGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D32B90)

inline static constexpr unsigned int HKFNPJKPGEB_TypeDefinitionIndex = 50106;

class HKFNPJKPGEB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DDGNFJDLOKA; // 0x18
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JHCBDFNDLIL; // 0x28
	::UnityEngine::GameObject* PNLIEMJEOIP; // 0x30
	::UnityEngine::GameObject* DNILNJBKLLG; // 0x38
	::FGCOIBFFCHB* DDJAJDBHKNM; // 0x40
	::FGCOIBFFCHB* NKHKFGFACNP; // 0x48
	::FGCOIBFFCHB* DGGGEOCFEPN; // 0x50
	::FGCOIBFFCHB* JEAEFGNJAGB; // 0x58
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x60
	::FGCOIBFFCHB* MLGAMOHDAII; // 0x68
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x70
	::FGCOIBFFCHB* PHIPIGEPBCF; // 0x78
	::UnityEngine::RectTransform* JFMEGBECFML; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFNPJKPGEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKFNPJKPGEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKFNPJKPGEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFNPJKPGEB_KGEBDLGBGNM_OFFSET))(this);
	}
};
