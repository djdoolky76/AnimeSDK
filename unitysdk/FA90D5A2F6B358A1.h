#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FA90D5A2F6B358A1_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EC9A80)
#define FA90D5A2F6B358A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA90D5A2F6B358A1_TypeDefinitionIndex = 7258;

class FA90D5A2F6B358A1 : public ::System::Object
{
public:
	::System::UInt32 E544943195A58FD9; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA90D5A2F6B358A1__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FA90D5A2F6B358A1* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FA90D5A2F6B358A1*))((::PBYTE)hIl2Cpp + FA90D5A2F6B358A1_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
