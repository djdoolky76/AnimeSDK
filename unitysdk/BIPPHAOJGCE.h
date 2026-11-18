#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define BIPPHAOJGCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169F7410)
#define BIPPHAOJGCE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169F7380)
#define BIPPHAOJGCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169F7210)
#define BIPPHAOJGCE__CTOR_OFFSET UNITYSDK_OFFSET(0x169F7400)

inline static constexpr unsigned int BIPPHAOJGCE_TypeDefinitionIndex = 87931;

class BIPPHAOJGCE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* GHNFGJNKCHO; // 0x18
	::FGCOIBFFCHB* KKIEAHAKFKM; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPPHAOJGCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIPPHAOJGCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIPPHAOJGCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPPHAOJGCE_KGEBDLGBGNM_OFFSET))(this);
	}
};
