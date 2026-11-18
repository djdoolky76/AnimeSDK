#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class ImgTextSkillParser; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BFBLOGKKJMN_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x12D20DD0)
#define BFBLOGKKJMN_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x12D20E00)
#define BFBLOGKKJMN_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x12D20C00)
#define BFBLOGKKJMN_KAGADEALCNL_OFFSET UNITYSDK_OFFSET(0x12D20DE0)
#define BFBLOGKKJMN_NBGLNEODBBA_OFFSET UNITYSDK_OFFSET(0x12D20DF0)
#define BFBLOGKKJMN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D20B50)
#define BFBLOGKKJMN__CTOR_OFFSET UNITYSDK_OFFSET(0x12D20D40)

inline static constexpr unsigned int BFBLOGKKJMN_TypeDefinitionIndex = 79931;

class BFBLOGKKJMN : public ::IOOIHHOJOPI
{
public:
	::MoleMole::ImgTextSkillParser* _EGLGMLGIPAK_k__BackingField; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* _HEFKHJLHKIA_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBLOGKKJMN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFBLOGKKJMN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::MoleMole::ImgTextSkillParser* AJFFCMNAIEN()
	{
		return ((::MoleMole::ImgTextSkillParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBLOGKKJMN_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBLOGKKJMN_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* KAGADEALCNL()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBLOGKKJMN_KAGADEALCNL_OFFSET))(this);
	}

	::System::Void NBGLNEODBBA(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + BFBLOGKKJMN_NBGLNEODBBA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDJLFIGAABO(::MoleMole::ImgTextSkillParser* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ImgTextSkillParser*))((::PBYTE)hIl2Cpp + BFBLOGKKJMN_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}
};
