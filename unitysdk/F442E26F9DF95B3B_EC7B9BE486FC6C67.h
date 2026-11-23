#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEAC6217FF06E6B7.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F442E26F9DF95B3B_EC7B9BE486FC6C67_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x2731CB0)
#define F442E26F9DF95B3B_EC7B9BE486FC6C67__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F442E26F9DF95B3B_EC7B9BE486FC6C67_TypeDefinitionIndex = 3029;

class F442E26F9DF95B3B_EC7B9BE486FC6C67 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::EEAC6217FF06E6B7, ::System::Object*>* B96FEBE0E910939C; // 0x10

	::System::Int32 BCB0A4DD6EA3B4C9(::EEAC6217FF06E6B7 B35BBBE7E39341A2, ::EEAC6217FF06E6B7 AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::EEAC6217FF06E6B7, ::EEAC6217FF06E6B7))((::PBYTE)hIl2Cpp + F442E26F9DF95B3B_EC7B9BE486FC6C67_BCB0A4DD6EA3B4C9_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F442E26F9DF95B3B_EC7B9BE486FC6C67__CTOR_OFFSET))(this);
	}
};
