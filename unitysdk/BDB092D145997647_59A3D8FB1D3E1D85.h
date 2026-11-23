#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDB092D145997647_59A3D8FB1D3E1D85_F4442D1B596987D2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BDB092D145997647_59A3D8FB1D3E1D85_A84718FE6445BA80_OFFSET UNITYSDK_OFFSET(0x1F3C050)

inline static constexpr unsigned int BDB092D145997647_59A3D8FB1D3E1D85_TypeDefinitionIndex = 12030;

class BDB092D145997647_59A3D8FB1D3E1D85 : public ::System::Object
{
public:
	static ::BDB092D145997647_59A3D8FB1D3E1D85_F4442D1B596987D2* StaticGet_AB9A919C701CF3E3()
	{
		return (::BDB092D145997647_59A3D8FB1D3E1D85_F4442D1B596987D2*)Il2CppClass::FromTypeDefinitionIndex(BDB092D145997647_59A3D8FB1D3E1D85_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int64* StaticGet_E2381A7E5D53280A()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(BDB092D145997647_59A3D8FB1D3E1D85_TypeDefinitionIndex)->GetStaticField(0x30);
	}

	static ::System::UInt32 A84718FE6445BA80(::System::String* B9AEC57275825552)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + BDB092D145997647_59A3D8FB1D3E1D85_A84718FE6445BA80_OFFSET))(B9AEC57275825552);
	}
};
