#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F6671B17CF554966_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x21C5D30)
#define F6671B17CF554966__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6671B17CF554966_TypeDefinitionIndex = 8888;

class F6671B17CF554966 : public ::System::Object
{
public:
	::System::Boolean F4A105CC386707EC; // 0x10
	::System::Byte _padding0[0x7];
	::System::UInt64 A2590943AA298EA8; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F6671B17CF554966* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F6671B17CF554966*))((::PBYTE)hIl2Cpp + F6671B17CF554966_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6671B17CF554966__CTOR_OFFSET))(this);
	}
};
