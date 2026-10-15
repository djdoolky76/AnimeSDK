#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
namespace System { class String; }

#define GNGBMCNOLEO_CNENKBFFPDC_OFFSET UNITYSDK_OFFSET(0x3C49830)
#define GNGBMCNOLEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x10480)
#define GNGBMCNOLEO_CTOR_OFFSET UNITYSDK_OFFSET(0x3C49820)
#define GNGBMCNOLEO_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C49860)
#define GNGBMCNOLEO_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C499A0)
#define GNGBMCNOLEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C49A60)

	struct alignas(4) GNGBMCNOLEO
	{
		::RPG::MVector2 BHCMCMADHBF; // 0x10
		::RPG::MVector2 LJDHGFECMHJ; // 0x18
		::System::Void _ctor(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GNGBMCNOLEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GNGBMCNOLEO_CTOR_1_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 CNENKBFFPDC(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNGBMCNOLEO_CNENKBFFPDC_OFFSET))(this, a1);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GNGBMCNOLEO_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::RPG::MVector2 LBDJFNDMMOA(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GNGBMCNOLEO_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGBMCNOLEO_TOSTRING_OFFSET))(this);
		}

	};
