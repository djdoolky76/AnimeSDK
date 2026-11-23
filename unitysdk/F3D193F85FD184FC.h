#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F3D193F85FD184FC_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F1FA50)
#define F3D193F85FD184FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3D193F85FD184FC_TypeDefinitionIndex = 7528;

class F3D193F85FD184FC : public ::System::Object
{
public:
	::System::UInt32 FE0E81BB2A5BB5F4; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F3D193F85FD184FC* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F3D193F85FD184FC*))((::PBYTE)hIl2Cpp + F3D193F85FD184FC_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3D193F85FD184FC__CTOR_OFFSET))(this);
	}
};
