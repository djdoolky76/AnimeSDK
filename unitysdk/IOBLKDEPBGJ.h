#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IOBLKDEPBGJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1ACC25D0)
#define IOBLKDEPBGJ_HKMPMDNLNOF_OFFSET UNITYSDK_OFFSET(0x1ACC23B0)
#define IOBLKDEPBGJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1ACC2500)
#define IOBLKDEPBGJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1ACC2160)
#define IOBLKDEPBGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC25C0)

inline static constexpr unsigned int IOBLKDEPBGJ_TypeDefinitionIndex = 77516;

class IOBLKDEPBGJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CFKEAPOGCLD; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CAANLDEBMJP; // 0x20
	::UnityEngine::GameObject* GKMDDOPPNJH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FIDHNODLLCB; // 0x40
	::LGINJIKKBJA* LCHPJHAFJGE; // 0x48
	::UnityEngine::GameObject* EHMLMJKEJMM; // 0x50
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x60
	::LGINJIKKBJA* MPKFJGANKMF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBLKDEPBGJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOBLKDEPBGJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOBLKDEPBGJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* HKMPMDNLNOF(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOBLKDEPBGJ_HKMPMDNLNOF_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBLKDEPBGJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
