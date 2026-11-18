#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define LHMMAKLEEHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16370140)
#define LHMMAKLEEHO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16370030)
#define LHMMAKLEEHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1636FDF0)
#define LHMMAKLEEHO__CTOR_OFFSET UNITYSDK_OFFSET(0x16370130)

inline static constexpr unsigned int LHMMAKLEEHO_TypeDefinitionIndex = 65634;

class LHMMAKLEEHO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Extension::UITabButton* GEPGPLLJAED; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30
	::UnityEngine::GameObject* HDAELHOLDCI; // 0x38
	::UnityEngine::Transform* OGJAOLFFOCO; // 0x40
	::FGCOIBFFCHB* KCKPHGDFOBC; // 0x48
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x50
	::UnityEngine::Transform* NFOPBJDOOGA; // 0x58
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x60
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMAKLEEHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHMMAKLEEHO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHMMAKLEEHO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMMAKLEEHO_KGEBDLGBGNM_OFFSET))(this);
	}
};
