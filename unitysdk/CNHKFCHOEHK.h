#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace System { class Object; }
namespace System { class String; }

#define CNHKFCHOEHK_ADGNBIPGOFF_OFFSET UNITYSDK_OFFSET(0x179A1650)
#define CNHKFCHOEHK_APGFEONCDLH_OFFSET UNITYSDK_OFFSET(0x179A1620)
#define CNHKFCHOEHK_APPCGFPEINK_OFFSET UNITYSDK_OFFSET(0x3DE5FA0)
#define CNHKFCHOEHK_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x179A25C0)
#define CNHKFCHOEHK_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x179A2590)
#define CNHKFCHOEHK_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3DE6030)
#define CNHKFCHOEHK_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0x179A1470)
#define CNHKFCHOEHK_BHIFMKGDHNA_OFFSET UNITYSDK_OFFSET(0x3DE5AD0)
#define CNHKFCHOEHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x179A25F0)
#define CNHKFCHOEHK_CTOR_OFFSET UNITYSDK_OFFSET(0x3DE5A40)
#define CNHKFCHOEHK_DJPAGBMCMBC_OFFSET UNITYSDK_OFFSET(0x3DE5BF0)
#define CNHKFCHOEHK_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x179A0FF0)
#define CNHKFCHOEHK_EBLLCHBCJGG_1_OFFSET UNITYSDK_OFFSET(0x179A0E50)
#define CNHKFCHOEHK_EBLLCHBCJGG_OFFSET UNITYSDK_OFFSET(0x179A0C80)
#define CNHKFCHOEHK_EHBJGFMPNGC_OFFSET UNITYSDK_OFFSET(0x3DE5D00)
#define CNHKFCHOEHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x3DE5AC0)
#define CNHKFCHOEHK_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x179A0EC0)
#define CNHKFCHOEHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3DE5AB0)
#define CNHKFCHOEHK_JMKACNCBIEF_OFFSET UNITYSDK_OFFSET(0x3DE5E30)
#define CNHKFCHOEHK_LAPJCIBMPIH_OFFSET UNITYSDK_OFFSET(0x179A14C0)
#define CNHKFCHOEHK_NDFCJNAMFJG_1_OFFSET UNITYSDK_OFFSET(0x3DE5AA0)
#define CNHKFCHOEHK_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x3DE5A80)
#define CNHKFCHOEHK_NEMDKBKDFDN_OFFSET UNITYSDK_OFFSET(0x179A1430)
#define CNHKFCHOEHK_OFFDOECEFFF_OFFSET UNITYSDK_OFFSET(0x3DE5DA0)
#define CNHKFCHOEHK_OKHMADPOPAJ_OFFSET UNITYSDK_OFFSET(0x3DE5F10)
#define CNHKFCHOEHK_PEFLJDOKOIL_1_OFFSET UNITYSDK_OFFSET(0x3DE5A90)
#define CNHKFCHOEHK_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3DE5A70)
#define CNHKFCHOEHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3DE6020)

