#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NFEMHKLOJNB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1288EE30)
#define NFEMHKLOJNB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1288EDA0)
#define NFEMHKLOJNB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1288EC20)
#define NFEMHKLOJNB__CTOR_OFFSET UNITYSDK_OFFSET(0x1288EE20)

inline static constexpr unsigned int NFEMHKLOJNB_TypeDefinitionIndex = 92702;

class NFEMHKLOJNB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JMCDKOKCOJN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::MonoUITableScrollV2* AFDJNDDFBEA; // 0x28
	::LGINJIKKBJA* NOHPELDAHHE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEMHKLOJNB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFEMHKLOJNB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEMHKLOJNB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFEMHKLOJNB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
