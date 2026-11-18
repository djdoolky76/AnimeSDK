#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HMKDKFGIINP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A5E930)
#define HMKDKFGIINP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A5E7D0)
#define HMKDKFGIINP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5E920)

inline static constexpr unsigned int HMKDKFGIINP_TypeDefinitionIndex = 91197;

class HMKDKFGIINP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* IMNCEDALMHB; // 0x18
	::UnityEngine::Animation* NFONGFBNLBG; // 0x20
	::UnityEngine::Animation* GLDPCGJJHGM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* INOKEAFJFNF; // 0x30
	::UnityEngine::Animation* LOIFMBMPPLC; // 0x38
	::UnityEngine::Animation* NCPDCEKPCOH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BDKBBOKFMOB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKDKFGIINP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMKDKFGIINP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMKDKFGIINP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
