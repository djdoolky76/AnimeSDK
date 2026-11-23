#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B8F24387E7315042.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E22DBA715E28D006;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BF3F8F5B803B54DA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2478DC0)
#define BF3F8F5B803B54DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF3F8F5B803B54DA_TypeDefinitionIndex = 4547;

class BF3F8F5B803B54DA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B8F24387E7315042, ::E22DBA715E28D006*>* BD6702FAB3F9170F; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E22DBA715E28D006*>* B3F8ABD0EB42C6C1; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BF3F8F5B803B54DA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BF3F8F5B803B54DA*&))((::PBYTE)hIl2Cpp + BF3F8F5B803B54DA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF3F8F5B803B54DA__CTOR_OFFSET))(this);
	}
};
