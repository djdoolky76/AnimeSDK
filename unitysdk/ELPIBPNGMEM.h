#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define ELPIBPNGMEM_BENPOBBMANI_OFFSET UNITYSDK_OFFSET(0xFE20810)
#define ELPIBPNGMEM_CEODDHGAAAM_OFFSET UNITYSDK_OFFSET(0xFE20800)
#define ELPIBPNGMEM_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0xFE20830)
#define ELPIBPNGMEM_DCAGAGCHCHI_OFFSET UNITYSDK_OFFSET(0xFE20820)
#define ELPIBPNGMEM_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0xFE20550)
#define ELPIBPNGMEM_FOAOOGGAMOF_OFFSET UNITYSDK_OFFSET(0xFE20850)
#define ELPIBPNGMEM_IBPDHNBMCGL_OFFSET UNITYSDK_OFFSET(0xFE20860)
#define ELPIBPNGMEM_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0xFE20840)
#define ELPIBPNGMEM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFE20420)
#define ELPIBPNGMEM_OMGMNCCKGLB_OFFSET UNITYSDK_OFFSET(0xFE207F0)
#define ELPIBPNGMEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFE20760)

inline static constexpr unsigned int ELPIBPNGMEM_TypeDefinitionIndex = 42100;

class ELPIBPNGMEM : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::GameObject* _OPDFDBDPOJD_k__BackingField; // 0x28
	::GCIMMDDIFBJ* _EPHKCJFFDPG_k__BackingField; // 0x30
	::UnityEngine::RectTransform* _DEJNOJBAFDE_k__BackingField; // 0x38
	::GCIMMDDIFBJ* _OMEAFBLKPMB_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPIBPNGMEM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_EFKGNFCEENK_OFFSET))(this);
	}

	::GCIMMDDIFBJ* OMGMNCCKGLB()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_OMGMNCCKGLB_OFFSET))(this);
	}

	::UnityEngine::GameObject* CEODDHGAAAM()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_CEODDHGAAAM_OFFSET))(this);
	}

	::GCIMMDDIFBJ* BENPOBBMANI()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_BENPOBBMANI_OFFSET))(this);
	}

	::System::Void DCAGAGCHCHI(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_DCAGAGCHCHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_CJBFCLMFDOM_OFFSET))(this);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FOAOOGGAMOF(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_FOAOOGGAMOF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IBPDHNBMCGL(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + ELPIBPNGMEM_IBPDHNBMCGL_OFFSET))(this, EGEGIMGMJHN);
	}
};
