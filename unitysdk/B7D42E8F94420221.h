#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A7C3FBD81A623519;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B7D42E8F94420221_BC8D1AE90AC81132_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B7D42E8F94420221_BF296AC451E45B53_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B7D42E8F94420221_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B7D42E8F94420221_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x271BB90)
#define B7D42E8F94420221__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B7D42E8F94420221_TypeDefinitionIndex = 2923;

class B7D42E8F94420221 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7C3FBD81A623519*>* F4CADABD599F0145; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B7D42E8F94420221*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B7D42E8F94420221*&))((::PBYTE)hIl2Cpp + B7D42E8F94420221_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void BF296AC451E45B53(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7C3FBD81A623519*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7C3FBD81A623519*>*))((::PBYTE)hIl2Cpp + B7D42E8F94420221_BF296AC451E45B53_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::A7C3FBD81A623519* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A7C3FBD81A623519*))((::PBYTE)hIl2Cpp + B7D42E8F94420221_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7D42E8F94420221__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7C3FBD81A623519*>* BC8D1AE90AC81132()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A7C3FBD81A623519*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B7D42E8F94420221_BC8D1AE90AC81132_OFFSET))(this);
	}
};
