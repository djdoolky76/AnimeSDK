#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
class NHFJJFFCDFM;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class KNLFLMMHALL_1;

#define DFAFBJOIMKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x7F6ECA0)
#define DFAFBJOIMKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x7F6EBD0)
#define DFAFBJOIMKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x7F6E9D0)
#define DFAFBJOIMKP__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6EC90)

inline static constexpr unsigned int DFAFBJOIMKP_TypeDefinitionIndex = 41040;

class DFAFBJOIMKP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ODALDIOFMPH; // 0x18
	::UnityEngine::Transform* JABIILAAGIH; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::KNLFLMMHALL_1<::NHFJJFFCDFM*>* MKGOCIENECI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x38
	::MoleMole::MonoGamepadTabButtonGroup* PGIBPKEMIPF; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HNODDINBKAH; // 0x48
	::UnityEngine::RectTransform* HMNIHDPPGPD; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* FBLMLOANCHG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAFBJOIMKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFAFBJOIMKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFAFBJOIMKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFAFBJOIMKP_KGEBDLGBGNM_OFFSET))(this);
	}
};
