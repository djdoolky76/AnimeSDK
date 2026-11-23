#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/A5C04002CB329C1B.h"
#include "unitysdk/System/Runtime/InteropServices/E9B768CE6E5F399A.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define A05A0B8429AE4A78_A792763ECDA9ACF0_OFFSET UNITYSDK_OFFSET(0x3BCB3A0)
#define A05A0B8429AE4A78__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCB400)

inline static constexpr unsigned int A05A0B8429AE4A78_TypeDefinitionIndex = 11200;

class A05A0B8429AE4A78 : public ::System::Attribute
{
public:
	::System::String* F339C66DF4D9281D; // 0x10
	::System::String* A9A7C6F700AB5010; // 0x18
	::System::Type* B87E7E41038A1E6E; // 0x20
	::System::Type* B6AF119F4DF8A339; // 0x28
	::System::Runtime::InteropServices::A5C04002CB329C1B A9F75597CC86D411; // 0x30
	::System::Runtime::InteropServices::A5C04002CB329C1B EBB0A52CB9488D3B; // 0x34
	::System::Runtime::InteropServices::E9B768CE6E5F399A B4280F000D3140E8; // 0x38
	::System::Int32 B549162571B972E0; // 0x3C
	::System::Int32 A367C48955C3BFED; // 0x40
	::System::Int16 EC03399F24D3AFFD; // 0x44

	::System::Void _ctor(::System::Runtime::InteropServices::A5C04002CB329C1B FDDA6EBC30695FB3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::A5C04002CB329C1B))((::PBYTE)hIl2Cpp + A05A0B8429AE4A78__CTOR_OFFSET))(this, FDDA6EBC30695FB3);
	}

	::A05A0B8429AE4A78* A792763ECDA9ACF0()
	{
		return ((::A05A0B8429AE4A78*(*)(::PVOID))((::PBYTE)hIl2Cpp + A05A0B8429AE4A78_A792763ECDA9ACF0_OFFSET))(this);
	}
};
