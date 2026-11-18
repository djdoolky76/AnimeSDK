#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class PathGuide; }

#define OCJLDEGJMEI_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x13A4AF40)
#define OCJLDEGJMEI_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x13A4ADD0)
#define OCJLDEGJMEI_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x13A4AF30)
#define OCJLDEGJMEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A4AD30)
#define OCJLDEGJMEI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4AEA0)

inline static constexpr unsigned int OCJLDEGJMEI_TypeDefinitionIndex = 80446;

class OCJLDEGJMEI : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::PathGuide* _DEJNOJBAFDE_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJLDEGJMEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OCJLDEGJMEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::UI::Extension::PathGuide* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*))((::PBYTE)hIl2Cpp + OCJLDEGJMEI_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::PathGuide* CJBFCLMFDOM()
	{
		return ((::UnityEngine::UI::Extension::PathGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJLDEGJMEI_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJLDEGJMEI_EFKGNFCEENK_OFFSET))(this);
	}
};
