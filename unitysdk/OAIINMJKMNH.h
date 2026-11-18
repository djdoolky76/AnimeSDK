#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAIINMJKMNH_DODLOJNOIFL.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI { class Text; }

#define OAIINMJKMNH_DPNLLKMJMMB_OFFSET UNITYSDK_OFFSET(0x811230)
#define OAIINMJKMNH_GHEIKBMCBCE_OFFSET UNITYSDK_OFFSET(0x8111D0)
#define OAIINMJKMNH_IKBGMGEEFLP_OFFSET UNITYSDK_OFFSET(0x8111E0)
#define OAIINMJKMNH_JEBMFJAFNIC_OFFSET UNITYSDK_OFFSET(0x811180)
#define OAIINMJKMNH_NOJMBEHHHFN_OFFSET UNITYSDK_OFFSET(0x811260)
#define OAIINMJKMNH_ODKGAHDFMAP_OFFSET UNITYSDK_OFFSET(0x811250)
#define OAIINMJKMNH_ODNPMLLGJJE_OFFSET UNITYSDK_OFFSET(0x811130)
#define OAIINMJKMNH_PEAHIIPEKKO_OFFSET UNITYSDK_OFFSET(0x811240)

inline static constexpr unsigned int OAIINMJKMNH_TypeDefinitionIndex = 85060;

struct alignas(4) OAIINMJKMNH
{
	::OAIINMJKMNH_DODLOJNOIFL DNHCGNAAOJO; // 0x10

	::System::Boolean ODNPMLLGJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIINMJKMNH_ODNPMLLGJJE_OFFSET))(this);
	}

	::System::Boolean JEBMFJAFNIC(::OAIINMJKMNH_DODLOJNOIFL FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::PVOID, ::OAIINMJKMNH_DODLOJNOIFL))((::PBYTE)hIl2Cpp + OAIINMJKMNH_JEBMFJAFNIC_OFFSET))(this, FCPCLIJNDLA);
	}

	::System::Void GHEIKBMCBCE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAIINMJKMNH_GHEIKBMCBCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IKBGMGEEFLP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAIINMJKMNH_IKBGMGEEFLP_OFFSET))(this);
	}

	::System::Void DPNLLKMJMMB(::UnityEngine::UI::Text* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + OAIINMJKMNH_DPNLLKMJMMB_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void PEAHIIPEKKO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAIINMJKMNH_PEAHIIPEKKO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ODKGAHDFMAP(::UnityEngine::UI::Text* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + OAIINMJKMNH_ODKGAHDFMAP_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void NOJMBEHHHFN(::OAIINMJKMNH_DODLOJNOIFL FCPCLIJNDLA, ::System::Boolean GEEKODJDNLG)
	{
		return ((::System::Void(*)(::PVOID, ::OAIINMJKMNH_DODLOJNOIFL, ::System::Boolean))((::PBYTE)hIl2Cpp + OAIINMJKMNH_NOJMBEHHHFN_OFFSET))(this, FCPCLIJNDLA, GEEKODJDNLG);
	}
};
