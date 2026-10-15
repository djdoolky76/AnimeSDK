#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define MGMHEKMJKBH_CNENKBFFPDC_1_OFFSET UNITYSDK_OFFSET(0x3C4C920)
#define MGMHEKMJKBH_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C4C840)
#define MGMHEKMJKBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4C630)
#define MGMHEKMJKBH_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C4C720)
#define MGMHEKMJKBH_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C4C790)
#define MGMHEKMJKBH_CTOR_OFFSET UNITYSDK_OFFSET(0x3C4C540)
#define MGMHEKMJKBH_FJKGLHIEPMO_OFFSET UNITYSDK_OFFSET(0x3C4C810)
#define MGMHEKMJKBH_HOBEGLFEDIC_OFFSET UNITYSDK_OFFSET(0x3C4C820)
#define MGMHEKMJKBH_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4CA00)
#define MGMHEKMJKBH_KMAELHIAIME_OFFSET UNITYSDK_OFFSET(0x1DD70F50)
#define MGMHEKMJKBH_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4CA60)
#define MGMHEKMJKBH_MDKHKFAKBLF_OFFSET UNITYSDK_OFFSET(0x1DD71380)
#define MGMHEKMJKBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4CAC0)

inline static constexpr unsigned int MGMHEKMJKBH_TypeDefinitionIndex = 6292;

	struct alignas(4) MGMHEKMJKBH
	{
		::RPG::MVector3 BHCMCMADHBF; // 0x10
		::RPG::MVector3 IIGAMHGPKGE; // 0x1C
		::RPG::MVector3 KBBHCJKLPHH; // 0x28
		::RPG::MVector3 NKDECDGECFL; // 0x34
		::System::Single IDKONBFPBLH; // 0x40
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		/*
		static ::System::Boolean KMAELHIAIME(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::MGMHEKMJKBH a4)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::MGMHEKMJKBH))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_KMAELHIAIME_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Boolean MDKHKFAKBLF(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::MGMHEKMJKBH a4)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::MGMHEKMJKBH))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_MDKHKFAKBLF_OFFSET))(a1, a2, a3, a4);
		}
		*/

		::System::Single FJKGLHIEPMO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_FJKGLHIEPMO_OFFSET))(this);
		}

		::System::Single HOBEGLFEDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_HOBEGLFEDIC_OFFSET))(this);
		}

		::RPG::MVector3 CNENKBFFPDC(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_CNENKBFFPDC_OFFSET))(this, a1);
		}

		::RPG::MVector3 CNENKBFFPDC_1(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_CNENKBFFPDC_1_OFFSET))(this, a1, a2);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector3 a1, ::System::Boolean a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_JDAPDOLJLPN_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 LBDJFNDMMOA(::RPG::MVector3 a1, ::System::Boolean a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_LBDJFNDMMOA_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMHEKMJKBH_TOSTRING_OFFSET))(this);
		}

	};
