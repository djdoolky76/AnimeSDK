#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class A95DE8256EE91C35;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A9162C4E764D808D_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x20634F0)
#define A9162C4E764D808D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9162C4E764D808D_TypeDefinitionIndex = 8361;

class A9162C4E764D808D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::A95DE8256EE91C35*>* EAB0723B94DEC8EB; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::A9162C4E764D808D* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::A9162C4E764D808D*))((::PBYTE)hIl2Cpp + A9162C4E764D808D_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9162C4E764D808D__CTOR_OFFSET))(this);
	}
};
