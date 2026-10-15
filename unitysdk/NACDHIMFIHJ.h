#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNHKFCHOEHK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"

#define NACDHIMFIHJ_ACBBPKGPPHB_OFFSET UNITYSDK_OFFSET(0x1DD7AE70)
#define NACDHIMFIHJ_AKEJHIHBIDL_1_OFFSET UNITYSDK_OFFSET(0x1DD7BDB0)
#define NACDHIMFIHJ_AKEJHIHBIDL_OFFSET UNITYSDK_OFFSET(0x1DD7B950)
#define NACDHIMFIHJ_AMPFPBODOJN_1_OFFSET UNITYSDK_OFFSET(0x1DD7CE10)
#define NACDHIMFIHJ_AMPFPBODOJN_2_OFFSET UNITYSDK_OFFSET(0x1DD7CE40)
#define NACDHIMFIHJ_AMPFPBODOJN_3_OFFSET UNITYSDK_OFFSET(0x1DD7CEF0)
#define NACDHIMFIHJ_AMPFPBODOJN_4_OFFSET UNITYSDK_OFFSET(0x1DD7CF60)
#define NACDHIMFIHJ_AMPFPBODOJN_OFFSET UNITYSDK_OFFSET(0x1DD7C370)
#define NACDHIMFIHJ_BBFPOJNCHMH_1_OFFSET UNITYSDK_OFFSET(0x1DD7EC00)
#define NACDHIMFIHJ_BBFPOJNCHMH_OFFSET UNITYSDK_OFFSET(0x1DD7EB30)
#define NACDHIMFIHJ_BEDJAIGHKBO_OFFSET UNITYSDK_OFFSET(0x1DD7C300)
#define NACDHIMFIHJ_BGAOBJEDLBJ_1_OFFSET UNITYSDK_OFFSET(0x1DD7D210)
#define NACDHIMFIHJ_BGAOBJEDLBJ_2_OFFSET UNITYSDK_OFFSET(0x1DD7D440)
#define NACDHIMFIHJ_BGAOBJEDLBJ_3_OFFSET UNITYSDK_OFFSET(0x1DD7D640)
#define NACDHIMFIHJ_BGAOBJEDLBJ_4_OFFSET UNITYSDK_OFFSET(0x1DD7D840)
#define NACDHIMFIHJ_BGAOBJEDLBJ_5_OFFSET UNITYSDK_OFFSET(0x1DD7DB30)
#define NACDHIMFIHJ_BGAOBJEDLBJ_6_OFFSET UNITYSDK_OFFSET(0x1DD7DDD0)
#define NACDHIMFIHJ_BGAOBJEDLBJ_7_OFFSET UNITYSDK_OFFSET(0x1DD7E0C0)
#define NACDHIMFIHJ_BGAOBJEDLBJ_OFFSET UNITYSDK_OFFSET(0x1DD7CFD0)
#define NACDHIMFIHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD7ECD0)
#define NACDHIMFIHJ_CMDGOAHAKFP_OFFSET UNITYSDK_OFFSET(0x1DD7C8F0)
#define NACDHIMFIHJ_DJELJCEFJDP_1_OFFSET UNITYSDK_OFFSET(0x1DD7B740)
#define NACDHIMFIHJ_DJELJCEFJDP_OFFSET UNITYSDK_OFFSET(0x1DD7B6C0)
#define NACDHIMFIHJ_DNAEKNJKHPD_OFFSET UNITYSDK_OFFSET(0x1DD7CB80)
#define NACDHIMFIHJ_GCPIEEDFMPO_1_OFFSET UNITYSDK_OFFSET(0x1DD7B500)
#define NACDHIMFIHJ_GCPIEEDFMPO_OFFSET UNITYSDK_OFFSET(0x1DD7B2E0)
#define NACDHIMFIHJ_HEEPGBPAMJE_1_OFFSET UNITYSDK_OFFSET(0x1DD7AD70)
#define NACDHIMFIHJ_HEEPGBPAMJE_2_OFFSET UNITYSDK_OFFSET(0x1DD7ADB0)
#define NACDHIMFIHJ_HEEPGBPAMJE_OFFSET UNITYSDK_OFFSET(0x1DD7AD30)
#define NACDHIMFIHJ_IIGPEJBCOAI_OFFSET UNITYSDK_OFFSET(0x1DD7B180)
#define NACDHIMFIHJ_JDPGFKDHJKB_OFFSET UNITYSDK_OFFSET(0x1DD7AFA0)
#define NACDHIMFIHJ_JMJAKKJECKA_1_OFFSET UNITYSDK_OFFSET(0x1DD7EAD0)
#define NACDHIMFIHJ_JMJAKKJECKA_OFFSET UNITYSDK_OFFSET(0x1DD7EA70)
#define NACDHIMFIHJ_MKEGGFEMPCK_OFFSET UNITYSDK_OFFSET(0x1DD7ADE0)
#define NACDHIMFIHJ_MLBOHACAFJI_1_OFFSET UNITYSDK_OFFSET(0x1DD7ACF0)
#define NACDHIMFIHJ_MLBOHACAFJI_OFFSET UNITYSDK_OFFSET(0x1DD7ACA0)
#define NACDHIMFIHJ_NEIKHKAELJJ_1_OFFSET UNITYSDK_OFFSET(0x1DD7E4C0)
#define NACDHIMFIHJ_NEIKHKAELJJ_2_OFFSET UNITYSDK_OFFSET(0x1DD7E650)
#define NACDHIMFIHJ_NEIKHKAELJJ_3_OFFSET UNITYSDK_OFFSET(0x1DD7E890)
#define NACDHIMFIHJ_NEIKHKAELJJ_OFFSET UNITYSDK_OFFSET(0x1DD7E330)
#define NACDHIMFIHJ_NJLBCGOIFEO_1_OFFSET UNITYSDK_OFFSET(0x1DD7AB60)
#define NACDHIMFIHJ_NJLBCGOIFEO_OFFSET UNITYSDK_OFFSET(0x1DD7AA20)
#define NACDHIMFIHJ_OEMFCABKECL_OFFSET UNITYSDK_OFFSET(0x1DD7AF10)
#define NACDHIMFIHJ_PIOHIOOKKNC_OFFSET UNITYSDK_OFFSET(0x1DD7B7E0)