inline static constexpr unsigned int CNHKFCHOEHK_TypeDefinitionIndex = 6393;

	struct alignas(4) CNHKFCHOEHK
	{
		::System::Single PBINCNKKKCB; // 0x10
		::System::Single FLNOBILHDGJ; // 0x14
		::System::Single BBNNHKKPMIG; // 0x18
		::System::Single MLODLDFGMDI; // 0x1C
		::System::Single OEAJEEDBBBG; // 0x20
		::System::Single MIENPIAHANM; // 0x24
		::System::Single FOCKLNBGLDM; // 0x28
		::System::Single LPOEIGFNHLO; // 0x2C
		::System::Single MALOGDKHHAG; // 0x30
		::System::Single CJILIGEBNMB; // 0x34
		::System::Single EOMOGPBJPKE; // 0x38
		::System::Single LHFGEEJFKLO; // 0x3C
		::System::Single CAPGPPICMDD; // 0x40
		::System::Single LIPCABDOIBA; // 0x44
		::System::Single NDBJMJGIJLH; // 0x48
		::System::Single BEFMEFFHICD; // 0x4C
		static ::CNHKFCHOEHK* StaticGet_AFKHFAMEDOD()
		{
			return (::CNHKFCHOEHK*)UnitySDK::FromName("", "CNHKFCHOEHK")->GetStaticField(0x6BD0);
		}

		static ::CNHKFCHOEHK* StaticGet_MFLDLLDIJJE()
		{
			return (::CNHKFCHOEHK*)UnitySDK::FromName("", "CNHKFCHOEHK")->GetStaticField(0x6C10);
		}

		::System::Void _ctor(::BMAGJGLPIIF a1, ::BMAGJGLPIIF a2, ::BMAGJGLPIIF a3, ::BMAGJGLPIIF a4)
		{
			return ((::System::Void(*)(::PVOID, ::BMAGJGLPIIF, ::BMAGJGLPIIF, ::BMAGJGLPIIF, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNHKFCHOEHK_CCTOR_OFFSET))();
		}

		::System::Single PEFLJDOKOIL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_PEFLJDOKOIL_OFFSET))(this, a1, a2);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_NDFCJNAMFJG_OFFSET))(this, a1, a2, a3);
		}

		::System::Single PEFLJDOKOIL_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_PEFLJDOKOIL_1_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_NDFCJNAMFJG_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_EQUALS_OFFSET))(this, a1);
		}

		/*
		static ::CNHKFCHOEHK EBLLCHBCJGG(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2)
		{
			return ((::CNHKFCHOEHK(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_EBLLCHBCJGG_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::BMAGJGLPIIF EBLLCHBCJGG_1(::CNHKFCHOEHK a1, ::BMAGJGLPIIF a2)
		{
			return ((::BMAGJGLPIIF(*)(::CNHKFCHOEHK, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_EBLLCHBCJGG_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Boolean(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::CNHKFCHOEHK a1, ::CNHKFCHOEHK a2)
		{
			return ((::System::Boolean(*)(::CNHKFCHOEHK, ::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::BMAGJGLPIIF BHIFMKGDHNA(::System::Int32 a1)
		{
			return ((::BMAGJGLPIIF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_BHIFMKGDHNA_OFFSET))(this, a1);
		}

		::BMAGJGLPIIF DJPAGBMCMBC(::System::Int32 a1)
		{
			return ((::BMAGJGLPIIF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_DJPAGBMCMBC_OFFSET))(this, a1);
		}

		::System::Void EHBJGFMPNGC(::System::Int32 a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_EHBJGFMPNGC_OFFSET))(this, a1, a2);
		}

		::System::Void OFFDOECEFFF(::System::Int32 a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_OFFDOECEFFF_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 JMKACNCBIEF(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_JMKACNCBIEF_OFFSET))(this, a1);
		}

		::RPG::MVector3 OKHMADPOPAJ(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_OKHMADPOPAJ_OFFSET))(this, a1);
		}

		::RPG::MVector3 APPCGFPEINK(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_APPCGFPEINK_OFFSET))(this, a1);
		}

		/*
		static ::CNHKFCHOEHK NEMDKBKDFDN(::RPG::MVector3 a1)
		{
			return ((::CNHKFCHOEHK(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_NEMDKBKDFDN_OFFSET))(a1);
		}
		*/

		/*
		static ::CNHKFCHOEHK BEJAJNEFHIB(::RPG::MVector3 a1)
		{
			return ((::CNHKFCHOEHK(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_BEJAJNEFHIB_OFFSET))(a1);
		}
		*/

		/*
		static ::CNHKFCHOEHK LAPJCIBMPIH(::RPG::MQuaternion a1)
		{
			return ((::CNHKFCHOEHK(*)(::RPG::MQuaternion))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_LAPJCIBMPIH_OFFSET))(a1);
		}
		*/

		/*
		static ::CNHKFCHOEHK APGFEONCDLH()
		{
			return ((::CNHKFCHOEHK(*)())((::PBYTE)hIl2Cpp + CNHKFCHOEHK_APGFEONCDLH_OFFSET))();
		}
		*/

		/*
		static ::CNHKFCHOEHK ADGNBIPGOFF()
		{
			return ((::CNHKFCHOEHK(*)())((::PBYTE)hIl2Cpp + CNHKFCHOEHK_ADGNBIPGOFF_OFFSET))();
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Matrix4x4 BBNJCKPKPDN(::CNHKFCHOEHK a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::CNHKFCHOEHK))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::CNHKFCHOEHK BBNJCKPKPDN_1(::UnityEngine::Matrix4x4 a1)
		{
			return ((::CNHKFCHOEHK(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CNHKFCHOEHK_BBNJCKPKPDN_1_OFFSET))(a1);
		}
		*/

	};
