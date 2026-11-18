#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CDNOIBHDNME_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x16A12E20)
#define CDNOIBHDNME_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x16A12CC0)
#define CDNOIBHDNME_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x16A12E30)
#define CDNOIBHDNME_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A12C20)
#define CDNOIBHDNME__CTOR_OFFSET UNITYSDK_OFFSET(0x16A12D90)

inline static constexpr unsigned int CDNOIBHDNME_TypeDefinitionIndex = 47241;

class CDNOIBHDNME : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* _DEJNOJBAFDE_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNOIBHDNME__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDNOIBHDNME_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNOIBHDNME_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNOIBHDNME_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CDNOIBHDNME_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}
};
