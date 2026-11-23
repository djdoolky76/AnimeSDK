#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A09D52494A00B5B3_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1E9CC10)
#define A09D52494A00B5B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A09D52494A00B5B3_TypeDefinitionIndex = 8818;

class A09D52494A00B5B3 : public ::System::Object
{
public:
	::System::UInt32 AB665CBA4E9CE0E6; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A09D52494A00B5B3__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A09D52494A00B5B3* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A09D52494A00B5B3*))((::PBYTE)hIl2Cpp + A09D52494A00B5B3_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
