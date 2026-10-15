#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NNEFANGOPNK_AIJENAHHIJB_1_OFFSET UNITYSDK_OFFSET(0x1DD82560)
#define NNEFANGOPNK_AIJENAHHIJB_OFFSET UNITYSDK_OFFSET(0x1DD82510)
#define NNEFANGOPNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15A0)
#define NNEFANGOPNK_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C4CF30)
#define NNEFANGOPNK_CTOR_OFFSET UNITYSDK_OFFSET(0x3C49BB0)
#define NNEFANGOPNK_FODAAJJGAGL_1_OFFSET UNITYSDK_OFFSET(0x1DD82F50)
#define NNEFANGOPNK_FODAAJJGAGL_2_OFFSET UNITYSDK_OFFSET(0x1DD833C0)
#define NNEFANGOPNK_FODAAJJGAGL_OFFSET UNITYSDK_OFFSET(0x1DD82750)
#define NNEFANGOPNK_GCPFJFHGCJA_1_OFFSET UNITYSDK_OFFSET(0x3C4D0A0)
#define NNEFANGOPNK_GCPFJFHGCJA_2_OFFSET UNITYSDK_OFFSET(0x3C4D0B0)
#define NNEFANGOPNK_GCPFJFHGCJA_OFFSET UNITYSDK_OFFSET(0x3C4CFD0)
#define NNEFANGOPNK_GDPPHFKNIPF_OFFSET UNITYSDK_OFFSET(0x3C4D0C0)
#define NNEFANGOPNK_IJGGBHGAGHL_1_OFFSET UNITYSDK_OFFSET(0x3C4D320)
#define NNEFANGOPNK_IJGGBHGAGHL_2_OFFSET UNITYSDK_OFFSET(0x3C4D390)
#define NNEFANGOPNK_IJGGBHGAGHL_3_OFFSET UNITYSDK_OFFSET(0x3C4D460)
#define NNEFANGOPNK_IJGGBHGAGHL_OFFSET UNITYSDK_OFFSET(0x3C4D2B0)
#define NNEFANGOPNK_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4D0F0)
#define NNEFANGOPNK_JOOOBBFOHEH_OFFSET UNITYSDK_OFFSET(0x3C4CF70)
#define NNEFANGOPNK_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4D1B0)
#define NNEFANGOPNK_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x3C4D260)
#define NNEFANGOPNK_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3C4D260)
#define NNEFANGOPNK_NIFEPGPLKLD_1_OFFSET UNITYSDK_OFFSET(0x1DD82680)
#define NNEFANGOPNK_NIFEPGPLKLD_OFFSET UNITYSDK_OFFSET(0x1DD825B0)
#define NNEFANGOPNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4D540)

inline static constexpr unsigned int NNEFANGOPNK_TypeDefinitionIndex = 6289;

	struct alignas(4) NNEFANGOPNK
	{
		::RPG::MVector3 EFNAJMADAHM; // 0x10
		::RPG::MVector3 NKAACMGNNPK; // 0x1C
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NNEFANGOPNK_CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		/*
		static ::NNEFANGOPNK AIJENAHHIJB(::RPG::MVector3 a1)
		{
			return ((::NNEFANGOPNK(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_AIJENAHHIJB_OFFSET))(a1);
		}
		*/

		/*
		static ::NNEFANGOPNK AIJENAHHIJB_1(::RPG::MVector3 a1)
		{
			return ((::NNEFANGOPNK(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_AIJENAHHIJB_1_OFFSET))(a1);
		}
		*/

		/*
		static ::NNEFANGOPNK NIFEPGPLKLD(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::NNEFANGOPNK(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_NIFEPGPLKLD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::NNEFANGOPNK NIFEPGPLKLD_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::NNEFANGOPNK(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_NIFEPGPLKLD_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::NNEFANGOPNK FODAAJJGAGL(::System::Collections::Generic::IEnumerable_1<::RPG::MVector3>* a1)
		{
			return ((::NNEFANGOPNK(*)(::System::Collections::Generic::IEnumerable_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + NNEFANGOPNK_FODAAJJGAGL_OFFSET))(a1);
		}
		*/

		/*
		static ::NNEFANGOPNK FODAAJJGAGL_1(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1)
		{
			return ((::NNEFANGOPNK(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + NNEFANGOPNK_FODAAJJGAGL_1_OFFSET))(a1);
		}
		*/

		/*
		static ::NNEFANGOPNK FODAAJJGAGL_2(::Il2CppArray<::RPG::MVector3>* a1)
		{
			return ((::NNEFANGOPNK(*)(::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + NNEFANGOPNK_FODAAJJGAGL_2_OFFSET))(a1);
		}
		*/

		::System::Void JOOOBBFOHEH(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_JOOOBBFOHEH_OFFSET))(this, a1, a2);
		}

		::System::Void GCPFJFHGCJA(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5, ::RPG::MVector3 a6, ::RPG::MVector3 a7, ::RPG::MVector3 a8)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_GCPFJFHGCJA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::Il2CppArray<::RPG::MVector3>* GCPFJFHGCJA_1()
		{
			return ((::Il2CppArray<::RPG::MVector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEFANGOPNK_GCPFJFHGCJA_1_OFFSET))(this);
		}

		::System::Void GCPFJFHGCJA_2(::Il2CppArray<::RPG::MVector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + NNEFANGOPNK_GCPFJFHGCJA_2_OFFSET))(this, a1);
		}

		::System::Single GDPPHFKNIPF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEFANGOPNK_GDPPHFKNIPF_OFFSET))(this);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector3 LBDJFNDMMOA(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		::System::Void IJGGBHGAGHL(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_IJGGBHGAGHL_OFFSET))(this, a1);
		}

		::System::Void IJGGBHGAGHL_1(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNEFANGOPNK_IJGGBHGAGHL_1_OFFSET))(this, a1);
		}

		/*
		::System::Void IJGGBHGAGHL_2(::NNEFANGOPNK a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNEFANGOPNK))((::PBYTE)hIl2Cpp + NNEFANGOPNK_IJGGBHGAGHL_2_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void IJGGBHGAGHL_3(::NNEFANGOPNK a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNEFANGOPNK))((::PBYTE)hIl2Cpp + NNEFANGOPNK_IJGGBHGAGHL_3_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEFANGOPNK_TOSTRING_OFFSET))(this);
		}

	};
