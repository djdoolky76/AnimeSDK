#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B38786FF5575F796;
class BB5A70C2B2162334;
class EB4D77796327FA23;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B433A82BB59DA31D_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EFC410)
#define B433A82BB59DA31D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1EFBFC0)
#define B433A82BB59DA31D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B433A82BB59DA31D_TypeDefinitionIndex = 7454;

class B433A82BB59DA31D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* F9AA8F309B46542D; // 0x10
	::System::UInt32 E606C9790E5BAC3B; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::B38786FF5575F796*>* A85C96976083ABCA; // 0x20
	::System::Collections::Generic::List_1<::BB5A70C2B2162334*>* F70E3C0A35397027; // 0x28
	::System::Collections::Generic::List_1<::EB4D77796327FA23*>* A78999E5B2B64BED; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* A45B8DFE09F2617D; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* BF99F58151581FEA; // 0x40

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B433A82BB59DA31D* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B433A82BB59DA31D*))((::PBYTE)hIl2Cpp + B433A82BB59DA31D_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B433A82BB59DA31D__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B433A82BB59DA31D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B433A82BB59DA31D*&))((::PBYTE)hIl2Cpp + B433A82BB59DA31D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
