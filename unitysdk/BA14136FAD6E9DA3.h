#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class EA77648C28DD33A3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BA14136FAD6E9DA3_B8D586B38C622EB5_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define BA14136FAD6E9DA3_F0CD0F8E3DE57FF8_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BA14136FAD6E9DA3_F73C35FF03FFF577_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BA14136FAD6E9DA3_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24959F0)
#define BA14136FAD6E9DA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA14136FAD6E9DA3_TypeDefinitionIndex = 4662;

class BA14136FAD6E9DA3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA77648C28DD33A3*>* AB2BE215B9915FCC; // 0x10

	static ::System::UInt32 B8D586B38C622EB5(::EA77648C28DD33A3* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::EA77648C28DD33A3*))((::PBYTE)hIl2Cpp + BA14136FAD6E9DA3_B8D586B38C622EB5_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BA14136FAD6E9DA3*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BA14136FAD6E9DA3*&))((::PBYTE)hIl2Cpp + BA14136FAD6E9DA3_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA14136FAD6E9DA3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA77648C28DD33A3*>* F0CD0F8E3DE57FF8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA77648C28DD33A3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BA14136FAD6E9DA3_F0CD0F8E3DE57FF8_OFFSET))(this);
	}

	::System::Void F73C35FF03FFF577(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA77648C28DD33A3*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EA77648C28DD33A3*>*))((::PBYTE)hIl2Cpp + BA14136FAD6E9DA3_F73C35FF03FFF577_OFFSET))(this, E937D4885DAA1AE8);
	}
};
