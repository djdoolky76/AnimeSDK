#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define LCDAJHBDCPB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x78CF50)
#define LCDAJHBDCPB_EJDOJCCONIL_OFFSET UNITYSDK_OFFSET(0x1683AE50)
#define LCDAJHBDCPB_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x78CF00)
#define LCDAJHBDCPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x78CEF0)
#define LCDAJHBDCPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1683ADE0)
#define LCDAJHBDCPB__CTOR_OFFSET UNITYSDK_OFFSET(0x78CED0)

inline static constexpr unsigned int LCDAJHBDCPB_TypeDefinitionIndex = 50778;

struct alignas(8) LCDAJHBDCPB
{
	static ::LCDAJHBDCPB* StaticGet_DDGNFJDLOKA()
	{
		return (::LCDAJHBDCPB*)Il2CppClass::FromTypeDefinitionIndex(LCDAJHBDCPB_TypeDefinitionIndex)->GetStaticField(0x48450);
	}
	::System::Single FJJFHLHBGNC; // 0x10
	::System::Single GPCMDJGHDIN; // 0x14
	::System::String* HDOCFDPEPIG; // 0x18

	::System::Void _ctor(::System::Single LKJDEFGJAFA, ::System::Single OGGLFBDOPJF, ::System::String*& PMEPAMEPPEB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*&))((::PBYTE)hIl2Cpp + LCDAJHBDCPB__CTOR_OFFSET))(this, LKJDEFGJAFA, OGGLFBDOPJF, PMEPAMEPPEB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCDAJHBDCPB__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDAJHBDCPB_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDAJHBDCPB_PNNJKJEOHAL_OFFSET))(this);
	}

	/*
	static ::System::Single EJDOJCCONIL(::LCDAJHBDCPB& DFMKILICPFB, ::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Vector3& ONDCOIKBNIO)
	{
		return ((::System::Single(*)(::LCDAJHBDCPB&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LCDAJHBDCPB_EJDOJCCONIL_OFFSET))(DFMKILICPFB, OHOGDOMNHNK, ONDCOIKBNIO);
	}
	*/

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDAJHBDCPB_DPIHOJBBGLA_OFFSET))(this);
	}
};
