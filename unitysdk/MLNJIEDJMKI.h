#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MLNJIEDJMKI_CBDGGMJGIIO_OFFSET UNITYSDK_OFFSET(0x1A69B670)
#define MLNJIEDJMKI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A69B8E0)
#define MLNJIEDJMKI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A69B7C0)
#define MLNJIEDJMKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A69B3C0)
#define MLNJIEDJMKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69B8D0)

inline static constexpr unsigned int MLNJIEDJMKI_TypeDefinitionIndex = 48489;

class MLNJIEDJMKI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::LGINJIKKBJA* IILNONKEPKL; // 0x20
	::UnityEngine::RectTransform* JHLIHDLAPBB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x30
	::UnityEngine::GameObject* IPCOIFBOEPA; // 0x38
	::LGINJIKKBJA* JMIAEALCJFA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x48
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x50
	::MoleMole::MonoGamepadCustomList* AEDDPMKDKNJ; // 0x58
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x60
	::LGINJIKKBJA* MAHNABIKKDL; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CDBHPMLAMEC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNJIEDJMKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLNJIEDJMKI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLNJIEDJMKI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNJIEDJMKI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CBDGGMJGIIO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLNJIEDJMKI_CBDGGMJGIIO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
