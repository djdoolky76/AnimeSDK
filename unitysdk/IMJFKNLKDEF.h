#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IMJFKNLKDEF_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x13AAD220)
#define IMJFKNLKDEF_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x13AACF90)
#define IMJFKNLKDEF_ICFIOPLOOPB_OFFSET UNITYSDK_OFFSET(0x13AAD1D0)
#define IMJFKNLKDEF_IDHIPCGBJFM_OFFSET UNITYSDK_OFFSET(0x13AAD1E0)
#define IMJFKNLKDEF_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x13AAD210)
#define IMJFKNLKDEF_KNJIKMMJGOK_OFFSET UNITYSDK_OFFSET(0x13AAD200)
#define IMJFKNLKDEF_LGAJNJAIIJC_OFFSET UNITYSDK_OFFSET(0x13AAD1F0)
#define IMJFKNLKDEF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13AACE90)
#define IMJFKNLKDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAD140)

inline static constexpr unsigned int IMJFKNLKDEF_TypeDefinitionIndex = 42239;

class IMJFKNLKDEF : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* _DDLFFONKNJL_k__BackingField; // 0x28
	::UnityEngine::RectTransform* _DEJNOJBAFDE_k__BackingField; // 0x30
	::GCIMMDDIFBJ* _IHHILBMPLPC_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFKNLKDEF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IMJFKNLKDEF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::GCIMMDDIFBJ* ICFIOPLOOPB()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFKNLKDEF_ICFIOPLOOPB_OFFSET))(this);
	}

	::UnityEngine::RectTransform* IDHIPCGBJFM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFKNLKDEF_IDHIPCGBJFM_OFFSET))(this);
	}

	::System::Void LGAJNJAIIJC(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + IMJFKNLKDEF_LGAJNJAIIJC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KNJIKMMJGOK(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + IMJFKNLKDEF_KNJIKMMJGOK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + IMJFKNLKDEF_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFKNLKDEF_EFKGNFCEENK_OFFSET))(this);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJFKNLKDEF_CJBFCLMFDOM_OFFSET))(this);
	}
};
