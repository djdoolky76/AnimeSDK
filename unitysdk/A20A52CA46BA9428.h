#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define A20A52CA46BA9428_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FEC150)
#define A20A52CA46BA9428__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A20A52CA46BA9428_TypeDefinitionIndex = 8122;

class A20A52CA46BA9428 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* ACB3DA8A693C194F; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A20A52CA46BA9428* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A20A52CA46BA9428*))((::PBYTE)hIl2Cpp + A20A52CA46BA9428_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A20A52CA46BA9428__CTOR_OFFSET))(this);
	}
};
