#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEPBLOAFJLA.h"

class OCIOACLLGEB;
class OEPBLOAFJLA_MOCKLCJBPOK;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MJMLCKMENDB_CABJPCPILIE_OFFSET UNITYSDK_OFFSET(0x1749E280)
#define MJMLCKMENDB_EELCNJLFMOM_OFFSET UNITYSDK_OFFSET(0x1749D5D0)
#define MJMLCKMENDB_FHOBDENHKNM_OFFSET UNITYSDK_OFFSET(0x1749E250)
#define MJMLCKMENDB_GOHGJBINLJI_OFFSET UNITYSDK_OFFSET(0x1749DCD0)
#define MJMLCKMENDB_HFCGNPBIHFL_OFFSET UNITYSDK_OFFSET(0x1749E000)
#define MJMLCKMENDB_HFNOGAPPPAL_OFFSET UNITYSDK_OFFSET(0x1749DFF0)
#define MJMLCKMENDB_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x1749D540)
#define MJMLCKMENDB_JIDFKNBJMCA_OFFSET UNITYSDK_OFFSET(0x1749E260)
#define MJMLCKMENDB_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x1749E270)
#define MJMLCKMENDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1749D3D0)

inline static constexpr unsigned int MJMLCKMENDB_TypeDefinitionIndex = 43558;

class MJMLCKMENDB : public ::OEPBLOAFJLA
{
public:
	::UnityEngine::UI::Extension::UIButtonBase* LINMCPEHNPK; // 0x40
	::UnityEngine::Events::UnityAction* FBEBEHNGDPG; // 0x48
	::OEPBLOAFJLA_MOCKLCJBPOK* GAGDGIGJNKM; // 0x50
	::System::Boolean BOIONCGCHEL; // 0x58
	::System::Boolean LFDNJIDIMDK; // 0x59

	::System::Void _ctor(::UnityEngine::GameObject* HODAIDNDKHD, ::UnityEngine::UI::Extension::UIButtonBase* BJCIGIPMFCL, ::OCIOACLLGEB* HNOPAJLDCFB, ::UnityEngine::Events::UnityAction* BFOMBFMONJG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::UI::Extension::UIButtonBase*, ::OCIOACLLGEB*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MJMLCKMENDB__CTOR_OFFSET))(this, HODAIDNDKHD, BJCIGIPMFCL, HNOPAJLDCFB, BFOMBFMONJG);
	}

	::System::Void IAFHBCHLBME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB_IAFHBCHLBME_OFFSET))(this);
	}

	::System::Void GOHGJBINLJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB_GOHGJBINLJI_OFFSET))(this);
	}

	::System::Boolean HFNOGAPPPAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB_HFNOGAPPPAL_OFFSET))(this);
	}

	::System::Void HFCGNPBIHFL(::System::Boolean NPCCGHNEADK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJMLCKMENDB_HFCGNPBIHFL_OFFSET))(this, NPCCGHNEADK);
	}

	::System::Void FHOBDENHKNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB_FHOBDENHKNM_OFFSET))(this);
	}

	::System::Boolean JIDFKNBJMCA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB_JIDFKNBJMCA_OFFSET))(this);
	}

	::System::Void NLLNNHIMGDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB_NLLNNHIMGDM_OFFSET))(this);
	}

	::System::Boolean CABJPCPILIE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB_CABJPCPILIE_OFFSET))(this);
	}

	::System::Void EELCNJLFMOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJMLCKMENDB_EELCNJLFMOM_OFFSET))(this);
	}
};
