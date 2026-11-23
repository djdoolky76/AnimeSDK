#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDA47E9122ADA10E_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FE8410)
#define BDA47E9122ADA10E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BDA47E9122ADA10E_TypeDefinitionIndex = 8148;

class BDA47E9122ADA10E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* F62CBA8E8C09B4B5; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::BDA47E9122ADA10E* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::BDA47E9122ADA10E*))((::PBYTE)hIl2Cpp + BDA47E9122ADA10E_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDA47E9122ADA10E__CTOR_OFFSET))(this);
	}
};
