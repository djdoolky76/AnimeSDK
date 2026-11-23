#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define FA9D7410994A71C5_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1E9CC10)
#define FA9D7410994A71C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA9D7410994A71C5_TypeDefinitionIndex = 6705;

class FA9D7410994A71C5 : public ::System::Object
{
public:
	::System::UInt32 B0F7112F6783445E; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FA9D7410994A71C5* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FA9D7410994A71C5*))((::PBYTE)hIl2Cpp + FA9D7410994A71C5_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA9D7410994A71C5__CTOR_OFFSET))(this);
	}
};
