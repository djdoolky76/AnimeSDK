#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ANAEJNAOLGP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17DDFC10)
#define ANAEJNAOLGP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17DDFB80)
#define ANAEJNAOLGP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17DDF9B0)
#define ANAEJNAOLGP__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDFC00)

inline static constexpr unsigned int ANAEJNAOLGP_TypeDefinitionIndex = 47160;

class ANAEJNAOLGP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MOEPHLCOLJM; // 0x18
	::UnityEngine::Transform* FLOBOEJNADO; // 0x20
	::UnityEngine::GameObject* BPHNFGCOAAG; // 0x28
	::UnityEngine::Transform* MCHNJLAPLAM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x38
	::FGCOIBFFCHB* NBEPDODKHGH; // 0x40
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAEJNAOLGP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANAEJNAOLGP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAEJNAOLGP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANAEJNAOLGP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
