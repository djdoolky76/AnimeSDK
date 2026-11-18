#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUILoopText;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define BIELJDHMEMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1867C9C0)
#define BIELJDHMEMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1867C8F0)
#define BIELJDHMEMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1867C6F0)
#define BIELJDHMEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1867C9B0)

inline static constexpr unsigned int BIELJDHMEMA_TypeDefinitionIndex = 48395;

class BIELJDHMEMA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* CNDCHJDEFMK; // 0x18
	::UnityEngine::UI::Text* ELPMOBIIFGJ; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::Transform* AIBOHAIMPOJ; // 0x30
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x38
	::UnityEngine::UI::Text* IGILLGCIJPE; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x50
	::MonoUILoopText* GDKEPNBKHJJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIELJDHMEMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIELJDHMEMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIELJDHMEMA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIELJDHMEMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
