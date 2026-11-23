#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A9283818EB057372;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B483C35E6906B914_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B483C35E6906B914_F148DC8E4A5A6001_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B483C35E6906B914_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24E9040)
#define B483C35E6906B914_FD4CE2E420154C97_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B483C35E6906B914__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B483C35E6906B914_TypeDefinitionIndex = 5022;

class B483C35E6906B914 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A9283818EB057372*>* A1010EF2649FA67E; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B483C35E6906B914__CTOR_OFFSET))(this);
	}

	::System::Void FD4CE2E420154C97(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A9283818EB057372*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A9283818EB057372*>*))((::PBYTE)hIl2Cpp + B483C35E6906B914_FD4CE2E420154C97_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::A9283818EB057372* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A9283818EB057372*))((::PBYTE)hIl2Cpp + B483C35E6906B914_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B483C35E6906B914*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B483C35E6906B914*&))((::PBYTE)hIl2Cpp + B483C35E6906B914_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A9283818EB057372*>* F148DC8E4A5A6001()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A9283818EB057372*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B483C35E6906B914_F148DC8E4A5A6001_OFFSET))(this);
	}
};
