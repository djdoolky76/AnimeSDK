#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }

#define KIDLMFFKPCO_DMLDPADNALP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1765D400)
#define KIDLMFFKPCO_DMLDPADNALP_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x1765D220)
#define KIDLMFFKPCO_DMLDPADNALP_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1765C8E0)
#define KIDLMFFKPCO_DMLDPADNALP_NBPGAMGHIEO_OFFSET UNITYSDK_OFFSET(0x1765CDD0)
#define KIDLMFFKPCO_DMLDPADNALP_NIMNKPMHKMO_OFFSET UNITYSDK_OFFSET(0x1765D110)
#define KIDLMFFKPCO_DMLDPADNALP_NNHNLHIOAIJ_OFFSET UNITYSDK_OFFSET(0x1765D080)
#define KIDLMFFKPCO_DMLDPADNALP_NPMLCEBKFJM_1_OFFSET UNITYSDK_OFFSET(0x1765D470)
#define KIDLMFFKPCO_DMLDPADNALP_NPMLCEBKFJM_OFFSET UNITYSDK_OFFSET(0x1765D190)
#define KIDLMFFKPCO_DMLDPADNALP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1765D2C0)
#define KIDLMFFKPCO_DMLDPADNALP_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1765D260)
#define KIDLMFFKPCO_DMLDPADNALP__CTOR_OFFSET UNITYSDK_OFFSET(0x1765C8D0)

inline static constexpr unsigned int KIDLMFFKPCO_DMLDPADNALP_TypeDefinitionIndex = 65722;

class KIDLMFFKPCO_DMLDPADNALP : public ::System::Object
{
public:
	::System::String* ACADDBMJNGG; // 0x10
	::System::Action_1<::System::Object*>* MGAKJHJAGJI; // 0x18
	::UnityEngine::Animation* AOKJEGNBALI; // 0x20
	::System::Single IIIPBDJMPHP; // 0x28
	::System::Boolean NPFIONPDFED; // 0x2C
	::System::Boolean NHFFPNMKMOJ; // 0x2D
	::System::Boolean GIAEPMKCBIB; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP__CTOR_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG(::System::String* HMJBMNAAGKB, ::System::Single IAKPGBCAAKM, ::System::Boolean JJHNJIIIGFN, ::System::Single FNIOPKPHDEH, ::System::Boolean GKNEFHBANPE, ::System::Action_1<::System::Object*>* JLMLJIMBKKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_LCJEELHBNHG_OFFSET))(this, HMJBMNAAGKB, IAKPGBCAAKM, JJHNJIIIGFN, FNIOPKPHDEH, GKNEFHBANPE, JLMLJIMBKKP);
	}

	::System::Boolean NBPGAMGHIEO(::System::String* HMJBMNAAGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_NBPGAMGHIEO_OFFSET))(this, HMJBMNAAGKB);
	}

	::System::Single NNHNLHIOAIJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_NNHNLHIOAIJ_OFFSET))(this);
	}

	::System::Void NIMNKPMHKMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_NIMNKPMHKMO_OFFSET))(this);
	}

	::System::Boolean NPMLCEBKFJM(::System::String* HMJBMNAAGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_NPMLCEBKFJM_OFFSET))(this, HMJBMNAAGKB);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Animation* BKOLCDPOJAL, ::System::Single IIIPBDJMPHP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_BBOMJDBNHIC_OFFSET))(this, BKOLCDPOJAL, IIIPBDJMPHP);
	}

	::System::Boolean NPMLCEBKFJM_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DMLDPADNALP_NPMLCEBKFJM_1_OFFSET))(this);
	}
};
