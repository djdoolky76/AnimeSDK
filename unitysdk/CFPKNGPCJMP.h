#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define CFPKNGPCJMP_CDLJDCNDLKC_1_OFFSET UNITYSDK_OFFSET(0x1798BDD0)
#define CFPKNGPCJMP_CDLJDCNDLKC_2_OFFSET UNITYSDK_OFFSET(0x1798BF80)
#define CFPKNGPCJMP_CDLJDCNDLKC_OFFSET UNITYSDK_OFFSET(0x3DE4F80)
#define CFPKNGPCJMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DE4D70)
#define CFPKNGPCJMP_CTOR_OFFSET UNITYSDK_OFFSET(0x3DE4D40)
#define CFPKNGPCJMP_HOBEGLFEDIC_1_OFFSET UNITYSDK_OFFSET(0x1798BAE0)
#define CFPKNGPCJMP_HOBEGLFEDIC_2_OFFSET UNITYSDK_OFFSET(0x1798BB80)
#define CFPKNGPCJMP_HOBEGLFEDIC_OFFSET UNITYSDK_OFFSET(0x3DE4EE0)
#define CFPKNGPCJMP_JAEEMFANBNB_1_OFFSET UNITYSDK_OFFSET(0x3DE5360)
#define CFPKNGPCJMP_JAEEMFANBNB_2_OFFSET UNITYSDK_OFFSET(0x3DE53D0)
#define CFPKNGPCJMP_JAEEMFANBNB_OFFSET UNITYSDK_OFFSET(0x3DE5300)
#define CFPKNGPCJMP_JBLANOJCNLN_OFFSET UNITYSDK_OFFSET(0x3DE4DD0)
#define CFPKNGPCJMP_JIEOOKCIJNC_1_OFFSET UNITYSDK_OFFSET(0x1798C300)
#define CFPKNGPCJMP_JIEOOKCIJNC_2_OFFSET UNITYSDK_OFFSET(0x1798C4E0)
#define CFPKNGPCJMP_JIEOOKCIJNC_OFFSET UNITYSDK_OFFSET(0x3DE5130)
#define CFPKNGPCJMP_KBIOEOCGKFA_1_OFFSET UNITYSDK_OFFSET(0x3DE5430)
#define CFPKNGPCJMP_KBIOEOCGKFA_2_OFFSET UNITYSDK_OFFSET(0x3DE5490)
#define CFPKNGPCJMP_KBIOEOCGKFA_OFFSET UNITYSDK_OFFSET(0x1798C800)
#define CFPKNGPCJMP_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x3DE4D10)
#define CFPKNGPCJMP_OMCANBPAEFF_OFFSET UNITYSDK_OFFSET(0x3DE4E60)
#define CFPKNGPCJMP_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3DE4CD0)
#define CFPKNGPCJMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3DE5500)

inline static constexpr unsigned int CFPKNGPCJMP_TypeDefinitionIndex = 6308;

	struct alignas(4) CFPKNGPCJMP
	{
		::RPG::MVector3 KIGGGJGOIGD; // 0x10
		::RPG::MVector3 IJMIFGGPKEB; // 0x1C
		::RPG::MVector3 GCHJMKEGBOC; // 0x28
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector3 PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 JBLANOJCNLN(::System::Int32 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_JBLANOJCNLN_OFFSET))(this, a1);
		}

		::RPG::MVector3 OMCANBPAEFF()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_OMCANBPAEFF_OFFSET))(this);
		}

		::System::Single HOBEGLFEDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_HOBEGLFEDIC_OFFSET))(this);
		}

		static ::System::Single HOBEGLFEDIC_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_HOBEGLFEDIC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Single HOBEGLFEDIC_2(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_HOBEGLFEDIC_2_OFFSET))(a1, a2, a3);
		}

		::RPG::MVector3 CDLJDCNDLKC()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_CDLJDCNDLKC_OFFSET))(this);
		}

		static ::RPG::MVector3 CDLJDCNDLKC_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_CDLJDCNDLKC_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector3 CDLJDCNDLKC_2(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_CDLJDCNDLKC_2_OFFSET))(a1, a2, a3);
		}

		::RPG::MVector3 JIEOOKCIJNC()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_JIEOOKCIJNC_OFFSET))(this);
		}

		static ::RPG::MVector3 JIEOOKCIJNC_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_JIEOOKCIJNC_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector3 JIEOOKCIJNC_2(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_JIEOOKCIJNC_2_OFFSET))(a1, a2, a3);
		}

		::RPG::MVector3 JAEEMFANBNB(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_JAEEMFANBNB_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 JAEEMFANBNB_1(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_JAEEMFANBNB_1_OFFSET))(this, a1);
		}

		::RPG::MVector3 JAEEMFANBNB_2(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_JAEEMFANBNB_2_OFFSET))(this, a1);
		}

		static ::System::Void KBIOEOCGKFA(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_KBIOEOCGKFA_OFFSET))(a1, a2, a3, a4, a5);
		}

		::RPG::MVector3 KBIOEOCGKFA_1(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_KBIOEOCGKFA_1_OFFSET))(this, a1);
		}

		::RPG::MVector3 KBIOEOCGKFA_2(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_KBIOEOCGKFA_2_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPKNGPCJMP_TOSTRING_OFFSET))(this);
		}

	};
