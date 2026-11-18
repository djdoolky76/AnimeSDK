#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class PopText;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ICHFHEDPNLB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A396ED0)
#define ICHFHEDPNLB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A396DB0)
#define ICHFHEDPNLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A396EC0)

inline static constexpr unsigned int ICHFHEDPNLB_TypeDefinitionIndex = 77552;

class ICHFHEDPNLB : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x20
	::PopText* HJMOFMLMAOE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHFHEDPNLB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICHFHEDPNLB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICHFHEDPNLB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
