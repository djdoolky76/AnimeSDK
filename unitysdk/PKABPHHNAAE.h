#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define PKABPHHNAAE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A7F71C0)
#define PKABPHHNAAE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A7F7040)
#define PKABPHHNAAE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A7F6DE0)
#define PKABPHHNAAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F71B0)

inline static constexpr unsigned int PKABPHHNAAE_TypeDefinitionIndex = 81419;

class PKABPHHNAAE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28
	::FGCOIBFFCHB* NDPFKBKABLI; // 0x30
	::FGCOIBFFCHB* EFJEJHPJBNJ; // 0x38
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AHCMFIFALAO; // 0x48
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x50
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x58
	::UnityEngine::RectTransform* EPHJPADJPML; // 0x60
	::FGCOIBFFCHB* IPCOIFBOEPA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKABPHHNAAE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKABPHHNAAE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKABPHHNAAE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PKABPHHNAAE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
