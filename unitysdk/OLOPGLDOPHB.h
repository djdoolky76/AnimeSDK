#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OLOPGLDOPHB_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0x3C50890)
#define OLOPGLDOPHB_AJNHJBNLKAJ_OFFSET UNITYSDK_OFFSET(0x3C508B0)
#define OLOPGLDOPHB_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1EC0F6D0)
#define OLOPGLDOPHB_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1EC0EA50)
#define OLOPGLDOPHB_BJOIPLKEMFA_OFFSET UNITYSDK_OFFSET(0x3C506F0)
#define OLOPGLDOPHB_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x3C50630)
#define OLOPGLDOPHB_BPFPGHGGPEO_OFFSET UNITYSDK_OFFSET(0x3C50690)
#define OLOPGLDOPHB_BPMICHLMMNK_OFFSET UNITYSDK_OFFSET(0x3C506D0)
#define OLOPGLDOPHB_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3C508F0)
#define OLOPGLDOPHB_CTOR_OFFSET UNITYSDK_OFFSET(0x3C505A0)
#define OLOPGLDOPHB_DAMECECDJHH_OFFSET UNITYSDK_OFFSET(0x3C506C0)
#define OLOPGLDOPHB_DHHLBBHILLH_OFFSET UNITYSDK_OFFSET(0x3C506E0)
#define OLOPGLDOPHB_DJJBNDDBKIH_OFFSET UNITYSDK_OFFSET(0x3C50780)
#define OLOPGLDOPHB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1EC11FB0)
#define OLOPGLDOPHB_EBMDDIMCOKG_OFFSET UNITYSDK_OFFSET(0x3C506A0)
#define OLOPGLDOPHB_EHJEAKDKCON_OFFSET UNITYSDK_OFFSET(0x3C50640)
#define OLOPGLDOPHB_EOABOAGHAJP_OFFSET UNITYSDK_OFFSET(0x3C50700)
#define OLOPGLDOPHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C509C0)
#define OLOPGLDOPHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C508E0)
#define OLOPGLDOPHB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1EC11F50)
#define OLOPGLDOPHB_FGOIDMKPLGF_OFFSET UNITYSDK_OFFSET(0x3C50820)
#define OLOPGLDOPHB_FPGKGOFJFGO_OFFSET UNITYSDK_OFFSET(0x3C50710)
#define OLOPGLDOPHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C509B0)
#define OLOPGLDOPHB_GFMJLDPPHJB_OFFSET UNITYSDK_OFFSET(0x3C50800)
#define OLOPGLDOPHB_HBLOIBDPDJD_OFFSET UNITYSDK_OFFSET(0x3C507E0)
#define OLOPGLDOPHB_ILHMIIBGBCB_OFFSET UNITYSDK_OFFSET(0x3C508A0)
#define OLOPGLDOPHB_KEDGLDBLMBK_OFFSET UNITYSDK_OFFSET(0x3C508D0)
#define OLOPGLDOPHB_KFADHKAMAKI_OFFSET UNITYSDK_OFFSET(0x3C50830)
#define OLOPGLDOPHB_KGDEJGBBJAH_OFFSET UNITYSDK_OFFSET(0x3C506B0)
#define OLOPGLDOPHB_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x3C50AD0)
#define OLOPGLDOPHB_LOCAONOFBOE_OFFSET UNITYSDK_OFFSET(0x3C50660)
#define OLOPGLDOPHB_MBCLBGPNLOC_OFFSET UNITYSDK_OFFSET(0x3C507F0)
#define OLOPGLDOPHB_MCNDEHAELPL_OFFSET UNITYSDK_OFFSET(0x3C50810)
#define OLOPGLDOPHB_MEDLNGKACMG_1_OFFSET UNITYSDK_OFFSET(0x3C50680)
#define OLOPGLDOPHB_MEDLNGKACMG_OFFSET UNITYSDK_OFFSET(0x3C50670)
#define OLOPGLDOPHB_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x3C50A80)
#define OLOPGLDOPHB_OBALHGOCDNB_OFFSET UNITYSDK_OFFSET(0x3C50650)
#define OLOPGLDOPHB_PJHNIKBILCM_OFFSET UNITYSDK_OFFSET(0x3C508C0)
#define OLOPGLDOPHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C50900)

