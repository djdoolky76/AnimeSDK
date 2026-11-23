#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E7E121B42610183A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AADDC85D07437C46_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F532E0)
#define AADDC85D07437C46_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1F53090)
#define AADDC85D07437C46__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AADDC85D07437C46_TypeDefinitionIndex = 7688;

class AADDC85D07437C46 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* ADBEB857C74D9A5F; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* FCF033693F15C31B; // 0x18
	::System::Collections::Generic::List_1<::E7E121B42610183A*>* A12ABC2FD4EA2EEC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADDC85D07437C46__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AADDC85D07437C46*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AADDC85D07437C46*&))((::PBYTE)hIl2Cpp + AADDC85D07437C46_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AADDC85D07437C46* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AADDC85D07437C46*))((::PBYTE)hIl2Cpp + AADDC85D07437C46_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
