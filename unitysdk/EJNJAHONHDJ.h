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

#define EJNJAHONHDJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9D84C0)
#define EJNJAHONHDJ_IDFGLPLPKMJ_OFFSET UNITYSDK_OFFSET(0xF9D82A0)
#define EJNJAHONHDJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9D83F0)
#define EJNJAHONHDJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9D80A0)
#define EJNJAHONHDJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D84B0)

inline static constexpr unsigned int EJNJAHONHDJ_TypeDefinitionIndex = 60513;

class EJNJAHONHDJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* KJOKHOAPMKP; // 0x20
	::FGCOIBFFCHB* BBGCCMMOKFP; // 0x28
	::FGCOIBFFCHB* KJKNJNJDDHG; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ELOOPGBNIAN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OLBGMFEGMCG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNJAHONHDJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNJAHONHDJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNJAHONHDJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* IDFGLPLPKMJ(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNJAHONHDJ_IDFGLPLPKMJ_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJNJAHONHDJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
