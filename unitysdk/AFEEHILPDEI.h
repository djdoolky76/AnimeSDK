#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define AFEEHILPDEI_BENPOBBMANI_OFFSET UNITYSDK_OFFSET(0x17CBE100)
#define AFEEHILPDEI_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x17CBE0F0)
#define AFEEHILPDEI_DCAGAGCHCHI_OFFSET UNITYSDK_OFFSET(0x17CBE0B0)
#define AFEEHILPDEI_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x17CBDE70)
#define AFEEHILPDEI_IBPDHNBMCGL_OFFSET UNITYSDK_OFFSET(0x17CBE0D0)
#define AFEEHILPDEI_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x17CBE0E0)
#define AFEEHILPDEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17CBDD50)
#define AFEEHILPDEI_OMGMNCCKGLB_OFFSET UNITYSDK_OFFSET(0x17CBE0C0)
#define AFEEHILPDEI__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBE020)

inline static constexpr unsigned int AFEEHILPDEI_TypeDefinitionIndex = 61715;

class AFEEHILPDEI : public ::IOOIHHOJOPI
{
public:
	::GCIMMDDIFBJ* _OMEAFBLKPMB_k__BackingField; // 0x28
	::UnityEngine::RectTransform* _DEJNOJBAFDE_k__BackingField; // 0x30
	::GCIMMDDIFBJ* _EPHKCJFFDPG_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEEHILPDEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFEEHILPDEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void DCAGAGCHCHI(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + AFEEHILPDEI_DCAGAGCHCHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::GCIMMDDIFBJ* OMGMNCCKGLB()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEEHILPDEI_OMGMNCCKGLB_OFFSET))(this);
	}

	::System::Void IBPDHNBMCGL(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + AFEEHILPDEI_IBPDHNBMCGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + AFEEHILPDEI_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEEHILPDEI_CJBFCLMFDOM_OFFSET))(this);
	}

	::GCIMMDDIFBJ* BENPOBBMANI()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEEHILPDEI_BENPOBBMANI_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEEHILPDEI_EFKGNFCEENK_OFFSET))(this);
	}
};
