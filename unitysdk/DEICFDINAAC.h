#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DEICFDINAAC_BENPOBBMANI_OFFSET UNITYSDK_OFFSET(0x193FC2F0)
#define DEICFDINAAC_CDEOCNFAIBM_OFFSET UNITYSDK_OFFSET(0x193FC320)
#define DEICFDINAAC_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x193FC310)
#define DEICFDINAAC_DCAGAGCHCHI_OFFSET UNITYSDK_OFFSET(0x193FC300)
#define DEICFDINAAC_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x193FBFF0)
#define DEICFDINAAC_IBPDHNBMCGL_OFFSET UNITYSDK_OFFSET(0x193FC340)
#define DEICFDINAAC_IDAGAEHBJCG_OFFSET UNITYSDK_OFFSET(0x193FBE10)
#define DEICFDINAAC_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x193FC360)
#define DEICFDINAAC_KBOCPOEILLF_OFFSET UNITYSDK_OFFSET(0x193FC350)
#define DEICFDINAAC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193FBC10)
#define DEICFDINAAC_OMGMNCCKGLB_OFFSET UNITYSDK_OFFSET(0x193FC330)
#define DEICFDINAAC__CTOR_OFFSET UNITYSDK_OFFSET(0x193FC260)

inline static constexpr unsigned int DEICFDINAAC_TypeDefinitionIndex = 76725;

class DEICFDINAAC : public ::IOOIHHOJOPI
{
public:
	::GCIMMDDIFBJ* _EPHKCJFFDPG_k__BackingField; // 0x28
	::GCIMMDDIFBJ* _OMEAFBLKPMB_k__BackingField; // 0x30
	::UnityEngine::Transform* _AHFLFMEJNFC_k__BackingField; // 0x38
	::UnityEngine::Transform* _DEJNOJBAFDE_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* JJIBODFFIAA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICFDINAAC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEICFDINAAC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::GCIMMDDIFBJ* BENPOBBMANI()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICFDINAAC_BENPOBBMANI_OFFSET))(this);
	}

	::System::Void DCAGAGCHCHI(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + DEICFDINAAC_DCAGAGCHCHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Transform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICFDINAAC_CJBFCLMFDOM_OFFSET))(this);
	}

	::UnityEngine::Transform* CDEOCNFAIBM()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICFDINAAC_CDEOCNFAIBM_OFFSET))(this);
	}

	::GCIMMDDIFBJ* OMGMNCCKGLB()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICFDINAAC_OMGMNCCKGLB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* IDAGAEHBJCG(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEICFDINAAC_IDAGAEHBJCG_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void IBPDHNBMCGL(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + DEICFDINAAC_IBPDHNBMCGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICFDINAAC_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KBOCPOEILLF(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DEICFDINAAC_KBOCPOEILLF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DEICFDINAAC_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}
};
