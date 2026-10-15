#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define PKIOGOHJILN_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C47790)
#define PKIOGOHJILN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15A0)
#define PKIOGOHJILN_CTOR_OFFSET UNITYSDK_OFFSET(0x3C49BB0)
#define PKIOGOHJILN_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C4D840)
#define PKIOGOHJILN_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C4D880)
#define PKIOGOHJILN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C4D950)

	struct alignas(4) PKIOGOHJILN
	{
		::RPG::MVector3 BHCMCMADHBF; // 0x10
		::RPG::MVector3 LJDHGFECMHJ; // 0x1C
		::System::Void _ctor(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + PKIOGOHJILN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + PKIOGOHJILN_CTOR_1_OFFSET))(this, a1, a2);
		}

		::RPG::MVector3 CNENKBFFPDC(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKIOGOHJILN_CNENKBFFPDC_OFFSET))(this, a1);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + PKIOGOHJILN_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector3 LBDJFNDMMOA(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + PKIOGOHJILN_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIOGOHJILN_TOSTRING_OFFSET))(this);
		}

	};
