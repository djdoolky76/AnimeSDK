#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F911A6431650C75A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FA2433C917ED6997_EAB8900E0C97A128_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FA2433C917ED6997_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define FA2433C917ED6997_EDACACF4D04C0C87_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FA2433C917ED6997_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x246F0C0)
#define FA2433C917ED6997__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA2433C917ED6997_TypeDefinitionIndex = 4371;

class FA2433C917ED6997 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F911A6431650C75A*>* BFCC9F8ECD4C3FA4; // 0x10

	::System::Void EDACACF4D04C0C87(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F911A6431650C75A*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F911A6431650C75A*>*))((::PBYTE)hIl2Cpp + FA2433C917ED6997_EDACACF4D04C0C87_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA2433C917ED6997__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F911A6431650C75A*>* EAB8900E0C97A128()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F911A6431650C75A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FA2433C917ED6997_EAB8900E0C97A128_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F911A6431650C75A* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F911A6431650C75A*))((::PBYTE)hIl2Cpp + FA2433C917ED6997_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FA2433C917ED6997*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FA2433C917ED6997*&))((::PBYTE)hIl2Cpp + FA2433C917ED6997_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
