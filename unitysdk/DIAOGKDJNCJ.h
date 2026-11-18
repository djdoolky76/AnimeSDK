#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define DIAOGKDJNCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1E1F80)
#define DIAOGKDJNCJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1E1EF0)
#define DIAOGKDJNCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1E1D40)
#define DIAOGKDJNCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E1F70)

inline static constexpr unsigned int DIAOGKDJNCJ_TypeDefinitionIndex = 58312;

class DIAOGKDJNCJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x28
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x30
	::UnityEngine::UI::Extension::UITabButton* HJIHNMPIEJL; // 0x38
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAOGKDJNCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIAOGKDJNCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIAOGKDJNCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAOGKDJNCJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
