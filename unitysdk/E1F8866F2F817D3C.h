#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define E1F8866F2F817D3C_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x22AD8C0)
#define E1F8866F2F817D3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E1F8866F2F817D3C_TypeDefinitionIndex = 7140;

class E1F8866F2F817D3C : public ::System::Object
{
public:
	::System::UInt32 F4D528450C395F00; // 0x10
	::System::UInt32 EA419ACEC47ED087; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1F8866F2F817D3C__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E1F8866F2F817D3C* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E1F8866F2F817D3C*))((::PBYTE)hIl2Cpp + E1F8866F2F817D3C_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
