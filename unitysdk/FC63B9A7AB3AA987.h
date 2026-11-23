#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FC63B9A7AB3AA987_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FABFA0)
#define FC63B9A7AB3AA987__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC63B9A7AB3AA987_TypeDefinitionIndex = 7986;

class FC63B9A7AB3AA987 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* A675307BB09091A4; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FC63B9A7AB3AA987* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FC63B9A7AB3AA987*))((::PBYTE)hIl2Cpp + FC63B9A7AB3AA987_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC63B9A7AB3AA987__CTOR_OFFSET))(this);
	}
};
