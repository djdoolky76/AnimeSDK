#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIMIDOAKPCB.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/KBFJMCBABIC.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define HLPJLBBKGMD_INGCECKCLDN_OFFSET UNITYSDK_OFFSET(0x1011F330)
#define HLPJLBBKGMD_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x1011F320)
#define HLPJLBBKGMD_NHFDGAPDJBH_OFFSET UNITYSDK_OFFSET(0x1011F400)
#define HLPJLBBKGMD_OEBDGBIKCJJ_OFFSET UNITYSDK_OFFSET(0x1011F4C0)
#define HLPJLBBKGMD_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1011F290)
#define HLPJLBBKGMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1011F2E0)

inline static constexpr unsigned int HLPJLBBKGMD_TypeDefinitionIndex = 85165;

class HLPJLBBKGMD
{
public:
	::System::Action_2<::Foundation::ViewObject::ViewObjectHandle, ::CIMIDOAKPCB>* MMJJGMHIKFP; // 0x28
	::System::Action_2<::Foundation::ViewObject::ViewObjectHandle, ::KBFJMCBABIC>* OCAEOFDOKPE; // 0x30
	::System::Action_3<::Foundation::ViewObject::ViewObjectHandle, ::System::Int32, ::System::Action*>* JAGBLKBBOBN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPJLBBKGMD__CTOR_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPJLBBKGMD_ONDETACH_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPJLBBKGMD_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void INGCECKCLDN(::CIMIDOAKPCB HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::CIMIDOAKPCB))((::PBYTE)hIl2Cpp + HLPJLBBKGMD_INGCECKCLDN_OFFSET))(this, HNOPAJLDCFB);
	}

	::System::Void NHFDGAPDJBH(::System::Int32 HBLGABGIIAC, ::System::Action* DOHBCJHMPKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + HLPJLBBKGMD_NHFDGAPDJBH_OFFSET))(this, HBLGABGIIAC, DOHBCJHMPKB);
	}

	::System::Void OEBDGBIKCJJ(::KBFJMCBABIC HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::KBFJMCBABIC))((::PBYTE)hIl2Cpp + HLPJLBBKGMD_OEBDGBIKCJJ_OFFSET))(this, HNOPAJLDCFB);
	}
};
