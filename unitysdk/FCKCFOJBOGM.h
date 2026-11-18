#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define FCKCFOJBOGM_BECOBPABOPI_OFFSET UNITYSDK_OFFSET(0x14194BC0)
#define FCKCFOJBOGM_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x14194A50)
#define FCKCFOJBOGM_NPPCCDPCIIM_OFFSET UNITYSDK_OFFSET(0x14194BB0)
#define FCKCFOJBOGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x141949B0)
#define FCKCFOJBOGM__CTOR_OFFSET UNITYSDK_OFFSET(0x14194B20)

inline static constexpr unsigned int FCKCFOJBOGM_TypeDefinitionIndex = 76871;

class FCKCFOJBOGM : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* _FPNNBFOGPOM_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKCFOJBOGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCKCFOJBOGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void NPPCCDPCIIM(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + FCKCFOJBOGM_NPPCCDPCIIM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKCFOJBOGM_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::RectTransform* BECOBPABOPI()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKCFOJBOGM_BECOBPABOPI_OFFSET))(this);
	}
};
