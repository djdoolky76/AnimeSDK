#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define JOHLECDICBB_CFGFCPADKKP_OFFSET UNITYSDK_OFFSET(0x3C4AC30)
#define JOHLECDICBB_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C4AD50)
#define JOHLECDICBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C4AA70)
#define JOHLECDICBB_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C4AB50)
#define JOHLECDICBB_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C4ABC0)
#define JOHLECDICBB_CTOR_OFFSET UNITYSDK_OFFSET(0x3C4A990)
#define JOHLECDICBB_JBMLAFEGFCB_OFFSET UNITYSDK_OFFSET(0x3C4ACF0)
#define JOHLECDICBB_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4ADA0)
#define JOHLECDICBB_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4ADE0)
#define JOHLECDICBB_NLAMKFKKBNA_OFFSET UNITYSDK_OFFSET(0x3C4ABC0)
#define JOHLECDICBB_PGOEIOCEJIG_OFFSET UNITYSDK_OFFSET(0x3C4AA70)
#define JOHLECDICBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4AED0)

inline static constexpr unsigned int JOHLECDICBB_TypeDefinitionIndex = 6299;

	struct alignas(4) JOHLECDICBB
	{
		::RPG::MVector3 AKFGOEJBPLD; // 0x10
		::RPG::MVector3 DIBFEBGIHCH; // 0x1C
		::RPG::MVector3 BHCMCMADHBF; // 0x28
		::RPG::MVector3 LJDHGFECMHJ; // 0x34
		::System::Single CLMMMEAIKBD; // 0x40
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JOHLECDICBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JOHLECDICBB_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + JOHLECDICBB_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + JOHLECDICBB_CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGOEIOCEJIG(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JOHLECDICBB_PGOEIOCEJIG_OFFSET))(this, a1, a2);
		}

		::System::Void NLAMKFKKBNA(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + JOHLECDICBB_NLAMKFKKBNA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFGFCPADKKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHLECDICBB_CFGFCPADKKP_OFFSET))(this);
		}

		::System::Void JBMLAFEGFCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHLECDICBB_JBMLAFEGFCB_OFFSET))(this);
		}

		::RPG::MVector3 CNENKBFFPDC(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JOHLECDICBB_CNENKBFFPDC_OFFSET))(this, a1);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JOHLECDICBB_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector3 LBDJFNDMMOA(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JOHLECDICBB_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHLECDICBB_TOSTRING_OFFSET))(this);
		}

	};
