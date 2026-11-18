#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGNECAGPNE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHHKNFMCPKD.h"
#include "unitysdk/PDHFLOJFIEJ.h"

namespace UnityEngine { class Transform; }

#define PKBPBNOLHKJ_BFPAEFMFLCH_OFFSET UNITYSDK_OFFSET(0x1A7F7A00)
#define PKBPBNOLHKJ_HAMENMCLPIK_OFFSET UNITYSDK_OFFSET(0x1A7F78C0)
#define PKBPBNOLHKJ_LODCHKOFMFM_OFFSET UNITYSDK_OFFSET(0x1A7F7CB0)
#define PKBPBNOLHKJ_MKAGIOIFAKJ_OFFSET UNITYSDK_OFFSET(0x1A7F7960)
#define PKBPBNOLHKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F78B0)

inline static constexpr unsigned int PKBPBNOLHKJ_TypeDefinitionIndex = 86081;

class PKBPBNOLHKJ : public ::System::Object
{
public:
	// static const ::System::Single LFIBIBLHHBL; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBPBNOLHKJ__CTOR_OFFSET))(this);
	}

	static ::System::Boolean HAMENMCLPIK(::PDHFLOJFIEJ IPMMCGDMODG, ::PDHFLOJFIEJ GGDJGOLJAHC)
	{
		return ((::System::Boolean(*)(::PDHFLOJFIEJ, ::PDHFLOJFIEJ))((::PBYTE)hIl2Cpp + PKBPBNOLHKJ_HAMENMCLPIK_OFFSET))(IPMMCGDMODG, GGDJGOLJAHC);
	}

	static ::System::Single MKAGIOIFAKJ(::System::Single MFKLPCHGAHH, ::System::Single DNICKEAJMNP, ::System::Single CBMCLNNKBCE, ::System::Single JEKACPMPOEE)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PKBPBNOLHKJ_MKAGIOIFAKJ_OFFSET))(MFKLPCHGAHH, DNICKEAJMNP, CBMCLNNKBCE, JEKACPMPOEE);
	}

	static ::System::Boolean BFPAEFMFLCH(::PDHFLOJFIEJ KHGFAKJKDGG, ::PDHFLOJFIEJ HODAIDNDKHD, ::System::Int32 ABHBKFJKINO, ::HNGNECAGPNE LHHCBFCOFEI, ::NHHKNFMCPKD& CMLFALFJONB)
	{
		return ((::System::Boolean(*)(::PDHFLOJFIEJ, ::PDHFLOJFIEJ, ::System::Int32, ::HNGNECAGPNE, ::NHHKNFMCPKD&))((::PBYTE)hIl2Cpp + PKBPBNOLHKJ_BFPAEFMFLCH_OFFSET))(KHGFAKJKDGG, HODAIDNDKHD, ABHBKFJKINO, LHHCBFCOFEI, CMLFALFJONB);
	}

	static ::System::Boolean LODCHKOFMFM(::UnityEngine::Transform* GKBJOPJKCLB, ::PDHFLOJFIEJ& GOFCNJELMHH)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::PDHFLOJFIEJ&))((::PBYTE)hIl2Cpp + PKBPBNOLHKJ_LODCHKOFMFM_OFFSET))(GKBJOPJKCLB, GOFCNJELMHH);
	}
};
