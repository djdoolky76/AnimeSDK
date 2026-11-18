#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define BKKKEHNMOHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x113EEEE0)
#define BKKKEHNMOHH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x113EEDF0)
#define BKKKEHNMOHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x113EEB80)
#define BKKKEHNMOHH__CTOR_OFFSET UNITYSDK_OFFSET(0x113EEED0)

inline static constexpr unsigned int BKKKEHNMOHH_TypeDefinitionIndex = 71141;

class BKKKEHNMOHH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DKHEGNFOPKA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GJHMOHDIJOC; // 0x20
	::MoleMole::NotificationBadge* LLFCKCPGLKG; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x30
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HFILCGNGJBK; // 0x48
	::FGCOIBFFCHB* MOEIJFDDGAO; // 0x50
	::UnityEngine::Transform* IOAAHPKLJMO; // 0x58
	::MoleMole::NotificationBadge* GMABNNKNIIF; // 0x60
	::UnityEngine::Transform* FOGDDMCKIMH; // 0x68
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x70
	::UnityEngine::Transform* OEGGFAEBMGM; // 0x78
	::UnityEngine::Transform* GJLMPCMDOGD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKKEHNMOHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKKKEHNMOHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKKKEHNMOHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKKEHNMOHH_KGEBDLGBGNM_OFFSET))(this);
	}
};
