#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/MJAHJAHHJEG.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CIAENAKKAAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xF6C70)
#define CIAENAKKAAP_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C44F80)
#define CIAENAKKAAP_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C44FF0)
#define CIAENAKKAAP_CTOR_OFFSET UNITYSDK_OFFSET(0x3C44F50)
#define CIAENAKKAAP_FODAAJJGAGL_OFFSET UNITYSDK_OFFSET(0x1DCFA580)
#define CIAENAKKAAP_GCPFJFHGCJA_1_OFFSET UNITYSDK_OFFSET(0x3C45190)
#define CIAENAKKAAP_GCPFJFHGCJA_2_OFFSET UNITYSDK_OFFSET(0x3C451A0)
#define CIAENAKKAAP_GCPFJFHGCJA_OFFSET UNITYSDK_OFFSET(0x3C450B0)
#define CIAENAKKAAP_HOBEGLFEDIC_OFFSET UNITYSDK_OFFSET(0x3C451B0)
#define CIAENAKKAAP_IJGGBHGAGHL_1_OFFSET UNITYSDK_OFFSET(0x3C45410)
#define CIAENAKKAAP_IJGGBHGAGHL_OFFSET UNITYSDK_OFFSET(0x3C45400)
#define CIAENAKKAAP_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C451D0)
#define CIAENAKKAAP_JNOBFOBKDBM_OFFSET UNITYSDK_OFFSET(0x3C45060)
#define CIAENAKKAAP_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C45210)
#define CIAENAKKAAP_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x3C45320)
#define CIAENAKKAAP_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3C45250)
#define CIAENAKKAAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C45440)

inline static constexpr unsigned int CIAENAKKAAP_TypeDefinitionIndex = 6281;

	struct alignas(4) CIAENAKKAAP
	{
		::RPG::MVector2 BHCMCMADHBF; // 0x10
		::RPG::MVector2 IIGAMHGPKGE; // 0x18
		::RPG::MVector2 KBBHCJKLPHH; // 0x20
		::RPG::MVector2 JKGICKONCKE; // 0x28
		::System::Void _ctor(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CIAENAKKAAP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CIAENAKKAAP_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::MJAHJAHHJEG a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJAHJAHHJEG))((::PBYTE)hIl2Cpp + CIAENAKKAAP_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::MJAHJAHHJEG a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJAHJAHHJEG))((::PBYTE)hIl2Cpp + CIAENAKKAAP_CTOR_3_OFFSET))(this, a1);
		}

		/*
		static ::CIAENAKKAAP FODAAJJGAGL(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1)
		{
			return ((::CIAENAKKAAP(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + CIAENAKKAAP_FODAAJJGAGL_OFFSET))(a1);
		}
		*/

		::RPG::MVector2 JNOBFOBKDBM(::System::Int32 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIAENAKKAAP_JNOBFOBKDBM_OFFSET))(this, a1);
		}

		::System::Void GCPFJFHGCJA(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CIAENAKKAAP_GCPFJFHGCJA_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::RPG::MVector2>* GCPFJFHGCJA_1()
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAENAKKAAP_GCPFJFHGCJA_1_OFFSET))(this);
		}

		::System::Void GCPFJFHGCJA_2(::Il2CppArray<::RPG::MVector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + CIAENAKKAAP_GCPFJFHGCJA_2_OFFSET))(this, a1);
		}

		::System::Single HOBEGLFEDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAENAKKAAP_HOBEGLFEDIC_OFFSET))(this);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CIAENAKKAAP_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector2 LBDJFNDMMOA(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CIAENAKKAAP_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CIAENAKKAAP_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CIAENAKKAAP_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		/*
		::System::Void IJGGBHGAGHL(::CIAENAKKAAP a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIAENAKKAAP))((::PBYTE)hIl2Cpp + CIAENAKKAAP_IJGGBHGAGHL_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void IJGGBHGAGHL_1(::CIAENAKKAAP a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIAENAKKAAP))((::PBYTE)hIl2Cpp + CIAENAKKAAP_IJGGBHGAGHL_1_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAENAKKAAP_TOSTRING_OFFSET))(this);
		}

	};
