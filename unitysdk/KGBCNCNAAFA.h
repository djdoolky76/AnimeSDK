#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/CIAENAKKAAP.h"
#include "unitysdk/IDJCEFPNPMM.h"
#include "unitysdk/MJAHJAHHJEG.h"
namespace System { class String; }

#define KGBCNCNAAFA_BKECGPCBKOK_OFFSET UNITYSDK_OFFSET(0x1DD6B040)
#define KGBCNCNAAFA_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C49830)
#define KGBCNCNAAFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x10480)
#define KGBCNCNAAFA_CTOR_OFFSET UNITYSDK_OFFSET(0x3C49820)
#define KGBCNCNAAFA_FEDNJBCAHCF_1_OFFSET UNITYSDK_OFFSET(0x3C4B780)
#define KGBCNCNAAFA_FEDNJBCAHCF_2_OFFSET UNITYSDK_OFFSET(0x3C4BA70)
#define KGBCNCNAAFA_FEDNJBCAHCF_3_OFFSET UNITYSDK_OFFSET(0x3C4BD40)
#define KGBCNCNAAFA_FEDNJBCAHCF_OFFSET UNITYSDK_OFFSET(0x3C4B5C0)
#define KGBCNCNAAFA_GLPJBEDCLCC_OFFSET UNITYSDK_OFFSET(0x3C4B460)
#define KGBCNCNAAFA_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4B4D0)
#define KGBCNCNAAFA_KBAGHEGOJDG_1_OFFSET UNITYSDK_OFFSET(0x3C4B890)
#define KGBCNCNAAFA_KBAGHEGOJDG_2_OFFSET UNITYSDK_OFFSET(0x3C4BBB0)
#define KGBCNCNAAFA_KBAGHEGOJDG_3_OFFSET UNITYSDK_OFFSET(0x3C4BDF0)
#define KGBCNCNAAFA_KBAGHEGOJDG_OFFSET UNITYSDK_OFFSET(0x3C4B660)
#define KGBCNCNAAFA_KIDCBIFJCKH_1_OFFSET UNITYSDK_OFFSET(0x3C4B980)
#define KGBCNCNAAFA_KIDCBIFJCKH_2_OFFSET UNITYSDK_OFFSET(0x3C4BC70)
#define KGBCNCNAAFA_KIDCBIFJCKH_3_OFFSET UNITYSDK_OFFSET(0x3C4BE80)
#define KGBCNCNAAFA_KIDCBIFJCKH_OFFSET UNITYSDK_OFFSET(0x3C4B6F0)
#define KGBCNCNAAFA_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4BF20)
#define KGBCNCNAAFA_MGMNFIMLOKD_OFFSET UNITYSDK_OFFSET(0x1DD6B0B0)
#define KGBCNCNAAFA_NIFEPGPLKLD_1_OFFSET UNITYSDK_OFFSET(0x1DD6AF30)
#define KGBCNCNAAFA_NIFEPGPLKLD_OFFSET UNITYSDK_OFFSET(0x1DD6AE00)
#define KGBCNCNAAFA_PDJDGPGNCNG_OFFSET UNITYSDK_OFFSET(0x3C4BFE0)
#define KGBCNCNAAFA_PGIBPCGLJMG_OFFSET UNITYSDK_OFFSET(0x1DD6AFE0)
#define KGBCNCNAAFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4C070)

	struct alignas(4) KGBCNCNAAFA
	{
		::RPG::MVector2 BHCMCMADHBF; // 0x10
		::RPG::MVector2 LJDHGFECMHJ; // 0x18
		::System::Void _ctor(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_CTOR_1_OFFSET))(this, a1, a2);
		}

		/*
		static ::KGBCNCNAAFA NIFEPGPLKLD(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::KGBCNCNAAFA(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_NIFEPGPLKLD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::KGBCNCNAAFA NIFEPGPLKLD_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::KGBCNCNAAFA(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_NIFEPGPLKLD_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::KGBCNCNAAFA PGIBPCGLJMG(::KGBCNCNAAFA a1, ::RPG::MVector2 a2)
		{
			return ((::KGBCNCNAAFA(*)(::KGBCNCNAAFA, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_PGIBPCGLJMG_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::KGBCNCNAAFA BKECGPCBKOK(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::KGBCNCNAAFA(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_BKECGPCBKOK_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::KGBCNCNAAFA MGMNFIMLOKD(::KGBCNCNAAFA a1, ::System::Single a2)
		{
			return ((::KGBCNCNAAFA(*)(::KGBCNCNAAFA, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_MGMNFIMLOKD_OFFSET))(a1, a2);
		}
		*/

		::RPG::MVector2 CNENKBFFPDC(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_CNENKBFFPDC_OFFSET))(this, a1);
		}

		::System::Single GLPJBEDCLCC(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_GLPJBEDCLCC_OFFSET))(this, a1);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::System::Int32 FEDNJBCAHCF(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_FEDNJBCAHCF_OFFSET))(this, a1, a2);
		}

		::System::Boolean KBAGHEGOJDG(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_KBAGHEGOJDG_OFFSET))(this, a1, a2);
		}

		::System::Boolean KIDCBIFJCKH(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_KIDCBIFJCKH_OFFSET))(this, a1, a2);
		}

		::System::Int32 FEDNJBCAHCF_1(::CIAENAKKAAP a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CIAENAKKAAP, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_FEDNJBCAHCF_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean KBAGHEGOJDG_1(::CIAENAKKAAP a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIAENAKKAAP, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_KBAGHEGOJDG_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean KIDCBIFJCKH_1(::CIAENAKKAAP a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIAENAKKAAP, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_KIDCBIFJCKH_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 FEDNJBCAHCF_2(::MJAHJAHHJEG a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MJAHJAHHJEG, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_FEDNJBCAHCF_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean KBAGHEGOJDG_2(::MJAHJAHHJEG a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJAHJAHHJEG, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_KBAGHEGOJDG_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean KIDCBIFJCKH_2(::MJAHJAHHJEG a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJAHJAHHJEG, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_KIDCBIFJCKH_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 FEDNJBCAHCF_3(::IDJCEFPNPMM a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IDJCEFPNPMM, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_FEDNJBCAHCF_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean KBAGHEGOJDG_3(::IDJCEFPNPMM a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDJCEFPNPMM, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_KBAGHEGOJDG_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean KIDCBIFJCKH_3(::IDJCEFPNPMM a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDJCEFPNPMM, ::System::Single))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_KIDCBIFJCKH_3_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 LBDJFNDMMOA(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		/*
		::System::Single PDJDGPGNCNG(::KGBCNCNAAFA a1, ::System::Boolean a2)
		{
			return ((::System::Single(*)(::PVOID, ::KGBCNCNAAFA, ::System::Boolean))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_PDJDGPGNCNG_OFFSET))(this, a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGBCNCNAAFA_TOSTRING_OFFSET))(this);
		}

	};
