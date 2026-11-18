#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PONEGOPCLPF.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OLKGKACOHKM_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x129492D0)
#define OLKGKACOHKM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12949280)
#define OLKGKACOHKM__CTOR_OFFSET UNITYSDK_OFFSET(0x6EAA60)

inline static constexpr unsigned int OLKGKACOHKM_TypeDefinitionIndex = 68489;

struct alignas(8) OLKGKACOHKM
{
	static ::System::String** StaticGet_FAKOJBNDEKI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OLKGKACOHKM_TypeDefinitionIndex)->GetStaticField(0x4C920);
	}
	static ::System::UInt32* StaticGet_IAOEPPBDCLK()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OLKGKACOHKM_TypeDefinitionIndex)->GetStaticField(0x11C10);
	}
	::System::String* KIHGNGKBADE; // 0x10
	::System::Int32 HLBKHEFJAPH; // 0x18
	::System::UInt32 JPFKAIKHHOG; // 0x1C
	::PONEGOPCLPF PIOCAOJDNNK; // 0x20

	::System::Void _ctor(::System::String* AELLPLBJELA, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + OLKGKACOHKM__CTOR_OFFSET))(this, AELLPLBJELA, DKOFFFNEFJC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLKGKACOHKM__CCTOR_OFFSET))();
	}

	/*
	static ::System::Int32 NIIHMPMKICM(::OLKGKACOHKM EAIIOEDKBIO, ::OLKGKACOHKM NIFKJICJMNL)
	{
		return ((::System::Int32(*)(::OLKGKACOHKM, ::OLKGKACOHKM))((::PBYTE)hIl2Cpp + OLKGKACOHKM_NIIHMPMKICM_OFFSET))(EAIIOEDKBIO, NIFKJICJMNL);
	}
	*/
};
