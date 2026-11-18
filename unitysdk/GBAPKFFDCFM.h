#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GBAPKFFDCFM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB7F9E0)
#define GBAPKFFDCFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB7F8F0)
#define GBAPKFFDCFM__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7F9D0)

inline static constexpr unsigned int GBAPKFFDCFM_TypeDefinitionIndex = 82549;

class GBAPKFFDCFM : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CCAAEMHNPKI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBMPEIKCMME; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAPKFFDCFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBAPKFFDCFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBAPKFFDCFM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
