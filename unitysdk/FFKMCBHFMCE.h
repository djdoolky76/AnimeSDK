#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define FFKMCBHFMCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E5F650)
#define FFKMCBHFMCE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E5F510)
#define FFKMCBHFMCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E5F280)
#define FFKMCBHFMCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5F640)

inline static constexpr unsigned int FFKMCBHFMCE_TypeDefinitionIndex = 82953;

class FFKMCBHFMCE : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* ICIBNCOCFAO; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* ADHDPGAPGBP; // 0x20
	::LGINJIKKBJA* OEIFHCEFEBG; // 0x28
	::FGCOIBFFCHB* ICKBIBPLPIO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* LDBCOKNFDDC; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* EEBGCDLIJDG; // 0x40
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x48
	::FGCOIBFFCHB* MAMNIGKOFLN; // 0x50
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMCBHFMCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFKMCBHFMCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKMCBHFMCE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFKMCBHFMCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
