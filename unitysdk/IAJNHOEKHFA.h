#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IAJNHOEKHFA_BECOBPABOPI_OFFSET UNITYSDK_OFFSET(0x15BEFE60)
#define IAJNHOEKHFA_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x15BEFD00)
#define IAJNHOEKHFA_NPPCCDPCIIM_OFFSET UNITYSDK_OFFSET(0x15BEFE70)
#define IAJNHOEKHFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BEFC60)
#define IAJNHOEKHFA__CTOR_OFFSET UNITYSDK_OFFSET(0x15BEFDD0)

inline static constexpr unsigned int IAJNHOEKHFA_TypeDefinitionIndex = 46038;

class IAJNHOEKHFA : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* _FPNNBFOGPOM_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJNHOEKHFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAJNHOEKHFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::RectTransform* BECOBPABOPI()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJNHOEKHFA_BECOBPABOPI_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJNHOEKHFA_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void NPPCCDPCIIM(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + IAJNHOEKHFA_NPPCCDPCIIM_OFFSET))(this, EGEGIMGMJHN);
	}
};
