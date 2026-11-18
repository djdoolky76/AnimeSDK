#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CEJMKJEAGFD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1694CC30)
#define CEJMKJEAGFD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1694CB60)
#define CEJMKJEAGFD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1694C9F0)
#define CEJMKJEAGFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1694CC20)

inline static constexpr unsigned int CEJMKJEAGFD_TypeDefinitionIndex = 89784;

class CEJMKJEAGFD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LNGNCEIAING; // 0x18
	::UnityEngine::Animation* AAEEHMPIJPN; // 0x20
	::FGCOIBFFCHB* BDIMEKPNKMG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMKJEAGFD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEJMKJEAGFD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEJMKJEAGFD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMKJEAGFD_KGEBDLGBGNM_OFFSET))(this);
	}
};
