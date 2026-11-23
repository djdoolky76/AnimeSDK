#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E470AEDE007EE27B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B950DE333EE14D4D_A8F089590FA00BC4_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B950DE333EE14D4D_AF2470BF4B899BB7_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B950DE333EE14D4D_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B950DE333EE14D4D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23C8770)
#define B950DE333EE14D4D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B950DE333EE14D4D_TypeDefinitionIndex = 3837;

class B950DE333EE14D4D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E470AEDE007EE27B*>* A23C5DC950FEF0C8; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E470AEDE007EE27B*>* AF2470BF4B899BB7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E470AEDE007EE27B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B950DE333EE14D4D_AF2470BF4B899BB7_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::E470AEDE007EE27B* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E470AEDE007EE27B*))((::PBYTE)hIl2Cpp + B950DE333EE14D4D_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B950DE333EE14D4D__CTOR_OFFSET))(this);
	}

	::System::Void A8F089590FA00BC4(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E470AEDE007EE27B*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E470AEDE007EE27B*>*))((::PBYTE)hIl2Cpp + B950DE333EE14D4D_A8F089590FA00BC4_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B950DE333EE14D4D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B950DE333EE14D4D*&))((::PBYTE)hIl2Cpp + B950DE333EE14D4D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
