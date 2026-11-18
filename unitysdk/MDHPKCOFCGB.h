#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/MNAGAGOHIGH.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CNJIOCGANBE;
class IOOIHHOJOPI;
namespace MoleMole { class UITwoDMapElement_Data_StreetIcon; }
namespace System { class String; }
namespace UnityEngine::EventSystems { class PointerEventData; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class JIOLFCAGOFH_1;

#define MDHPKCOFCGB_ADKCHGEBACA_OFFSET UNITYSDK_OFFSET(0x13D1EFB0)
#define MDHPKCOFCGB_AEMDEJMKHGP_OFFSET UNITYSDK_OFFSET(0x13D1EA20)
#define MDHPKCOFCGB_AGJLAHEJOHP_OFFSET UNITYSDK_OFFSET(0x13D1DF10)
#define MDHPKCOFCGB_BBCMNGGFBDC_OFFSET UNITYSDK_OFFSET(0x13D1EAB0)
#define MDHPKCOFCGB_BMMHPMEBGFC_OFFSET UNITYSDK_OFFSET(0x13D1D490)
#define MDHPKCOFCGB_BOCHMLHKOOL_OFFSET UNITYSDK_OFFSET(0x13D1EC00)
#define MDHPKCOFCGB_CELCBBDLNIH_OFFSET UNITYSDK_OFFSET(0x13D1ED70)
#define MDHPKCOFCGB_CGBNFNMGJBG_OFFSET UNITYSDK_OFFSET(0x13D1DA20)
#define MDHPKCOFCGB_EAECHFLCKFH_OFFSET UNITYSDK_OFFSET(0x13D1DD10)
#define MDHPKCOFCGB_EBFKBCKGNMB_OFFSET UNITYSDK_OFFSET(0x13D1E970)
#define MDHPKCOFCGB_EGFOMCMINPL_OFFSET UNITYSDK_OFFSET(0x13D1E640)
#define MDHPKCOFCGB_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x13D1B260)
#define MDHPKCOFCGB_EMIOCGJCEDD_OFFSET UNITYSDK_OFFSET(0x13D1D890)
#define MDHPKCOFCGB_EPNINJOEFBL_OFFSET UNITYSDK_OFFSET(0x13D1DDF0)
#define MDHPKCOFCGB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x13D1C2F0)
#define MDHPKCOFCGB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x13D1F030)
#define MDHPKCOFCGB_IOIAJNLPDNE_OFFSET UNITYSDK_OFFSET(0x13D1DBE0)
#define MDHPKCOFCGB_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x13D1E5B0)
#define MDHPKCOFCGB_LGNBMNLHHPF_OFFSET UNITYSDK_OFFSET(0x13D1EF30)
#define MDHPKCOFCGB_MOGNDGGECKC_OFFSET UNITYSDK_OFFSET(0x13D1DFF0)
#define MDHPKCOFCGB_NAEAANEEPND_OFFSET UNITYSDK_OFFSET(0x13D1D080)
#define MDHPKCOFCGB_NEOHNFOOFEJ_OFFSET UNITYSDK_OFFSET(0x13D1D940)
#define MDHPKCOFCGB_OACAJPAELGP_OFFSET UNITYSDK_OFFSET(0x13D1DC60)
#define MDHPKCOFCGB_ONDRAG_OFFSET UNITYSDK_OFFSET(0x13D1C880)
#define MDHPKCOFCGB_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x13D1C930)
#define MDHPKCOFCGB_PAEBCDCAHIA_OFFSET UNITYSDK_OFFSET(0x13D1DE60)
#define MDHPKCOFCGB_PGABLNFEGMP_OFFSET UNITYSDK_OFFSET(0x13D1CA50)
#define MDHPKCOFCGB_POMEOGCAPMG_OFFSET UNITYSDK_OFFSET(0x13D1E280)
#define MDHPKCOFCGB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1C9E0)

inline static constexpr unsigned int MDHPKCOFCGB_TypeDefinitionIndex = 75867;

class MDHPKCOFCGB : public ::PBJOCICFNGK
{
public:
	::JIOLFCAGOFH_1<::System::Boolean>* GNHNDLJJNGF; // 0x50
	::JIOLFCAGOFH_1<::CNJIOCGANBE*>* EFFAONJBCOG; // 0x58
	::DBMAHDDGMHM_1<::MoleMole::UITwoDMapElement_Data_StreetIcon*>* DAAAEJDBNFI; // 0x60
	::DBMAHDDGMHM_1<::System::Boolean>* NFPKDGAIKAO; // 0x68
	::System::Int32 ODIPAEHKDFJ; // 0x70
	::System::Int32 IDIGNOMODDG; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* LAEKNEGPLBJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_ONDRAG_OFFSET))(this, LAEKNEGPLBJ);
	}

	::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* LAEKNEGPLBJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_ONSCROLL_OFFSET))(this, LAEKNEGPLBJ);
	}

	::Foundation::AssetPath PGABLNFEGMP()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_PGABLNFEGMP_OFFSET))(this);
	}

	::System::Void NAEAANEEPND(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_NAEAANEEPND_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Boolean BMMHPMEBGFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_BMMHPMEBGFC_OFFSET))(this);
	}

	::System::Boolean EMIOCGJCEDD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_EMIOCGJCEDD_OFFSET))(this);
	}

	::System::Boolean NEOHNFOOFEJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_NEOHNFOOFEJ_OFFSET))(this);
	}

	::System::String* CGBNFNMGJBG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_CGBNFNMGJBG_OFFSET))(this);
	}

	::System::Void IOIAJNLPDNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_IOIAJNLPDNE_OFFSET))(this);
	}

	::System::Void OACAJPAELGP(::UnityEngine::EventSystems::PointerEventData* LAEKNEGPLBJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_OACAJPAELGP_OFFSET))(this, LAEKNEGPLBJ);
	}

	::System::Boolean EAECHFLCKFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_EAECHFLCKFH_OFFSET))(this);
	}

	::System::Void EPNINJOEFBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_EPNINJOEFBL_OFFSET))(this);
	}

	::System::Void PAEBCDCAHIA(::UnityEngine::EventSystems::PointerEventData* LAEKNEGPLBJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_PAEBCDCAHIA_OFFSET))(this, LAEKNEGPLBJ);
	}

	::System::Boolean AGJLAHEJOHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_AGJLAHEJOHP_OFFSET))(this);
	}

	::UnityEngine::Vector2 MOGNDGGECKC()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_MOGNDGGECKC_OFFSET))(this);
	}

	::System::Boolean POMEOGCAPMG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_POMEOGCAPMG_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::MoleMole::UITwoDMapElement_Data_StreetIcon* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data_StreetIcon*))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean EGFOMCMINPL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_EGFOMCMINPL_OFFSET))(this);
	}

	::System::Boolean EBFKBCKGNMB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_EBFKBCKGNMB_OFFSET))(this);
	}

	::System::String* AEMDEJMKHGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_AEMDEJMKHGP_OFFSET))(this);
	}

	::System::Boolean BBCMNGGFBDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_BBCMNGGFBDC_OFFSET))(this);
	}

	::CNJIOCGANBE* BOCHMLHKOOL()
	{
		return ((::CNJIOCGANBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_BOCHMLHKOOL_OFFSET))(this);
	}

	::System::String* CELCBBDLNIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_CELCBBDLNIH_OFFSET))(this);
	}

	::System::Void LGNBMNLHHPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_LGNBMNLHHPF_OFFSET))(this);
	}

	::System::Boolean ADKCHGEBACA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_ADKCHGEBACA_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHPKCOFCGB_IFHNMAGGFAE_OFFSET))(this);
	}
};
