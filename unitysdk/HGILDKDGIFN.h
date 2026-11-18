#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define HGILDKDGIFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D8C670)
#define HGILDKDGIFN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D8C5C0)
#define HGILDKDGIFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D8C350)
#define HGILDKDGIFN__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8C660)

inline static constexpr unsigned int HGILDKDGIFN_TypeDefinitionIndex = 50444;

class HGILDKDGIFN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MJMGANKGIFM; // 0x18
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x20
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KFDOBMKJEPI; // 0x30
	::UnityEngine::UI::Text* MLKKFBEOHIB; // 0x38
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x40
	::UnityEngine::GameObject* PEBJOGELGOJ; // 0x48
	::KNLFLMMHALL_1<::System::Object*>* NOJGAKNMJHI; // 0x50
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* CKHKPHBKAOJ; // 0x58
	::FGCOIBFFCHB* JDALFKDKBHM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGILDKDGIFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGILDKDGIFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGILDKDGIFN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HGILDKDGIFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
