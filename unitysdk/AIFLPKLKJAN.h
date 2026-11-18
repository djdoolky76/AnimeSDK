#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AIFLPKLKJAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16FEDBF0)
#define AIFLPKLKJAN_IDFGLPLPKMJ_OFFSET UNITYSDK_OFFSET(0x16FED9D0)
#define AIFLPKLKJAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16FEDB20)
#define AIFLPKLKJAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16FED7D0)
#define AIFLPKLKJAN__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEDBE0)

inline static constexpr unsigned int AIFLPKLKJAN_TypeDefinitionIndex = 73625;

class AIFLPKLKJAN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ELOOPGBNIAN; // 0x20
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* KJOKHOAPMKP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OLBGMFEGMCG; // 0x30
	::FGCOIBFFCHB* BBGCCMMOKFP; // 0x38
	::FGCOIBFFCHB* KJKNJNJDDHG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFLPKLKJAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIFLPKLKJAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFLPKLKJAN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIFLPKLKJAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IDFGLPLPKMJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AIFLPKLKJAN_IDFGLPLPKMJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
