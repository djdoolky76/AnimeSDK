#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CPAIJCLMIKG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x193EBDC0)
#define CPAIJCLMIKG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x193EBCC0)
#define CPAIJCLMIKG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193EBAD0)
#define CPAIJCLMIKG__CTOR_OFFSET UNITYSDK_OFFSET(0x193EBDB0)

inline static constexpr unsigned int CPAIJCLMIKG_TypeDefinitionIndex = 79404;

class CPAIJCLMIKG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x20
	::FGCOIBFFCHB* HHMBLFBDBOD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x38
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAIJCLMIKG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CPAIJCLMIKG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CPAIJCLMIKG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAIJCLMIKG_KGEBDLGBGNM_OFFSET))(this);
	}
};
