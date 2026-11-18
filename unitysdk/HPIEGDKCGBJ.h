#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HPIEGDKCGBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1819BDC0)
#define HPIEGDKCGBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1819BC50)
#define HPIEGDKCGBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1819B9C0)
#define HPIEGDKCGBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1819BDB0)

inline static constexpr unsigned int HPIEGDKCGBJ_TypeDefinitionIndex = 54213;

class HPIEGDKCGBJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MLMJMAOMKOI; // 0x18
	::LGINJIKKBJA* JGPBKAHIBLG; // 0x20
	::LGINJIKKBJA* JHIPOFMCKNO; // 0x28
	::UnityEngine::Transform* JCALBNKHBDC; // 0x30
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::LGINJIKKBJA* OMFDKIIPGHM; // 0x48
	::MoleMole::MonoGamepadCustomList* EENNOOMEIEH; // 0x50
	::MonoUITableScrollV2* GEJCMGMHMDG; // 0x58
	::FGCOIBFFCHB* MNFAPGAMDIA; // 0x60
	::LGINJIKKBJA* KOFDFMEEENM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEGDKCGBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HPIEGDKCGBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HPIEGDKCGBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEGDKCGBJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
