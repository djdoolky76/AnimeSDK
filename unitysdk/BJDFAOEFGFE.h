#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define BJDFAOEFGFE_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3C440E0)
#define BJDFAOEFGFE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DCE00D0)
#define BJDFAOEFGFE_CMIJHEFILAJ_OFFSET UNITYSDK_OFFSET(0x3C43F80)
#define BJDFAOEFGFE_DCMPJNEJHGO_1_OFFSET UNITYSDK_OFFSET(0x1DCDFE60)
#define BJDFAOEFGFE_DCMPJNEJHGO_OFFSET UNITYSDK_OFFSET(0x3C43E10)
#define BJDFAOEFGFE_JJPEKBAJKEL_OFFSET UNITYSDK_OFFSET(0x3C43F30)
#define BJDFAOEFGFE_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x2E890E0)
#define BJDFAOEFGFE_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0x3C441B0)
#define BJDFAOEFGFE_NJGIJEKCLDD_1_OFFSET UNITYSDK_OFFSET(0x1DCDFF50)
#define BJDFAOEFGFE_NJGIJEKCLDD_OFFSET UNITYSDK_OFFSET(0x3C43E90)
#define BJDFAOEFGFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C44010)

inline static constexpr unsigned int BJDFAOEFGFE_TypeDefinitionIndex = 6550;

	struct alignas(4) BJDFAOEFGFE
	{
		::System::Single EFNAJMADAHM; // 0x10
		::System::Single NKAACMGNNPK; // 0x14
		/*
		::BJDFAOEFGFE DCMPJNEJHGO(::BJDFAOEFGFE a1)
		{
			return ((::BJDFAOEFGFE(*)(::PVOID, ::BJDFAOEFGFE))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_DCMPJNEJHGO_OFFSET))(this, a1);
		}
		*/

		/*
		::BJDFAOEFGFE NJGIJEKCLDD(::BJDFAOEFGFE a1)
		{
			return ((::BJDFAOEFGFE(*)(::PVOID, ::BJDFAOEFGFE))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_NJGIJEKCLDD_OFFSET))(this, a1);
		}
		*/

		::System::Void JJPEKBAJKEL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_JJPEKBAJKEL_OFFSET))(this, a1);
		}

		/*
		::System::Boolean CMIJHEFILAJ(::BJDFAOEFGFE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJDFAOEFGFE))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_CMIJHEFILAJ_OFFSET))(this, a1);
		}
		*/

		::System::Boolean LCJMKJPECAP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_LCJMKJPECAP_OFFSET))(this, a1);
		}

		/*
		static ::BJDFAOEFGFE BPLPBPMEODA(::System::Single a1, ::System::Single a2)
		{
			return ((::BJDFAOEFGFE(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_BPLPBPMEODA_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::BJDFAOEFGFE DCMPJNEJHGO_1(::BJDFAOEFGFE a1, ::BJDFAOEFGFE a2)
		{
			return ((::BJDFAOEFGFE(*)(::BJDFAOEFGFE, ::BJDFAOEFGFE))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_DCMPJNEJHGO_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::BJDFAOEFGFE NJGIJEKCLDD_1(::BJDFAOEFGFE a1, ::BJDFAOEFGFE a2)
		{
			return ((::BJDFAOEFGFE(*)(::BJDFAOEFGFE, ::BJDFAOEFGFE))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_NJGIJEKCLDD_1_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		::System::Single LKEFCMNJDJI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDFAOEFGFE_LKEFCMNJDJI_OFFSET))(this);
		}

	};
