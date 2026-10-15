#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define JJLLHAKBGJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4A700)
#define JJLLHAKBGJL_CTOR_OFFSET UNITYSDK_OFFSET(0x3C4A620)
#define JJLLHAKBGJL_FOGEEIENIJA_OFFSET UNITYSDK_OFFSET(0x1DD66A30)
#define JJLLHAKBGJL_GCPFJFHGCJA_1_OFFSET UNITYSDK_OFFSET(0x3C4A8A0)
#define JJLLHAKBGJL_GCPFJFHGCJA_2_OFFSET UNITYSDK_OFFSET(0x3C4A8B0)
#define JJLLHAKBGJL_GCPFJFHGCJA_OFFSET UNITYSDK_OFFSET(0x3C4A7E0)
#define JJLLHAKBGJL_HOBEGLFEDIC_OFFSET UNITYSDK_OFFSET(0x3C4A8C0)
#define JJLLHAKBGJL_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4A8E0)
#define JJLLHAKBGJL_KIICAMCBOPM_OFFSET UNITYSDK_OFFSET(0x1DD667A0)
#define JJLLHAKBGJL_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4A920)
#define JJLLHAKBGJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4A980)

inline static constexpr unsigned int JJLLHAKBGJL_TypeDefinitionIndex = 6298;

	struct alignas(4) JJLLHAKBGJL
	{
		::RPG::MVector3 BHCMCMADHBF; // 0x10
		::RPG::MVector3 IIGAMHGPKGE; // 0x1C
		::RPG::MVector3 KBBHCJKLPHH; // 0x28
		::RPG::MVector3 NKDECDGECFL; // 0x34
		::RPG::MVector2 JKGICKONCKE; // 0x40
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector2))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector2))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		/*
		static ::JJLLHAKBGJL KIICAMCBOPM(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
		{
			return ((::JJLLHAKBGJL(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_KIICAMCBOPM_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::JJLLHAKBGJL FOGEEIENIJA(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
		{
			return ((::JJLLHAKBGJL(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_FOGEEIENIJA_OFFSET))(a1, a2, a3, a4);
		}
		*/

		::System::Void GCPFJFHGCJA(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_GCPFJFHGCJA_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::RPG::MVector3>* GCPFJFHGCJA_1()
		{
			return ((::Il2CppArray<::RPG::MVector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_GCPFJFHGCJA_1_OFFSET))(this);
		}

		::System::Void GCPFJFHGCJA_2(::Il2CppArray<::RPG::MVector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_GCPFJFHGCJA_2_OFFSET))(this, a1);
		}

		::System::Single HOBEGLFEDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_HOBEGLFEDIC_OFFSET))(this);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector3 LBDJFNDMMOA(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLLHAKBGJL_TOSTRING_OFFSET))(this);
		}

	};
