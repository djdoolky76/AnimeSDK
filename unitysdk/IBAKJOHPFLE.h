#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define IBAKJOHPFLE_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C47790)
#define IBAKJOHPFLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15A0)
#define IBAKJOHPFLE_CTOR_OFFSET UNITYSDK_OFFSET(0x3C49BB0)
#define IBAKJOHPFLE_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C49BD0)
#define IBAKJOHPFLE_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C49D20)
#define IBAKJOHPFLE_NIFEPGPLKLD_1_OFFSET UNITYSDK_OFFSET(0x1DD62130)
#define IBAKJOHPFLE_NIFEPGPLKLD_OFFSET UNITYSDK_OFFSET(0x1DD62070)
#define IBAKJOHPFLE_PDJDGPGNCNG_OFFSET UNITYSDK_OFFSET(0x3C49E20)
#define IBAKJOHPFLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C49EE0)

inline static constexpr unsigned int IBAKJOHPFLE_TypeDefinitionIndex = 6293;

	struct alignas(4) IBAKJOHPFLE
	{
		::RPG::MVector3 BHCMCMADHBF; // 0x10
		::RPG::MVector3 LJDHGFECMHJ; // 0x1C
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_CTOR_1_OFFSET))(this, a1, a2);
		}

		/*
		static ::IBAKJOHPFLE NIFEPGPLKLD(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::IBAKJOHPFLE(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_NIFEPGPLKLD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::IBAKJOHPFLE NIFEPGPLKLD_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::IBAKJOHPFLE(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_NIFEPGPLKLD_1_OFFSET))(a1, a2);
		}
		*/

		::RPG::MVector3 CNENKBFFPDC(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_CNENKBFFPDC_OFFSET))(this, a1);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector3 LBDJFNDMMOA(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		/*
		::System::Single PDJDGPGNCNG(::IBAKJOHPFLE a1, ::System::Boolean a2)
		{
			return ((::System::Single(*)(::PVOID, ::IBAKJOHPFLE, ::System::Boolean))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_PDJDGPGNCNG_OFFSET))(this, a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAKJOHPFLE_TOSTRING_OFFSET))(this);
		}

	};
