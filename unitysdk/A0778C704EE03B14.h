#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define A0778C704EE03B14_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2265600)
#define A0778C704EE03B14__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0778C704EE03B14_TypeDefinitionIndex = 9230;

class A0778C704EE03B14 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* AD190BD2A77975BE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0778C704EE03B14__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A0778C704EE03B14* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A0778C704EE03B14*))((::PBYTE)hIl2Cpp + A0778C704EE03B14_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
