#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
namespace System { class String; }

#define ALOKDONFPHJ_CFGFCPADKKP_OFFSET UNITYSDK_OFFSET(0x3C43A90)
#define ALOKDONFPHJ_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C43BC0)
#define ALOKDONFPHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C438E0)
#define ALOKDONFPHJ_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C439D0)
#define ALOKDONFPHJ_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C43A30)
#define ALOKDONFPHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x3C437F0)
#define ALOKDONFPHJ_JBMLAFEGFCB_OFFSET UNITYSDK_OFFSET(0x3C43B70)
#define ALOKDONFPHJ_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C43C00)
#define ALOKDONFPHJ_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C43D40)
#define ALOKDONFPHJ_NLAMKFKKBNA_OFFSET UNITYSDK_OFFSET(0x3C43A30)
#define ALOKDONFPHJ_PGOEIOCEJIG_OFFSET UNITYSDK_OFFSET(0x3C438E0)
#define ALOKDONFPHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C43E00)

inline static constexpr unsigned int ALOKDONFPHJ_TypeDefinitionIndex = 6287;

	struct alignas(4) ALOKDONFPHJ
	{
		::RPG::MVector2 AKFGOEJBPLD; // 0x10
		::RPG::MVector2 DIBFEBGIHCH; // 0x18
		::RPG::MVector2 BHCMCMADHBF; // 0x20
		::RPG::MVector2 LJDHGFECMHJ; // 0x28
		::System::Single CLMMMEAIKBD; // 0x30
		::System::Void _ctor(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGOEIOCEJIG(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_PGOEIOCEJIG_OFFSET))(this, a1, a2);
		}

		::System::Void NLAMKFKKBNA(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_NLAMKFKKBNA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFGFCPADKKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_CFGFCPADKKP_OFFSET))(this);
		}

		::System::Void JBMLAFEGFCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_JBMLAFEGFCB_OFFSET))(this);
		}

		::RPG::MVector2 CNENKBFFPDC(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_CNENKBFFPDC_OFFSET))(this, a1);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector2 LBDJFNDMMOA(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOKDONFPHJ_TOSTRING_OFFSET))(this);
		}

	};
