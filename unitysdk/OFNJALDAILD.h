#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define OFNJALDAILD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1292CFB0)
#define OFNJALDAILD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1292CE90)
#define OFNJALDAILD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1292CC90)
#define OFNJALDAILD__CTOR_OFFSET UNITYSDK_OFFSET(0x1292CFA0)

inline static constexpr unsigned int OFNJALDAILD_TypeDefinitionIndex = 41785;

class OFNJALDAILD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IDIKHBOADLP; // 0x18
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x20
	::FGCOIBFFCHB* CKNHJOAGAJP; // 0x28
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x30
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x38
	::FGCOIBFFCHB* EJCOFFCCNFP; // 0x40
	::FGCOIBFFCHB* JHCBDFNDLIL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNJALDAILD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFNJALDAILD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFNJALDAILD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNJALDAILD_KGEBDLGBGNM_OFFSET))(this);
	}
};
