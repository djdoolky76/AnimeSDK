#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FAE24810320E6066;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADCED6062835DFC4_FA079206F1855950_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define ADCED6062835DFC4_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25FE9E0)
#define ADCED6062835DFC4_FE9E42E41D770021_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define ADCED6062835DFC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADCED6062835DFC4_TypeDefinitionIndex = 5783;

class ADCED6062835DFC4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FAE24810320E6066*>* E571F0E65DF3B7CD; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::ADCED6062835DFC4*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::ADCED6062835DFC4*&))((::PBYTE)hIl2Cpp + ADCED6062835DFC4_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FAE24810320E6066*>* FA079206F1855950()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::FAE24810320E6066*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCED6062835DFC4_FA079206F1855950_OFFSET))(this);
	}

	::System::Void FE9E42E41D770021(::System::Collections::Generic::Dictionary_2<::System::Int32, ::FAE24810320E6066*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::FAE24810320E6066*>*))((::PBYTE)hIl2Cpp + ADCED6062835DFC4_FE9E42E41D770021_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCED6062835DFC4__CTOR_OFFSET))(this);
	}
};
