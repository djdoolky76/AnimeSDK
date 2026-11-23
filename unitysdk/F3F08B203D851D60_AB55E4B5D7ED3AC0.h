#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define F3F08B203D851D60_AB55E4B5D7ED3AC0_A494641375FE31DA_OFFSET UNITYSDK_OFFSET(0x3986890)
#define F3F08B203D851D60_AB55E4B5D7ED3AC0_EBA94612010B5A46_OFFSET UNITYSDK_OFFSET(0x3985810)
#define F3F08B203D851D60_AB55E4B5D7ED3AC0_EFA55B2E2260AEC2_OFFSET UNITYSDK_OFFSET(0x39866B0)
#define F3F08B203D851D60_AB55E4B5D7ED3AC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_AB55E4B5D7ED3AC0_TypeDefinitionIndex = 12501;

class F3F08B203D851D60_AB55E4B5D7ED3AC0 : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::String* E5ABD378DF0998D3; // 0x18
	::System::String* B0312146F9FCAF8E; // 0x20
	::System::Action_2<::System::String*, ::System::Boolean>* E09B0611C97A91F6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_AB55E4B5D7ED3AC0__CTOR_OFFSET))(this);
	}

	::System::Void EBA94612010B5A46(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_AB55E4B5D7ED3AC0_EBA94612010B5A46_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void A494641375FE31DA(::System::String* A659FB88768169A1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_AB55E4B5D7ED3AC0_A494641375FE31DA_OFFSET))(this, A659FB88768169A1);
	}

	::System::Void EFA55B2E2260AEC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_AB55E4B5D7ED3AC0_EFA55B2E2260AEC2_OFFSET))(this);
	}
};
