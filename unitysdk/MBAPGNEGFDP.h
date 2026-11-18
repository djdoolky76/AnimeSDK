#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define MBAPGNEGFDP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A633E80)
#define MBAPGNEGFDP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A633D40)
#define MBAPGNEGFDP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A633AD0)
#define MBAPGNEGFDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A633E70)

inline static constexpr unsigned int MBAPGNEGFDP_TypeDefinitionIndex = 49730;

class MBAPGNEGFDP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* OAPLNDFIBCM; // 0x20
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x30
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* MLGEMMDLCJP; // 0x48
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x50
	::MoleMole::NotificationBadge* MAMKMHKDPCA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAPGNEGFDP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBAPGNEGFDP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBAPGNEGFDP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBAPGNEGFDP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
