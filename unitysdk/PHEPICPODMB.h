#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/InterpolationMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PHEPICPODMB_ADAJNDGACBL_OFFSET UNITYSDK_OFFSET(0xC242D80)
#define PHEPICPODMB_BLOOPNDBJIM_OFFSET UNITYSDK_OFFSET(0xC242AB0)
#define PHEPICPODMB_CCLFKIMFDAJ_OFFSET UNITYSDK_OFFSET(0xC242990)
#define PHEPICPODMB_CTOR_OFFSET UNITYSDK_OFFSET(0xC243C20)
#define PHEPICPODMB_DFEHEDCGKOJ_OFFSET UNITYSDK_OFFSET(0xC2431E0)
#define PHEPICPODMB_DGGAMLHBBBP_OFFSET UNITYSDK_OFFSET(0xC242830)
#define PHEPICPODMB_DGOAOLIHLNC_OFFSET UNITYSDK_OFFSET(0xC241DA0)
#define PHEPICPODMB_ECCLIGACJHA_OFFSET UNITYSDK_OFFSET(0xC242F90)
#define PHEPICPODMB_EMACCLJFBJE_OFFSET UNITYSDK_OFFSET(0xC242CD0)
#define PHEPICPODMB_FBAAFBEFPBH_OFFSET UNITYSDK_OFFSET(0xC242A20)
#define PHEPICPODMB_FGIAFAHFINI_OFFSET UNITYSDK_OFFSET(0xC2439B0)
#define PHEPICPODMB_GEEIPKDMEBK_OFFSET UNITYSDK_OFFSET(0xC243650)
#define PHEPICPODMB_GEMIHOBKEKM_OFFSET UNITYSDK_OFFSET(0xC243100)
#define PHEPICPODMB_GHMGLEHGACK_OFFSET UNITYSDK_OFFSET(0xC243750)
#define PHEPICPODMB_HBHLAAKPEMI_OFFSET UNITYSDK_OFFSET(0xC242E30)
#define PHEPICPODMB_HGFAEBACFGI_OFFSET UNITYSDK_OFFSET(0xC242EE0)
#define PHEPICPODMB_IDKNNAHJNLN_OFFSET UNITYSDK_OFFSET(0xC243390)
#define PHEPICPODMB_IHBINMAMLDF_OFFSET UNITYSDK_OFFSET(0xC2435A0)
#define PHEPICPODMB_KDJNAMLIEJE_OFFSET UNITYSDK_OFFSET(0xC242790)
#define PHEPICPODMB_KPKMJDOINHD_OFFSET UNITYSDK_OFFSET(0xC242B40)
#define PHEPICPODMB_KPKNLCHNNKH_OFFSET UNITYSDK_OFFSET(0xC2428F0)
#define PHEPICPODMB_LEHKCBLAKIM_OFFSET UNITYSDK_OFFSET(0xC242C10)
#define PHEPICPODMB_LGLJPLIIEMG_OFFSET UNITYSDK_OFFSET(0xC2438C0)
#define PHEPICPODMB_LJGMNMGEDPL_OFFSET UNITYSDK_OFFSET(0xC243A70)
#define PHEPICPODMB_LLHPIHAEBJC_OFFSET UNITYSDK_OFFSET(0xC243800)
#define PHEPICPODMB_NLCDGIPGFDJ_OFFSET UNITYSDK_OFFSET(0xC242700)
#define PHEPICPODMB_NLGBJGGNGAI_OFFSET UNITYSDK_OFFSET(0xC2432C0)
#define PHEPICPODMB_NMHMAMAOBGL_OFFSET UNITYSDK_OFFSET(0xC243460)
#define PHEPICPODMB_OEEPMIOMKKO_OFFSET UNITYSDK_OFFSET(0xC243040)
#define PHEPICPODMB_OHDEFDIDPLM_OFFSET UNITYSDK_OFFSET(0xC243500)
#define PHEPICPODMB_PBLOLAAFPAJ_OFFSET UNITYSDK_OFFSET(0xC243B20)

inline static constexpr unsigned int PHEPICPODMB_TypeDefinitionIndex = 74270;

	class PHEPICPODMB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEPICPODMB_CTOR_OFFSET))(this);
		}

		static ::System::Single DGOAOLIHLNC(::System::Single a1, ::RPG::Client::FullBody::InterpolationMode a2)
		{
			return ((::System::Single(*)(::System::Single, ::RPG::Client::FullBody::InterpolationMode))((::PBYTE)hIl2Cpp + PHEPICPODMB_DGOAOLIHLNC_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 LGLJPLIIEMG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Client::FullBody::InterpolationMode a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::FullBody::InterpolationMode))((::PBYTE)hIl2Cpp + PHEPICPODMB_LGLJPLIIEMG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single FGIAFAHFINI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_FGIAFAHFINI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single NLCDGIPGFDJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_NLCDGIPGFDJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Single KDJNAMLIEJE(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_KDJNAMLIEJE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DGGAMLHBBBP(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_DGGAMLHBBBP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single KPKNLCHNNKH(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_KPKNLCHNNKH_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CCLFKIMFDAJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_CCLFKIMFDAJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Single FBAAFBEFPBH(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_FBAAFBEFPBH_OFFSET))(a1, a2, a3);
		}

		static ::System::Single BLOOPNDBJIM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_BLOOPNDBJIM_OFFSET))(a1, a2, a3);
		}

		static ::System::Single KPKMJDOINHD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_KPKMJDOINHD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LEHKCBLAKIM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_LEHKCBLAKIM_OFFSET))(a1, a2, a3);
		}

		static ::System::Single EMACCLJFBJE(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_EMACCLJFBJE_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ADAJNDGACBL(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_ADAJNDGACBL_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LJGMNMGEDPL(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_LJGMNMGEDPL_OFFSET))(a1, a2, a3);
		}

		static ::System::Single HBHLAAKPEMI(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_HBHLAAKPEMI_OFFSET))(a1, a2, a3);
		}

		static ::System::Single HGFAEBACFGI(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_HGFAEBACFGI_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ECCLIGACJHA(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_ECCLIGACJHA_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OEEPMIOMKKO(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_OEEPMIOMKKO_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GEMIHOBKEKM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_GEMIHOBKEKM_OFFSET))(a1, a2, a3);
		}

		static ::System::Single DFEHEDCGKOJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_DFEHEDCGKOJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Single NLGBJGGNGAI(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_NLGBJGGNGAI_OFFSET))(a1, a2, a3);
		}

		static ::System::Single IDKNNAHJNLN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_IDKNNAHJNLN_OFFSET))(a1, a2, a3);
		}

		static ::System::Single NMHMAMAOBGL(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_NMHMAMAOBGL_OFFSET))(a1, a2, a3);
		}

		static ::System::Single OHDEFDIDPLM(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_OHDEFDIDPLM_OFFSET))(a1, a2, a3);
		}

		static ::System::Single IHBINMAMLDF(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_IHBINMAMLDF_OFFSET))(a1, a2, a3);
		}

		static ::System::Single PBLOLAAFPAJ(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_PBLOLAAFPAJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GEEIPKDMEBK(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_GEEIPKDMEBK_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GHMGLEHGACK(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_GHMGLEHGACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LLHPIHAEBJC(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PHEPICPODMB_LLHPIHAEBJC_OFFSET))(a1, a2, a3);
		}

	};
