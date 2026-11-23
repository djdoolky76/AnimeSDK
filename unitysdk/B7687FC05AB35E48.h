#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define B7687FC05AB35E48_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define B7687FC05AB35E48__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B7687FC05AB35E48_TypeDefinitionIndex = 8845;

class B7687FC05AB35E48 : public ::System::Object
{
public:
	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B7687FC05AB35E48* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B7687FC05AB35E48*))((::PBYTE)hIl2Cpp + B7687FC05AB35E48_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7687FC05AB35E48__CTOR_OFFSET))(this);
	}
};
