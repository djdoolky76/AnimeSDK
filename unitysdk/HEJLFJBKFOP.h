#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define HEJLFJBKFOP_BENPOBBMANI_OFFSET UNITYSDK_OFFSET(0x15DA3480)
#define HEJLFJBKFOP_CEODDHGAAAM_OFFSET UNITYSDK_OFFSET(0x15DA3450)
#define HEJLFJBKFOP_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x15DA3470)
#define HEJLFJBKFOP_DCAGAGCHCHI_OFFSET UNITYSDK_OFFSET(0x15DA34C0)
#define HEJLFJBKFOP_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x15DA31B0)
#define HEJLFJBKFOP_FOAOOGGAMOF_OFFSET UNITYSDK_OFFSET(0x15DA3460)
#define HEJLFJBKFOP_IBPDHNBMCGL_OFFSET UNITYSDK_OFFSET(0x15DA34A0)
#define HEJLFJBKFOP_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x15DA3490)
#define HEJLFJBKFOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DA3080)
#define HEJLFJBKFOP_OMGMNCCKGLB_OFFSET UNITYSDK_OFFSET(0x15DA34B0)
#define HEJLFJBKFOP__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA33C0)

inline static constexpr unsigned int HEJLFJBKFOP_TypeDefinitionIndex = 55261;

class HEJLFJBKFOP : public ::IOOIHHOJOPI
{
public:
	::GCIMMDDIFBJ* _OMEAFBLKPMB_k__BackingField; // 0x28
	::GCIMMDDIFBJ* _EPHKCJFFDPG_k__BackingField; // 0x30
	::UnityEngine::GameObject* _OPDFDBDPOJD_k__BackingField; // 0x38
	::UnityEngine::RectTransform* _DEJNOJBAFDE_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJLFJBKFOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::GameObject* CEODDHGAAAM()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_CEODDHGAAAM_OFFSET))(this);
	}

	::System::Void FOAOOGGAMOF(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_FOAOOGGAMOF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_CJBFCLMFDOM_OFFSET))(this);
	}

	::GCIMMDDIFBJ* BENPOBBMANI()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_BENPOBBMANI_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IBPDHNBMCGL(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_IBPDHNBMCGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::GCIMMDDIFBJ* OMGMNCCKGLB()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_OMGMNCCKGLB_OFFSET))(this);
	}

	::System::Void DCAGAGCHCHI(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + HEJLFJBKFOP_DCAGAGCHCHI_OFFSET))(this, EGEGIMGMJHN);
	}
};