inline static constexpr unsigned int OLOPGLDOPHB_TypeDefinitionIndex = 35293;

	struct alignas(8) OLOPGLDOPHB
	{
		::System::String* AIKAPJELHNK; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Boolean EHJEAKDKCON(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_EHJEAKDKCON_OFFSET))(this, a1);
		}

		/*
		::OLOPGLDOPHB OBALHGOCDNB()
		{
			return ((::OLOPGLDOPHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_OBALHGOCDNB_OFFSET))(this);
		}
		*/

		/*
		::OLOPGLDOPHB LOCAONOFBOE()
		{
			return ((::OLOPGLDOPHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_LOCAONOFBOE_OFFSET))(this);
		}
		*/

		/*
		::OLOPGLDOPHB MEDLNGKACMG(::OLOPGLDOPHB a1)
		{
			return ((::OLOPGLDOPHB(*)(::PVOID, ::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_MEDLNGKACMG_OFFSET))(this, a1);
		}
		*/

		/*
		::OLOPGLDOPHB MEDLNGKACMG_1(::Il2CppArray<::OLOPGLDOPHB>* a1)
		{
			return ((::OLOPGLDOPHB(*)(::PVOID, ::Il2CppArray<::OLOPGLDOPHB>*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_MEDLNGKACMG_1_OFFSET))(this, a1);
		}
		*/

		/*
		::OLOPGLDOPHB BPFPGHGGPEO(::System::String* a1)
		{
			return ((::OLOPGLDOPHB(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_BPFPGHGGPEO_OFFSET))(this, a1);
		}
		*/

		/*
		::OLOPGLDOPHB EBMDDIMCOKG(::OLOPGLDOPHB a1)
		{
			return ((::OLOPGLDOPHB(*)(::PVOID, ::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_EBMDDIMCOKG_OFFSET))(this, a1);
		}
		*/

		/*
		::OLOPGLDOPHB KGDEJGBBJAH()
		{
			return ((::OLOPGLDOPHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_KGDEJGBBJAH_OFFSET))(this);
		}
		*/

		/*
		::OLOPGLDOPHB DAMECECDJHH()
		{
			return ((::OLOPGLDOPHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_DAMECECDJHH_OFFSET))(this);
		}
		*/

		/*
		::OLOPGLDOPHB BPMICHLMMNK()
		{
			return ((::OLOPGLDOPHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_BPMICHLMMNK_OFFSET))(this);
		}
		*/

		/*
		::OLOPGLDOPHB DHHLBBHILLH()
		{
			return ((::OLOPGLDOPHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_DHHLBBHILLH_OFFSET))(this);
		}
		*/

		::System::String* BJOIPLKEMFA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_BJOIPLKEMFA_OFFSET))(this);
		}

		/*
		::OLOPGLDOPHB EOABOAGHAJP(::System::String* a1)
		{
			return ((::OLOPGLDOPHB(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_EOABOAGHAJP_OFFSET))(this, a1);
		}
		*/

		/*
		::OLOPGLDOPHB FPGKGOFJFGO()
		{
			return ((::OLOPGLDOPHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_FPGKGOFJFGO_OFFSET))(this);
		}
		*/

		::System::Boolean DJJBNDDBKIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_DJJBNDDBKIH_OFFSET))(this);
		}

		::System::Boolean HBLOIBDPDJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_HBLOIBDPDJD_OFFSET))(this);
		}

		::System::Boolean MBCLBGPNLOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_MBCLBGPNLOC_OFFSET))(this);
		}

		/*
		::System::Collections::Generic::IEnumerable_1<::OLOPGLDOPHB>* GFMJLDPPHJB(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::OLOPGLDOPHB>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_GFMJLDPPHJB_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Collections::Generic::IEnumerable_1<::OLOPGLDOPHB>* MCNDEHAELPL(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::OLOPGLDOPHB>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_MCNDEHAELPL_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void FGOIDMKPLGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_FGOIDMKPLGF_OFFSET))(this);
		}

		/*
		::OLOPGLDOPHB KFADHKAMAKI()
		{
			return ((::OLOPGLDOPHB(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_KFADHKAMAKI_OFFSET))(this);
		}
		*/

		/*
		::System::Void AEOIKFNKAAP(::OLOPGLDOPHB a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::OLOPGLDOPHB, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_AEOIKFNKAAP_OFFSET))(this, a1, a2, a3);
		}
		*/

		/*
		::System::Void ILHMIIBGBCB(::OLOPGLDOPHB a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OLOPGLDOPHB, ::System::Boolean))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_ILHMIIBGBCB_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void AJNHJBNLKAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_AJNHJBNLKAJ_OFFSET))(this, a1);
		}

		::System::Void PJHNIKBILCM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_PJHNIKBILCM_OFFSET))(this, a1);
		}

		/*
		::System::Boolean KEDGLDBLMBK(::OLOPGLDOPHB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_KEDGLDBLMBK_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Equals(::OLOPGLDOPHB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_EQUALS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Int32 CompareTo(::OLOPGLDOPHB a1)
		{
			return ((::System::Int32(*)(::PVOID, ::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_COMPARETO_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::String* MNLDMBGAJIF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Int32 LKEFCMNJDJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_LKEFCMNJDJI_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::OLOPGLDOPHB a1, ::OLOPGLDOPHB a2)
		{
			return ((::System::Boolean(*)(::OLOPGLDOPHB, ::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::OLOPGLDOPHB a1, ::OLOPGLDOPHB a2)
		{
			return ((::System::Boolean(*)(::OLOPGLDOPHB, ::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::OLOPGLDOPHB BBNJCKPKPDN(::System::String* a1)
		{
			return ((::OLOPGLDOPHB(*)(::System::String*))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::String* BBNJCKPKPDN_1(::OLOPGLDOPHB a1)
		{
			return ((::System::String*(*)(::OLOPGLDOPHB))((::PBYTE)hIl2Cpp + OLOPGLDOPHB_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

	};
