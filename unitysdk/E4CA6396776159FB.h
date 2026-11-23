#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define E4CA6396776159FB_A88C5CFA71796B2B_OFFSET UNITYSDK_OFFSET(0x3BF34B0)
#define E4CA6396776159FB_A99604058CED76A6_OFFSET UNITYSDK_OFFSET(0x3BF34A0)
#define E4CA6396776159FB_B7482989D490E435_OFFSET UNITYSDK_OFFSET(0x3BF2FD0)
#define E4CA6396776159FB_B78EBBCA68670F9E_OFFSET UNITYSDK_OFFSET(0x3BF2F70)

inline static constexpr unsigned int E4CA6396776159FB_TypeDefinitionIndex = 11317;

class E4CA6396776159FB : public ::System::Object
{
public:
	static ::System::Exception* B78EBBCA68670F9E(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + E4CA6396776159FB_B78EBBCA68670F9E_OFFSET))(EFF983A80A48BB2A);
	}

	static ::System::String* A99604058CED76A6(::System::Int32 B3F53603F39CD6A9)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + E4CA6396776159FB_A99604058CED76A6_OFFSET))(B3F53603F39CD6A9);
	}

	static ::System::Int32 A88C5CFA71796B2B(::System::Int32 B3F53603F39CD6A9)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + E4CA6396776159FB_A88C5CFA71796B2B_OFFSET))(B3F53603F39CD6A9);
	}

	static ::System::Exception* B7482989D490E435(::System::Int32 B3F53603F39CD6A9, ::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Exception*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + E4CA6396776159FB_B7482989D490E435_OFFSET))(B3F53603F39CD6A9, EFF983A80A48BB2A);
	}
};