inline static constexpr unsigned int NACDHIMFIHJ_TypeDefinitionIndex = 6258;

	class NACDHIMFIHJ : public ::System::Object
	{
	public:
		static ::CNHKFCHOEHK* StaticGet_EKEMOCGAEEO()
		{
			return (::CNHKFCHOEHK*)UnitySDK::FromName("", "NACDHIMFIHJ")->GetStaticField(0x9890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NACDHIMFIHJ_CCTOR_OFFSET))();
		}

		static ::System::Void NJLBCGOIFEO(::RPG::MQuaternion a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::RPG::MQuaternion, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_NJLBCGOIFEO_OFFSET))(a1, a2);
		}

		static ::System::Void NJLBCGOIFEO_1(::RPG::MQuaternion a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::RPG::MQuaternion, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_NJLBCGOIFEO_1_OFFSET))(a1, a2);
		}

		static ::System::Void MLBOHACAFJI(::RPG::MVector3 a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_MLBOHACAFJI_OFFSET))(a1, a2);
		}

		static ::System::Void MLBOHACAFJI_1(::RPG::MVector3 a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_MLBOHACAFJI_1_OFFSET))(a1, a2);
		}

		static ::System::Void HEEPGBPAMJE(::RPG::MVector3 a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_HEEPGBPAMJE_OFFSET))(a1, a2);
		}

		static ::System::Void HEEPGBPAMJE_1(::RPG::MVector3 a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_HEEPGBPAMJE_1_OFFSET))(a1, a2);
		}

		static ::System::Void HEEPGBPAMJE_2(::System::Single a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::System::Single, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_HEEPGBPAMJE_2_OFFSET))(a1, a2);
		}

		static ::System::Void MKEGGFEMPCK(::System::Single a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::System::Single, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_MKEGGFEMPCK_OFFSET))(a1, a2);
		}

		static ::System::Void ACBBPKGPPHB(::System::Single a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::System::Single, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_ACBBPKGPPHB_OFFSET))(a1, a2);
		}

		static ::System::Void OEMFCABKECL(::System::Single a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::System::Single, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_OEMFCABKECL_OFFSET))(a1, a2);
		}

		static ::System::Void JDPGFKDHJKB(::System::Single a1, ::RPG::MVector3 a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_JDPGFKDHJKB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IIGPEJBCOAI(::System::Single a1, ::RPG::MVector3 a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_IIGPEJBCOAI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GCPIEEDFMPO(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MQuaternion, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_GCPIEEDFMPO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GCPIEEDFMPO_1(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MQuaternion, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_GCPIEEDFMPO_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DJELJCEFJDP(::CNHKFCHOEHK a1)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_DJELJCEFJDP_OFFSET))(a1);
		}

		static ::System::Void DJELJCEFJDP_1(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_DJELJCEFJDP_1_OFFSET))(a1, a2);
		}

		static ::System::Single PIOHIOOKKNC(::CNHKFCHOEHK a1)
		{
			return ((::System::Single(*)(::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_PIOHIOOKKNC_OFFSET))(a1);
		}

		static ::System::Void AKEJHIHBIDL(::CNHKFCHOEHK a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::System::Single))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_AKEJHIHBIDL_OFFSET))(a1, a2);
		}

		static ::System::Void AKEJHIHBIDL_1(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK, ::System::Single))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_AKEJHIHBIDL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BEDJAIGHKBO(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BEDJAIGHKBO_OFFSET))(a1, a2);
		}

		static ::System::Void AMPFPBODOJN(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_AMPFPBODOJN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CMDGOAHAKFP(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_CMDGOAHAKFP_OFFSET))(a1, a2);
		}

		static ::System::Void DNAEKNJKHPD(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_DNAEKNJKHPD_OFFSET))(a1, a2);
		}

		static ::System::Void AMPFPBODOJN_1(::CNHKFCHOEHK a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::System::Single))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_AMPFPBODOJN_1_OFFSET))(a1, a2);
		}

		static ::System::Void AMPFPBODOJN_2(::CNHKFCHOEHK a1, ::System::Single a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::CNHKFCHOEHK, ::System::Single, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_AMPFPBODOJN_2_OFFSET))(a1, a2, a3);
		}

		static ::BMAGJGLPIIF AMPFPBODOJN_3(::CNHKFCHOEHK a1, ::BMAGJGLPIIF a2)
		{
			return ((::BMAGJGLPIIF(*)(::CNHKFCHOEHK, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_AMPFPBODOJN_3_OFFSET))(a1, a2);
		}

		static ::BMAGJGLPIIF AMPFPBODOJN_4(::CNHKFCHOEHK a1, ::BMAGJGLPIIF a2)
		{
			return ((::BMAGJGLPIIF(*)(::CNHKFCHOEHK, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_AMPFPBODOJN_4_OFFSET))(a1, a2);
		}

		static ::System::Void BGAOBJEDLBJ(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::RPG::MVector3 a3, ::CNHKFCHOEHK a4)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BGAOBJEDLBJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BGAOBJEDLBJ_1(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::RPG::MVector3 a3, ::CNHKFCHOEHK a4)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BGAOBJEDLBJ_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BGAOBJEDLBJ_2(::System::Single a1, ::RPG::MQuaternion a2, ::RPG::MVector3 a3, ::CNHKFCHOEHK a4)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BGAOBJEDLBJ_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BGAOBJEDLBJ_3(::System::Single a1, ::RPG::MQuaternion a2, ::RPG::MVector3 a3, ::CNHKFCHOEHK a4)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BGAOBJEDLBJ_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BGAOBJEDLBJ_4(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MQuaternion a3, ::RPG::MVector3 a4, ::CNHKFCHOEHK a5)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BGAOBJEDLBJ_4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BGAOBJEDLBJ_5(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MQuaternion a3, ::RPG::MVector3 a4, ::CNHKFCHOEHK a5)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BGAOBJEDLBJ_5_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BGAOBJEDLBJ_6(::System::Single a1, ::RPG::MVector3 a2, ::RPG::MQuaternion a3, ::RPG::MVector3 a4, ::CNHKFCHOEHK a5)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::MVector3, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BGAOBJEDLBJ_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BGAOBJEDLBJ_7(::System::Single a1, ::RPG::MVector3 a2, ::RPG::MQuaternion a3, ::RPG::MVector3 a4, ::CNHKFCHOEHK a5)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::MVector3, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BGAOBJEDLBJ_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void NEIKHKAELJJ(::RPG::MQuaternion a1, ::RPG::MVector3 a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_NEIKHKAELJJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NEIKHKAELJJ_1(::RPG::MQuaternion a1, ::RPG::MVector3 a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_NEIKHKAELJJ_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NEIKHKAELJJ_2(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::RPG::MVector3 a3, ::CNHKFCHOEHK a4)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_NEIKHKAELJJ_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void NEIKHKAELJJ_3(::RPG::MVector3 a1, ::RPG::MQuaternion a2, ::RPG::MVector3 a3, ::CNHKFCHOEHK a4)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MQuaternion, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_NEIKHKAELJJ_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JMJAKKJECKA(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_JMJAKKJECKA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JMJAKKJECKA_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::CNHKFCHOEHK a3)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_JMJAKKJECKA_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BBFPOJNCHMH(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::CNHKFCHOEHK a4)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BBFPOJNCHMH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BBFPOJNCHMH_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::CNHKFCHOEHK a4)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + NACDHIMFIHJ_BBFPOJNCHMH_1_OFFSET))(a1, a2, a3, a4);
		}

	};
