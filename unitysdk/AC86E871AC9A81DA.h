#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B5EB3E539752A762;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AC86E871AC9A81DA_A05CEB3F8933149D_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AC86E871AC9A81DA_A837AC820B35CF58_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define AC86E871AC9A81DA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2352440)
#define AC86E871AC9A81DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AC86E871AC9A81DA_TypeDefinitionIndex = 3164;

class AC86E871AC9A81DA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::B5EB3E539752A762*>* BE6A3989BF2FED24; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::B5EB3E539752A762*>* A05CEB3F8933149D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::B5EB3E539752A762*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AC86E871AC9A81DA_A05CEB3F8933149D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC86E871AC9A81DA__CTOR_OFFSET))(this);
	}

	::System::Void A837AC820B35CF58(::System::Collections::Generic::Dictionary_2<::System::Int32, ::B5EB3E539752A762*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::B5EB3E539752A762*>*))((::PBYTE)hIl2Cpp + AC86E871AC9A81DA_A837AC820B35CF58_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AC86E871AC9A81DA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AC86E871AC9A81DA*&))((::PBYTE)hIl2Cpp + AC86E871AC9A81DA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
