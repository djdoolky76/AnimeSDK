#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LGICAFAEFFD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD42BCC0)
#define LGICAFAEFFD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD42BBB0)
#define LGICAFAEFFD__CTOR_OFFSET UNITYSDK_OFFSET(0xD42BCB0)

inline static constexpr unsigned int LGICAFAEFFD_TypeDefinitionIndex = 61045;

class LGICAFAEFFD : public ::GIBMJLOJLKD
{
public:
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BMGLEAINAEK; // 0x20
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGICAFAEFFD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGICAFAEFFD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LGICAFAEFFD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
