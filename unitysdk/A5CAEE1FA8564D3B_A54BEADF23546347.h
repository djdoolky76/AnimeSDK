#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A5CAEE1FA8564D3B;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A5CAEE1FA8564D3B_A54BEADF23546347_A05372E18BF9A96F_OFFSET UNITYSDK_OFFSET(0x3AC7C50)
#define A5CAEE1FA8564D3B_A54BEADF23546347_BD689641005BD05F_OFFSET UNITYSDK_OFFSET(0x3AC76E0)
#define A5CAEE1FA8564D3B_A54BEADF23546347__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A5CAEE1FA8564D3B_A54BEADF23546347_TypeDefinitionIndex = 12114;

class A5CAEE1FA8564D3B_A54BEADF23546347 : public ::System::Object
{
public:
	::A5CAEE1FA8564D3B* A544919C800E2923; // 0x10
	::System::String* BA7E0D21DF11D129; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x20
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* BDCB87964C751DB1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_A54BEADF23546347__CTOR_OFFSET))(this);
	}

	::System::Void BD689641005BD05F(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_A54BEADF23546347_BD689641005BD05F_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void A05372E18BF9A96F(::MiHoYo::SDK::NetworkResponseModel* A84898E6B54198F3)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A5CAEE1FA8564D3B_A54BEADF23546347_A05372E18BF9A96F_OFFSET))(this, A84898E6B54198F3);
	}
};
