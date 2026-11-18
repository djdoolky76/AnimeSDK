#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUIPainting;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIShareBtnWidgetController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LEBEBGGONDL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x126CF7A0)
#define LEBEBGGONDL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x126CF660)
#define LEBEBGGONDL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x126CF3D0)
#define LEBEBGGONDL__CTOR_OFFSET UNITYSDK_OFFSET(0x126CF790)

inline static constexpr unsigned int LEBEBGGONDL_TypeDefinitionIndex = 62217;

class LEBEBGGONDL : public ::GIBMJLOJLKD
{
public:
	::MonoUIPainting* IIPBFLCFGNP; // 0x18
	::LGINJIKKBJA* NJAELOKIKLP; // 0x20
	::UnityEngine::Animation* EIBJHMDONIA; // 0x28
	::UnityEngine::GameObject* IEFNLGBNGHJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x38
	::FGCOIBFFCHB* AGBKNMLJFKI; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIShareBtnWidgetController*>* KOFDFMEEENM; // 0x48
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x50
	::UnityEngine::GameObject* DOKOMMBKHBN; // 0x58
	::UnityEngine::GameObject* AHMMNGFKBEG; // 0x60
	::UnityEngine::UI::Text* PAGMNPPHKMA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBEBGGONDL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEBEBGGONDL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEBEBGGONDL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LEBEBGGONDL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
