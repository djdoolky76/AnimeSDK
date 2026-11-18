#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define NLCCBGNHGHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F87810)
#define NLCCBGNHGHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F87740)
#define NLCCBGNHGHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F87590)
#define NLCCBGNHGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x11F87800)

inline static constexpr unsigned int NLCCBGNHGHK_TypeDefinitionIndex = 69550;

class NLCCBGNHGHK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x20
	::UnityEngine::Transform* EPHJPADJPML; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCCBGNHGHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLCCBGNHGHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NLCCBGNHGHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCCBGNHGHK_KGEBDLGBGNM_OFFSET))(this);
	}
};
