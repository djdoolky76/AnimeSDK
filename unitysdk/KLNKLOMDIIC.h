#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define KLNKLOMDIIC_ADDIIKFHFNM_OFFSET UNITYSDK_OFFSET(0x3C2C150)
#define KLNKLOMDIIC_BAMAJNCMFAG_OFFSET UNITYSDK_OFFSET(0x1C6E92B0)
#define KLNKLOMDIIC_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x1C6E8FA0)
#define KLNKLOMDIIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6ED510)
#define KLNKLOMDIIC_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x3C2C160)
#define KLNKLOMDIIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C2ACD0)
#define KLNKLOMDIIC_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C2AD10)
#define KLNKLOMDIIC_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2ABA0)
#define KLNKLOMDIIC_DHIOLEHBCGA_OFFSET UNITYSDK_OFFSET(0x1C6E95F0)
#define KLNKLOMDIIC_DHJPJGEGMEJ_OFFSET UNITYSDK_OFFSET(0x3C2BF10)
#define KLNKLOMDIIC_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0x1C6EBB80)
#define KLNKLOMDIIC_EONFJDPMNOH_OFFSET UNITYSDK_OFFSET(0x3C2B390)
#define KLNKLOMDIIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C2BC00)
#define KLNKLOMDIIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C2BBA0)
#define KLNKLOMDIIC_FAGGGDCDOLI_OFFSET UNITYSDK_OFFSET(0x3C2BEB0)
#define KLNKLOMDIIC_FBCOJDHLMGF_OFFSET UNITYSDK_OFFSET(0x3C2BCF0)
#define KLNKLOMDIIC_FIJPKBBAGBK_OFFSET UNITYSDK_OFFSET(0x3C2BF30)
#define KLNKLOMDIIC_FKKNPACOCEF_OFFSET UNITYSDK_OFFSET(0x3C2BE70)
#define KLNKLOMDIIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C2BCE0)
#define KLNKLOMDIIC_GLACHJKIEFI_OFFSET UNITYSDK_OFFSET(0x1C6E8E20)
#define KLNKLOMDIIC_HAIHHFOPBLN_OFFSET UNITYSDK_OFFSET(0x1C6EAD70)
#define KLNKLOMDIIC_HHFGJGICFED_OFFSET UNITYSDK_OFFSET(0x3C2B880)
#define KLNKLOMDIIC_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1670)
#define KLNKLOMDIIC_HNEAMKPICLP_OFFSET UNITYSDK_OFFSET(0x3C2B490)
#define KLNKLOMDIIC_IFBCGKIMGDK_OFFSET UNITYSDK_OFFSET(0x3C2B370)
#define KLNKLOMDIIC_IOKBDLNLBDD_OFFSET UNITYSDK_OFFSET(0x3C2BF60)
#define KLNKLOMDIIC_JBILFJLJNNO_OFFSET UNITYSDK_OFFSET(0x3C2BED0)
#define KLNKLOMDIIC_JFCKGGOHJMF_OFFSET UNITYSDK_OFFSET(0x3C2BE90)
#define KLNKLOMDIIC_JODKCCOIGIG_OFFSET UNITYSDK_OFFSET(0x1C6EB070)
#define KLNKLOMDIIC_KGDEJGBBJAH_OFFSET UNITYSDK_OFFSET(0x1C6EA220)
#define KLNKLOMDIIC_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x3C2C170)
#define KLNKLOMDIIC_KHIMIFIGMKM_OFFSET UNITYSDK_OFFSET(0x3C2C100)
#define KLNKLOMDIIC_LAPJCIBMPIH_OFFSET UNITYSDK_OFFSET(0x1C6E9130)
#define KLNKLOMDIIC_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0x3C2C0D0)
#define KLNKLOMDIIC_LHNNMNFOODL_OFFSET UNITYSDK_OFFSET(0x3C2B580)
#define KLNKLOMDIIC_MKJFHFEMJGC_OFFSET UNITYSDK_OFFSET(0x3C2B710)
#define KLNKLOMDIIC_NAEMGPIOJIH_OFFSET UNITYSDK_OFFSET(0x1C6E9430)
#define KLNKLOMDIIC_NDENHMOCIDP_OFFSET UNITYSDK_OFFSET(0x3C2BEF0)
#define KLNKLOMDIIC_OELDMLMHEHN_OFFSET UNITYSDK_OFFSET(0x2E79860)
#define KLNKLOMDIIC_OFHKGGPAFJC_OFFSET UNITYSDK_OFFSET(0x3C2B100)
#define KLNKLOMDIIC_OHONHMKMIPE_OFFSET UNITYSDK_OFFSET(0x3C2AE10)
#define KLNKLOMDIIC_OPLLIBHNKEO_OFFSET UNITYSDK_OFFSET(0x3C2B9F0)
#define KLNKLOMDIIC_PCIOAANPHKO_OFFSET UNITYSDK_OFFSET(0x3C2C190)
#define KLNKLOMDIIC_PCLDEDNAIFO_1_OFFSET UNITYSDK_OFFSET(0x1C6EA980)
#define KLNKLOMDIIC_PCLDEDNAIFO_OFFSET UNITYSDK_OFFSET(0x1C6EA510)

