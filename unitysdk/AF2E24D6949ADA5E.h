#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B9CA25CA0B12B80B.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AF2E24D6949ADA5E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2325D90)
#define AF2E24D6949ADA5E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AF2E24D6949ADA5E_TypeDefinitionIndex = 2319;

class AF2E24D6949ADA5E : public ::B9CA25CA0B12B80B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FCA04DDE624E64FA; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* A2520EE9064D5D60; // 0x80

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AF2E24D6949ADA5E*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AF2E24D6949ADA5E*&))((::PBYTE)hIl2Cpp + AF2E24D6949ADA5E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF2E24D6949ADA5E__CTOR_OFFSET))(this);
	}
};
