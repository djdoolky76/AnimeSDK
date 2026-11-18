#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
class NHFJJFFCDFM;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class KNLFLMMHALL_1;

#define NMMMGKDODNM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16B92860)
#define NMMMGKDODNM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16B92770)
#define NMMMGKDODNM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B92500)
#define NMMMGKDODNM__CTOR_OFFSET UNITYSDK_OFFSET(0x16B92850)

inline static constexpr unsigned int NMMMGKDODNM_TypeDefinitionIndex = 76807;

class NMMMGKDODNM : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::NHFJJFFCDFM*>* MKGOCIENECI; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::Transform* JABIILAAGIH; // 0x28
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* FBLMLOANCHG; // 0x38
	::FGCOIBFFCHB* BGABHEKMMCL; // 0x40
	::UnityEngine::RectTransform* HMNIHDPPGPD; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x50
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x58
	::UnityEngine::GameObject* IPNKFDAOJJM; // 0x60
	::MoleMole::MonoGamepadTabButtonGroup* PGIBPKEMIPF; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HNODDINBKAH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMMGKDODNM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMMMGKDODNM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMMGKDODNM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMMMGKDODNM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