inline static constexpr unsigned int KLNKLOMDIIC_TypeDefinitionIndex = 36964;

	struct alignas(4) KLNKLOMDIIC
	{
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0x10
		::UnityEngine::Quaternion NCMEPPHLGEG; // 0x1C
		::UnityEngine::Vector3 PEHHBBNAMEH; // 0x2C
		::UnityEngine::Matrix4x4 LKEHCIFAJNK; // 0x38
		static ::KLNKLOMDIIC* StaticGet_EKEMOCGAEEO()
		{
			return (::KLNKLOMDIIC*)UnitySDK::FromName("", "KLNKLOMDIIC")->GetStaticField(0x2BF0);
		}

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLNKLOMDIIC_CCTOR_OFFSET))();
		}

		/*
		static ::KLNKLOMDIIC BEJAJNEFHIB(::UnityEngine::Vector3 a1)
		{
			return ((::KLNKLOMDIIC(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_BEJAJNEFHIB_OFFSET))(a1);
		}
		*/

		/*
		static ::KLNKLOMDIIC LAPJCIBMPIH(::UnityEngine::Quaternion a1)
		{
			return ((::KLNKLOMDIIC(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_LAPJCIBMPIH_OFFSET))(a1);
		}
		*/

		/*
		static ::KLNKLOMDIIC BAMAJNCMFAG(::UnityEngine::Vector3 a1)
		{
			return ((::KLNKLOMDIIC(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_BAMAJNCMFAG_OFFSET))(a1);
		}
		*/

		/*
		static ::KLNKLOMDIIC NAEMGPIOJIH(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::KLNKLOMDIIC(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_NAEMGPIOJIH_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::KLNKLOMDIIC DHIOLEHBCGA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::KLNKLOMDIIC(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_DHIOLEHBCGA_OFFSET))(a1, a2);
		}
		*/

		/*
		::KLNKLOMDIIC OHONHMKMIPE(::KLNKLOMDIIC a1)
		{
			return ((::KLNKLOMDIIC(*)(::PVOID, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_OHONHMKMIPE_OFFSET))(this, a1);
		}
		*/

		/*
		::KLNKLOMDIIC OFHKGGPAFJC(::KLNKLOMDIIC a1)
		{
			return ((::KLNKLOMDIIC(*)(::PVOID, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_OFHKGGPAFJC_OFFSET))(this, a1);
		}
		*/

		/*
		::KLNKLOMDIIC IFBCGKIMGDK()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_IFBCGKIMGDK_OFFSET))(this);
		}
		*/

		/*
		static ::KLNKLOMDIIC KGDEJGBBJAH(::KLNKLOMDIIC a1, ::KLNKLOMDIIC a2)
		{
			return ((::KLNKLOMDIIC(*)(::KLNKLOMDIIC, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_KGDEJGBBJAH_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::KLNKLOMDIIC PCLDEDNAIFO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::KLNKLOMDIIC(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_PCLDEDNAIFO_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::KLNKLOMDIIC PCLDEDNAIFO_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::KLNKLOMDIIC(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_PCLDEDNAIFO_1_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::KLNKLOMDIIC HAIHHFOPBLN(::KLNKLOMDIIC a1, ::KLNKLOMDIIC a2, ::System::Single a3)
		{
			return ((::KLNKLOMDIIC(*)(::KLNKLOMDIIC, ::KLNKLOMDIIC, ::System::Single))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_HAIHHFOPBLN_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::KLNKLOMDIIC JODKCCOIGIG(::KLNKLOMDIIC a1, ::KLNKLOMDIIC a2, ::System::Single a3)
		{
			return ((::KLNKLOMDIIC(*)(::KLNKLOMDIIC, ::KLNKLOMDIIC, ::System::Single))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_JODKCCOIGIG_OFFSET))(a1, a2, a3);
		}
		*/

		::UnityEngine::Vector3 EONFJDPMNOH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_EONFJDPMNOH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HNEAMKPICLP(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_HNEAMKPICLP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LHNNMNFOODL(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_LHNNMNFOODL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 MKJFHFEMJGC(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_MKJFHFEMJGC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HHFGJGICFED(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_HHFGJGICFED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OPLLIBHNKEO(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_OPLLIBHNKEO_OFFSET))(this, a1);
		}

		/*
		static ::KLNKLOMDIIC EBLLCHBCJGG(::KLNKLOMDIIC a1, ::KLNKLOMDIIC a2)
		{
			return ((::KLNKLOMDIIC(*)(::KLNKLOMDIIC, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_EBLLCHBCJGG_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean Equals(::KLNKLOMDIIC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_GETHASHCODE_OFFSET))(this);
		}

		::System::Void FBCOJDHLMGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_FBCOJDHLMGF_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GLACHJKIEFI(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_GLACHJKIEFI_OFFSET))(a1);
		}

		::UnityEngine::Vector3 FKKNPACOCEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_FKKNPACOCEF_OFFSET))(this);
		}

		::UnityEngine::Vector3 JFCKGGOHJMF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_JFCKGGOHJMF_OFFSET))(this);
		}

		::UnityEngine::Vector3 FAGGGDCDOLI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_FAGGGDCDOLI_OFFSET))(this);
		}

		::UnityEngine::Vector3 JBILFJLJNNO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_JBILFJLJNNO_OFFSET))(this);
		}

		::UnityEngine::Vector3 NDENHMOCIDP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_NDENHMOCIDP_OFFSET))(this);
		}

		::UnityEngine::Vector3 DHJPJGEGMEJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_DHJPJGEGMEJ_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 FIJPKBBAGBK()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_FIJPKBBAGBK_OFFSET))(this);
		}

		/*
		::KLNKLOMDIIC IOKBDLNLBDD()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_IOKBDLNLBDD_OFFSET))(this);
		}
		*/

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::System::Single KHIMIFIGMKM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_KHIMIFIGMKM_OFFSET))(this);
		}

		::System::Void ADDIIKFHFNM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_ADDIIKFHFNM_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OELDMLMHEHN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_OELDMLMHEHN_OFFSET))(this);
		}

		::System::Void PCIOAANPHKO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLNKLOMDIIC_PCIOAANPHKO_OFFSET))(this, a1);
		}

	};
