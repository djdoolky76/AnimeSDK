#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LNIMAGPEAPA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11F24D20)
#define LNIMAGPEAPA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11F24C50)
#define LNIMAGPEAPA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F24A20)
#define LNIMAGPEAPA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F24D10)

inline static constexpr unsigned int LNIMAGPEAPA_TypeDefinitionIndex = 61891;

class LNIMAGPEAPA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FKIIMEJJPBB; // 0x18
	::MoleMole::MonoGamepadModule* EJHNNMBHAPK; // 0x20
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x28
	::UnityEngine::Transform* MBKACMJJMBH; // 0x30
	::UnityEngine::Transform* OOENDNEIFDO; // 0x38
	::UnityEngine::UI::GridLayoutGroup* OCELOHGMPGP; // 0x40
	::MoleMole::MonoGamepadModule* HJIJFOIJPIN; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::UnityEngine::Transform* KEKAEMFHKOA; // 0x58
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x60
	::UnityEngine::UI::Text* GCEOJJFFDOO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIMAGPEAPA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNIMAGPEAPA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNIMAGPEAPA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNIMAGPEAPA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
