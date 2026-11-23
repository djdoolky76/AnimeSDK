#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F9868E34CF8E1205_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EC9A80)
#define F9868E34CF8E1205__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F9868E34CF8E1205_TypeDefinitionIndex = 8408;

class F9868E34CF8E1205 : public ::System::Object
{
public:
	::System::UInt32 EA7CFF2710F5BB56; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F9868E34CF8E1205* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F9868E34CF8E1205*))((::PBYTE)hIl2Cpp + F9868E34CF8E1205_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9868E34CF8E1205__CTOR_OFFSET))(this);
	}
};
