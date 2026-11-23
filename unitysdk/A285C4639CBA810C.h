#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define A285C4639CBA810C_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EC9A80)
#define A285C4639CBA810C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A285C4639CBA810C_TypeDefinitionIndex = 7336;

class A285C4639CBA810C : public ::System::Object
{
public:
	::System::UInt32 B0A276ED025965C2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A285C4639CBA810C__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A285C4639CBA810C* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A285C4639CBA810C*))((::PBYTE)hIl2Cpp + A285C4639CBA810C_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
