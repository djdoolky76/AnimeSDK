#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }

#define JFMOFACIMAN_NCAAJAPCNFL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13ACD3B0)
#define JFMOFACIMAN_NCAAJAPCNFL_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x13ACD370)
#define JFMOFACIMAN_NCAAJAPCNFL_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x13ACD480)
#define JFMOFACIMAN_NCAAJAPCNFL_NBPGAMGHIEO_OFFSET UNITYSDK_OFFSET(0x13ACDA60)
#define JFMOFACIMAN_NCAAJAPCNFL_NIMNKPMHKMO_OFFSET UNITYSDK_OFFSET(0x13ACD2F0)
#define JFMOFACIMAN_NCAAJAPCNFL_NNHNLHIOAIJ_OFFSET UNITYSDK_OFFSET(0x13ACD9D0)
#define JFMOFACIMAN_NCAAJAPCNFL_NPMLCEBKFJM_1_OFFSET UNITYSDK_OFFSET(0x13ACDD10)
#define JFMOFACIMAN_NCAAJAPCNFL_NPMLCEBKFJM_OFFSET UNITYSDK_OFFSET(0x13ACD970)
#define JFMOFACIMAN_NCAAJAPCNFL_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13ACD1B0)
#define JFMOFACIMAN_NCAAJAPCNFL_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x13ACD420)
#define JFMOFACIMAN_NCAAJAPCNFL__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACD1A0)

inline static constexpr unsigned int JFMOFACIMAN_NCAAJAPCNFL_TypeDefinitionIndex = 92707;

class JFMOFACIMAN_NCAAJAPCNFL : public ::System::Object
{
public:
	::UnityEngine::Animation* AOKJEGNBALI; // 0x10
	::System::Action_1<::System::Object*>* MGAKJHJAGJI; // 0x18
	::System::String* ACADDBMJNGG; // 0x20
	::System::Single IIIPBDJMPHP; // 0x28
	::System::Boolean NHFFPNMKMOJ; // 0x2C
	::System::Boolean GIAEPMKCBIB; // 0x2D
	::System::Boolean NPFIONPDFED; // 0x2E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Animation* BKOLCDPOJAL, ::System::Single IIIPBDJMPHP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::Single))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_BBOMJDBNHIC_OFFSET))(this, BKOLCDPOJAL, IIIPBDJMPHP);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG(::System::String* HMJBMNAAGKB, ::System::Single IAKPGBCAAKM, ::System::Boolean JJHNJIIIGFN, ::System::Single FNIOPKPHDEH, ::System::Boolean GKNEFHBANPE, ::System::Action_1<::System::Object*>* JLMLJIMBKKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_LCJEELHBNHG_OFFSET))(this, HMJBMNAAGKB, IAKPGBCAAKM, JJHNJIIIGFN, FNIOPKPHDEH, GKNEFHBANPE, JLMLJIMBKKP);
	}

	::System::Boolean NPMLCEBKFJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_NPMLCEBKFJM_OFFSET))(this);
	}

	::System::Single NNHNLHIOAIJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_NNHNLHIOAIJ_OFFSET))(this);
	}

	::System::Void NIMNKPMHKMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_NIMNKPMHKMO_OFFSET))(this);
	}

	::System::Boolean NBPGAMGHIEO(::System::String* HMJBMNAAGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_NBPGAMGHIEO_OFFSET))(this, HMJBMNAAGKB);
	}

	::System::Boolean NPMLCEBKFJM_1(::System::String* HMJBMNAAGKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JFMOFACIMAN_NCAAJAPCNFL_NPMLCEBKFJM_1_OFFSET))(this, HMJBMNAAGKB);
	}
};
