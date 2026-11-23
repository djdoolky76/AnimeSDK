#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F0A2E64DC3F67064_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F1AD90)
#define F0A2E64DC3F67064__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F0A2E64DC3F67064_TypeDefinitionIndex = 8717;

class F0A2E64DC3F67064 : public ::System::Object
{
public:
	::System::UInt32 B6D830E728161DE3; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F0A2E64DC3F67064* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F0A2E64DC3F67064*))((::PBYTE)hIl2Cpp + F0A2E64DC3F67064_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0A2E64DC3F67064__CTOR_OFFSET))(this);
	}
};
