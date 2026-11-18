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

#define AMDEDMIAPEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1266AB00)
#define AMDEDMIAPEO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1266A9C0)
#define AMDEDMIAPEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1266A760)
#define AMDEDMIAPEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1266AAF0)

inline static constexpr unsigned int AMDEDMIAPEO_TypeDefinitionIndex = 38301;

class AMDEDMIAPEO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PGGOKPPAIJA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GCLDBJHCCML; // 0x20
	::UnityEngine::Transform* ODALDIOFMPH; // 0x28
	::UnityEngine::GameObject* ANDFIBAKEAE; // 0x30
	::UnityEngine::UI::Text* DBDENFPPKMO; // 0x38
	::LGINJIKKBJA* CHAMBKDGKFB; // 0x40
	::UnityEngine::Transform* KHOJKFHFKIJ; // 0x48
	::UnityEngine::Transform* PNKBOLJOOLM; // 0x50
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x58
	::LGINJIKKBJA* EGKGPAHJGFN; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* IODBDPOLPKA; // 0x68
	::LGINJIKKBJA* KGPBAPEINKN; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDEDMIAPEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AMDEDMIAPEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDEDMIAPEO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AMDEDMIAPEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
