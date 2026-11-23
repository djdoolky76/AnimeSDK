#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A7417194EED331E6_B00E6AA3C59AB62B_E20DAC1FCEF13CCF_OFFSET UNITYSDK_OFFSET(0x3A99850)
#define A7417194EED331E6_B00E6AA3C59AB62B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7417194EED331E6_B00E6AA3C59AB62B_TypeDefinitionIndex = 12006;

class A7417194EED331E6_B00E6AA3C59AB62B : public ::System::Object
{
public:
	::System::String* BC44D01FDCF9D2D6; // 0x10
	::System::String* A659FB88768169A1; // 0x18
	::System::String* BA2C9EFBD50F3212; // 0x20
	::System::String* B960AC235824C6C8; // 0x28
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7417194EED331E6_B00E6AA3C59AB62B__CTOR_OFFSET))(this);
	}

	::System::Void E20DAC1FCEF13CCF(::System::Int32 B714679C324FF96E, ::System::String* B4B6D6374ADCCE26)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + A7417194EED331E6_B00E6AA3C59AB62B_E20DAC1FCEF13CCF_OFFSET))(this, B714679C324FF96E, B4B6D6374ADCCE26);
	}
};
