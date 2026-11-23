#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define F5D0B0F830F1638C_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FC2B10)
#define F5D0B0F830F1638C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F5D0B0F830F1638C_TypeDefinitionIndex = 6821;

class F5D0B0F830F1638C : public ::System::Object
{
public:
	::System::UInt32 EA419ACEC47ED087; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F5D0B0F830F1638C* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F5D0B0F830F1638C*))((::PBYTE)hIl2Cpp + F5D0B0F830F1638C_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5D0B0F830F1638C__CTOR_OFFSET))(this);
	}
};
