#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B62A9047B03B607A_F3505EE069C6453E;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B62A9047B03B607A_A5914C96FF1D519F_A06333B46DDCE997_OFFSET UNITYSDK_OFFSET(0x3B0BF30)
#define B62A9047B03B607A_A5914C96FF1D519F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B62A9047B03B607A_A5914C96FF1D519F_TypeDefinitionIndex = 12261;

class B62A9047B03B607A_A5914C96FF1D519F : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10
	::B62A9047B03B607A_F3505EE069C6453E* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_A5914C96FF1D519F__CTOR_OFFSET))(this);
	}

	::System::Void A06333B46DDCE997(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_A5914C96FF1D519F_A06333B46DDCE997_OFFSET))(this, A6CAE7339066B0FB);
	}
};
