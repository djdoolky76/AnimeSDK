#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define AHKACBPGMFL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1647BB50)
#define AHKACBPGMFL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1647BA40)
#define AHKACBPGMFL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1647B860)
#define AHKACBPGMFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1647BB40)

inline static constexpr unsigned int AHKACBPGMFL_TypeDefinitionIndex = 69660;

class AHKACBPGMFL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PAELFFLGLGD; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* NPCIPCPJEMF; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x30
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x38
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKACBPGMFL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHKACBPGMFL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHKACBPGMFL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKACBPGMFL_KGEBDLGBGNM_OFFSET))(this);
	}
};
