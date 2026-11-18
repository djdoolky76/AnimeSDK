#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define OIHDMGBANBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF195660)
#define OIHDMGBANBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF195590)
#define OIHDMGBANBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF195330)
#define OIHDMGBANBP__CTOR_OFFSET UNITYSDK_OFFSET(0xF195650)

inline static constexpr unsigned int OIHDMGBANBP_TypeDefinitionIndex = 81650;

class OIHDMGBANBP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* CABGCJLGGNA; // 0x18
	::UnityEngine::Transform* IHGNFKCAJBE; // 0x20
	::UnityEngine::UI::Text* DOHBFOPMFHN; // 0x28
	::FGCOIBFFCHB* BBDLHFFHFJA; // 0x30
	::UnityEngine::GameObject* ILCHICALAHE; // 0x38
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0x40
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x48
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x50
	::UnityEngine::Transform* ODALDIOFMPH; // 0x58
	::MoleMole::MonoGamepadModule* PJLLCFNNMBB; // 0x60
	::MoleMole::MonoGamepadModule* NCABHEDDBLC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHDMGBANBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIHDMGBANBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHDMGBANBP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OIHDMGBANBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
