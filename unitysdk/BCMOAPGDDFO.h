#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define BCMOAPGDDFO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14381450)
#define BCMOAPGDDFO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14381310)
#define BCMOAPGDDFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14381110)
#define BCMOAPGDDFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14381440)

inline static constexpr unsigned int BCMOAPGDDFO_TypeDefinitionIndex = 85736;

class BCMOAPGDDFO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CHAMBKDGKFB; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::LGINJIKKBJA* KGPBAPEINKN; // 0x28
	::UnityEngine::UI::Text* DBDENFPPKMO; // 0x30
	::UnityEngine::Transform* PNKBOLJOOLM; // 0x38
	::UnityEngine::GameObject* PGGOKPPAIJA; // 0x40
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x48
	::UnityEngine::Transform* ODALDIOFMPH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOAPGDDFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCMOAPGDDFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCMOAPGDDFO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMOAPGDDFO_KGEBDLGBGNM_OFFSET))(this);
	}
};
