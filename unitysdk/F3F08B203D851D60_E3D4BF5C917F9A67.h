#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }

#define F3F08B203D851D60_E3D4BF5C917F9A67_E2DD1D1C04A34635_OFFSET UNITYSDK_OFFSET(0x3988C80)
#define F3F08B203D851D60_E3D4BF5C917F9A67__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_E3D4BF5C917F9A67_TypeDefinitionIndex = 12507;

class F3F08B203D851D60_E3D4BF5C917F9A67 : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_E3D4BF5C917F9A67__CTOR_OFFSET))(this);
	}

	::System::Void E2DD1D1C04A34635(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_E3D4BF5C917F9A67_E2DD1D1C04A34635_OFFSET))(this, A6CAE7339066B0FB);
	}
};
