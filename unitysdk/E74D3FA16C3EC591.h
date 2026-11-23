#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E74D3FA16C3EC591_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1E97120)
#define E74D3FA16C3EC591__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E74D3FA16C3EC591_TypeDefinitionIndex = 6697;

class E74D3FA16C3EC591 : public ::System::Object
{
public:
	::System::Boolean E75D5ACD709677B7; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 EC3E42FF95A3C3BF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E74D3FA16C3EC591__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E74D3FA16C3EC591* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E74D3FA16C3EC591*))((::PBYTE)hIl2Cpp + E74D3FA16C3EC591_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
