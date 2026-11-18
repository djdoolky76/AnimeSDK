#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OGOKELFNNLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x172C7230)
#define OGOKELFNNLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x172C7090)
#define OGOKELFNNLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x172C6DF0)
#define OGOKELFNNLO__CTOR_OFFSET UNITYSDK_OFFSET(0x172C7220)

inline static constexpr unsigned int OGOKELFNNLO_TypeDefinitionIndex = 41738;

class OGOKELFNNLO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LMEGBBDFBMM; // 0x18
	::FGCOIBFFCHB* IMDLHCPGEDN; // 0x20
	::FGCOIBFFCHB* ANBLGKBBIKI; // 0x28
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HPELNFEHKCG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::GameObject* DKMMLHHHHBK; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x58
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x60
	::FGCOIBFFCHB* MNHOFEMCLNH; // 0x68
	::FGCOIBFFCHB* CBAOEHJOIJO; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOKELFNNLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGOKELFNNLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGOKELFNNLO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OGOKELFNNLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
