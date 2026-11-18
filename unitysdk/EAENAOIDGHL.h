#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define EAENAOIDGHL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E6BFA0)
#define EAENAOIDGHL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E6BE20)
#define EAENAOIDGHL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E6BC00)
#define EAENAOIDGHL__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6BF90)

inline static constexpr unsigned int EAENAOIDGHL_TypeDefinitionIndex = 71087;

class EAENAOIDGHL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x18
	::FGCOIBFFCHB* IDPCANBEFHI; // 0x20
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x28
	::FGCOIBFFCHB* FDOGGANACAP; // 0x30
	::FGCOIBFFCHB* KKMCLPDAJKJ; // 0x38
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x40
	::FGCOIBFFCHB* AFLKMPPNOAH; // 0x48
	::FGCOIBFFCHB* DJKOBDEJNME; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAOIDGHL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAENAOIDGHL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAENAOIDGHL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAENAOIDGHL_KGEBDLGBGNM_OFFSET))(this);
	}
};
