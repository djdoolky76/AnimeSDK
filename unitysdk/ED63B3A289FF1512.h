#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define ED63B3A289FF1512_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FED1B0)
#define ED63B3A289FF1512__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ED63B3A289FF1512_TypeDefinitionIndex = 8096;

class ED63B3A289FF1512 : public ::System::Object
{
public:
	::System::UInt32 FE9E16857C4A8CEB; // 0x10
	::System::UInt32 B97789B17D6C3701; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED63B3A289FF1512__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::ED63B3A289FF1512* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::ED63B3A289FF1512*))((::PBYTE)hIl2Cpp + ED63B3A289FF1512_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
