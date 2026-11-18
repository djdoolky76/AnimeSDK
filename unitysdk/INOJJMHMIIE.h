#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define INOJJMHMIIE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A38D30)
#define INOJJMHMIIE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A38C60)
#define INOJJMHMIIE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A38A90)
#define INOJJMHMIIE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A38D20)

inline static constexpr unsigned int INOJJMHMIIE_TypeDefinitionIndex = 68715;

class INOJJMHMIIE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HGJHNHBMJAD; // 0x18
	::UnityEngine::GameObject* OCJOCLEDABL; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::MoleMole::MonoGamepadCustomList* KNMKIJDPJLO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ILMFAANIKPE; // 0x38
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x40
	::UnityEngine::Transform* AIBOHAIMPOJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INOJJMHMIIE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INOJJMHMIIE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INOJJMHMIIE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INOJJMHMIIE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
