#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

#define EB9430F037CF2753_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EF1510)
#define EB9430F037CF2753__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB9430F037CF2753_TypeDefinitionIndex = 7429;

class EB9430F037CF2753 : public ::System::Object
{
public:
	::System::UInt32 B0F7112F6783445E; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::EB9430F037CF2753* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::EB9430F037CF2753*))((::PBYTE)hIl2Cpp + EB9430F037CF2753_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB9430F037CF2753__CTOR_OFFSET))(this);
	}
};
