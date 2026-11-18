#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define FHIPJJADJCB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11C4EE50)
#define FHIPJJADJCB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11C4ED30)
#define FHIPJJADJCB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C4EAB0)
#define FHIPJJADJCB__CTOR_OFFSET UNITYSDK_OFFSET(0x11C4EE40)

inline static constexpr unsigned int FHIPJJADJCB_TypeDefinitionIndex = 55835;

class FHIPJJADJCB : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* MLCKGONKCHJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NAANFDMGIBB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* INJFLBGMPOD; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* HELEHOEKIFO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::UnityEngine::RectTransform* BCOBEAEHBBK; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DELIHDDDOMA; // 0x50
	::KNLFLMMHALL_1<::System::Object*>* AJDPIBEEGFB; // 0x58
	::KNLFLMMHALL_1<::System::Object*>* FJDEMJHCDKN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIPJJADJCB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHIPJJADJCB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHIPJJADJCB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHIPJJADJCB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
