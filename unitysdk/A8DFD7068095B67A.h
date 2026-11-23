#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define A8DFD7068095B67A_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2097B00)
#define A8DFD7068095B67A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8DFD7068095B67A_TypeDefinitionIndex = 8527;

class A8DFD7068095B67A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* BAA0196520856083; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8DFD7068095B67A__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A8DFD7068095B67A* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A8DFD7068095B67A*))((::PBYTE)hIl2Cpp + A8DFD7068095B67A_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
