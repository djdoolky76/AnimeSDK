#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MRect.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MJAHJAHHJEG_AIJENAHHIJB_1_OFFSET UNITYSDK_OFFSET(0x1DD44FD0)
#define MJAHJAHHJEG_AIJENAHHIJB_OFFSET UNITYSDK_OFFSET(0x1DD44FC0)
#define MJAHJAHHJEG_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DD44F80)
#define MJAHJAHHJEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x10400)
#define MJAHJAHHJEG_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C4D200)
#define MJAHJAHHJEG_CTOR_OFFSET UNITYSDK_OFFSET(0x3C49F50)
#define MJAHJAHHJEG_FODAAJJGAGL_1_OFFSET UNITYSDK_OFFSET(0x1DD36130)
#define MJAHJAHHJEG_FODAAJJGAGL_2_OFFSET UNITYSDK_OFFSET(0x1DD450A0)
#define MJAHJAHHJEG_FODAAJJGAGL_OFFSET UNITYSDK_OFFSET(0x1DD357F0)
#define MJAHJAHHJEG_GCPFJFHGCJA_1_OFFSET UNITYSDK_OFFSET(0x3C4D280)
#define MJAHJAHHJEG_GCPFJFHGCJA_2_OFFSET UNITYSDK_OFFSET(0x3C4D290)
#define MJAHJAHHJEG_GCPFJFHGCJA_OFFSET UNITYSDK_OFFSET(0x3C4D250)
#define MJAHJAHHJEG_HOBEGLFEDIC_OFFSET UNITYSDK_OFFSET(0x3C4D2F0)
#define MJAHJAHHJEG_IJGGBHGAGHL_1_OFFSET UNITYSDK_OFFSET(0x3C4D4E0)
#define MJAHJAHHJEG_IJGGBHGAGHL_2_OFFSET UNITYSDK_OFFSET(0x3C4D530)
#define MJAHJAHHJEG_IJGGBHGAGHL_3_OFFSET UNITYSDK_OFFSET(0x3C4D5C0)
#define MJAHJAHHJEG_IJGGBHGAGHL_OFFSET UNITYSDK_OFFSET(0x3C4D490)
#define MJAHJAHHJEG_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4D310)
#define MJAHJAHHJEG_JOOOBBFOHEH_OFFSET UNITYSDK_OFFSET(0x3C4D220)
#define MJAHJAHHJEG_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4D3A0)
#define MJAHJAHHJEG_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x3C4D450)
#define MJAHJAHHJEG_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3C4D410)
#define MJAHJAHHJEG_NIFEPGPLKLD_1_OFFSET UNITYSDK_OFFSET(0x1DD45010)
#define MJAHJAHHJEG_NIFEPGPLKLD_OFFSET UNITYSDK_OFFSET(0x1DD44FE0)
#define MJAHJAHHJEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4D650)

inline static constexpr unsigned int MJAHJAHHJEG_TypeDefinitionIndex = 6280;

	struct alignas(4) MJAHJAHHJEG
	{
		::RPG::MVector2 EFNAJMADAHM; // 0x10
		::RPG::MVector2 NKAACMGNNPK; // 0x18
		::System::Void _ctor(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		static ::MJAHJAHHJEG BBNJCKPKPDN(::RPG::MRect a1)
		{
			return ((::MJAHJAHHJEG(*)(::RPG::MRect))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::MJAHJAHHJEG AIJENAHHIJB(::RPG::MVector2 a1)
		{
			return ((::MJAHJAHHJEG(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_AIJENAHHIJB_OFFSET))(a1);
		}
		*/

		/*
		static ::MJAHJAHHJEG AIJENAHHIJB_1(::RPG::MVector2 a1)
		{
			return ((::MJAHJAHHJEG(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_AIJENAHHIJB_1_OFFSET))(a1);
		}
		*/

		/*
		static ::MJAHJAHHJEG NIFEPGPLKLD(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::MJAHJAHHJEG(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_NIFEPGPLKLD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::MJAHJAHHJEG NIFEPGPLKLD_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::MJAHJAHHJEG(*)(::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_NIFEPGPLKLD_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::MJAHJAHHJEG FODAAJJGAGL(::System::Collections::Generic::IEnumerable_1<::RPG::MVector2>* a1)
		{
			return ((::MJAHJAHHJEG(*)(::System::Collections::Generic::IEnumerable_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_FODAAJJGAGL_OFFSET))(a1);
		}
		*/

		/*
		static ::MJAHJAHHJEG FODAAJJGAGL_1(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1)
		{
			return ((::MJAHJAHHJEG(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_FODAAJJGAGL_1_OFFSET))(a1);
		}
		*/

		/*
		static ::MJAHJAHHJEG FODAAJJGAGL_2(::Il2CppArray<::RPG::MVector2>* a1)
		{
			return ((::MJAHJAHHJEG(*)(::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_FODAAJJGAGL_2_OFFSET))(a1);
		}
		*/

		::System::Void JOOOBBFOHEH(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_JOOOBBFOHEH_OFFSET))(this, a1, a2);
		}

		::System::Void GCPFJFHGCJA(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_GCPFJFHGCJA_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::RPG::MVector2>* GCPFJFHGCJA_1()
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_GCPFJFHGCJA_1_OFFSET))(this);
		}

		::System::Void GCPFJFHGCJA_2(::Il2CppArray<::RPG::MVector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_GCPFJFHGCJA_2_OFFSET))(this, a1);
		}

		::System::Single HOBEGLFEDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_HOBEGLFEDIC_OFFSET))(this);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector2 LBDJFNDMMOA(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		::System::Void IJGGBHGAGHL(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_IJGGBHGAGHL_OFFSET))(this, a1);
		}

		::System::Void IJGGBHGAGHL_1(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_IJGGBHGAGHL_1_OFFSET))(this, a1);
		}

		/*
		::System::Void IJGGBHGAGHL_2(::MJAHJAHHJEG a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJAHJAHHJEG))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_IJGGBHGAGHL_2_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void IJGGBHGAGHL_3(::MJAHJAHHJEG a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJAHJAHHJEG))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_IJGGBHGAGHL_3_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAHJAHHJEG_TOSTRING_OFFSET))(this);
		}

	};
