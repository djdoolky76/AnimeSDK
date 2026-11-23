#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/EA49133A438A47A1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define BF76B47CFA2094B1_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3C63DA0)
#define BF76B47CFA2094B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF76B47CFA2094B1_TypeDefinitionIndex = 11629;

class BF76B47CFA2094B1 : public ::System::Object
{
public:
	::System::Type* FA3C30FCF247A385; // 0x10
	::System::Int32 B220F235DE4D12AF; // 0x18
	::System::Reflection::EA49133A438A47A1 ABDE0F2A254CEB88; // 0x1C
	::System::Int32 BCC26B760D98FAB3; // 0x20
	::System::Int32 BB7B33B94760790F; // 0x24
	::System::Int32 FB1FC1D110DD24C9; // 0x28
	::System::Int32 A2D1A7C0A38CC8C0; // 0x2C

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BF76B47CFA2094B1_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF76B47CFA2094B1__CTOR_OFFSET))(this);
	}
};
