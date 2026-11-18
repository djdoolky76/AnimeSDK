#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define JBOCFDAMLEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x153CAD40)
#define JBOCFDAMLEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x153CAC30)
#define JBOCFDAMLEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x153CAA00)
#define JBOCFDAMLEI__CTOR_OFFSET UNITYSDK_OFFSET(0x153CAD30)

inline static constexpr unsigned int JBOCFDAMLEI_TypeDefinitionIndex = 46582;

class JBOCFDAMLEI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x18
	::UnityEngine::GameObject* KDIAABHABAJ; // 0x20
	::UnityEngine::GameObject* EFHLLBEGGMN; // 0x28
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x30
	::MoleMole::MonoGamepadCustomList* OHNFIHAKOBH; // 0x38
	::UnityEngine::GameObject* CINOENLCLIP; // 0x40
	::UnityEngine::Animation* DHCKPIBEKNB; // 0x48
	::UnityEngine::GameObject* OFPFDBCAOKC; // 0x50
	::LGINJIKKBJA* BKDDKDMILCA; // 0x58
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOCFDAMLEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBOCFDAMLEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBOCFDAMLEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOCFDAMLEI_KGEBDLGBGNM_OFFSET))(this);
	}
};
