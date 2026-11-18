#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FLHJJNGIALN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E6CCE0)
#define FLHJJNGIALN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E6CC10)
#define FLHJJNGIALN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E6CA30)
#define FLHJJNGIALN__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6CCD0)

inline static constexpr unsigned int FLHJJNGIALN_TypeDefinitionIndex = 71180;

class FLHJJNGIALN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* GCEOJJFFDOO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JKDHPEBMIOH; // 0x20
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* FKIIMEJJPBB; // 0x30
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x38
	::UnityEngine::GameObject* OLLEHOJAOGN; // 0x40
	::UnityEngine::Transform* MBKACMJJMBH; // 0x48
	::UnityEngine::Transform* OOENDNEIFDO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHJJNGIALN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLHJJNGIALN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHJJNGIALN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLHJJNGIALN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
