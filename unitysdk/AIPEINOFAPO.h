#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define AIPEINOFAPO_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C42B40)
#define AIPEINOFAPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16F0)
#define AIPEINOFAPO_CTOR_OFFSET UNITYSDK_OFFSET(0x16F0)
#define AIPEINOFAPO_GDPPHFKNIPF_OFFSET UNITYSDK_OFFSET(0x3C42B20)
#define AIPEINOFAPO_HOBEGLFEDIC_OFFSET UNITYSDK_OFFSET(0x3C42B00)
#define AIPEINOFAPO_IJGGBHGAGHL_1_OFFSET UNITYSDK_OFFSET(0x3C42EC0)
#define AIPEINOFAPO_IJGGBHGAGHL_OFFSET UNITYSDK_OFFSET(0x3C42DC0)
#define AIPEINOFAPO_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C42C40)
#define AIPEINOFAPO_KMAELHIAIME_OFFSET UNITYSDK_OFFSET(0x1DD0B140)
#define AIPEINOFAPO_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C42CB0)
#define AIPEINOFAPO_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x3C42D70)
#define AIPEINOFAPO_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3C42D70)
#define AIPEINOFAPO_MDKHKFAKBLF_OFFSET UNITYSDK_OFFSET(0x1DD0B420)
#define AIPEINOFAPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C42FE0)

inline static constexpr unsigned int AIPEINOFAPO_TypeDefinitionIndex = 6300;

	struct alignas(4) AIPEINOFAPO
	{
		::RPG::MVector3 BHCMCMADHBF; // 0x10
		::System::Single IDKONBFPBLH; // 0x1C
		// static const ::System::Object EGNAHJNPALG; // 0x0
		::System::Void _ctor(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + AIPEINOFAPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + AIPEINOFAPO_CTOR_1_OFFSET))(this, a1, a2);
		}

		/*
		static ::System::Boolean KMAELHIAIME(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::AIPEINOFAPO a5)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::AIPEINOFAPO))((::PBYTE)hIl2Cpp + AIPEINOFAPO_KMAELHIAIME_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean MDKHKFAKBLF(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::AIPEINOFAPO a5)
		{
			return ((::System::Boolean(*)(::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3, ::AIPEINOFAPO))((::PBYTE)hIl2Cpp + AIPEINOFAPO_MDKHKFAKBLF_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		::System::Single HOBEGLFEDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPEINOFAPO_HOBEGLFEDIC_OFFSET))(this);
		}

		::System::Single GDPPHFKNIPF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPEINOFAPO_GDPPHFKNIPF_OFFSET))(this);
		}

		::RPG::MVector3 CNENKBFFPDC(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AIPEINOFAPO_CNENKBFFPDC_OFFSET))(this, a1, a2);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + AIPEINOFAPO_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector3 LBDJFNDMMOA(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + AIPEINOFAPO_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + AIPEINOFAPO_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + AIPEINOFAPO_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		/*
		::System::Void IJGGBHGAGHL(::AIPEINOFAPO a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIPEINOFAPO))((::PBYTE)hIl2Cpp + AIPEINOFAPO_IJGGBHGAGHL_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void IJGGBHGAGHL_1(::AIPEINOFAPO a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIPEINOFAPO))((::PBYTE)hIl2Cpp + AIPEINOFAPO_IJGGBHGAGHL_1_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPEINOFAPO_TOSTRING_OFFSET))(this);
		}

	};
