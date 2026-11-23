#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A615DF401F80FABD;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }

#define A615DF401F80FABD_F33A29707C992160_FC87D7A1689C7151_OFFSET UNITYSDK_OFFSET(0x39A0300)
#define A615DF401F80FABD_F33A29707C992160__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A615DF401F80FABD_F33A29707C992160_TypeDefinitionIndex = 12545;

class A615DF401F80FABD_F33A29707C992160 : public ::System::Object
{
public:
	::A615DF401F80FABD* A544919C800E2923; // 0x10
	::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A615DF401F80FABD_F33A29707C992160__CTOR_OFFSET))(this);
	}

	::System::Void FC87D7A1689C7151(::MiHoYo::SDK::NetworkResponseModel* E225F8A5D4C22E30)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A615DF401F80FABD_F33A29707C992160_FC87D7A1689C7151_OFFSET))(this, E225F8A5D4C22E30);
	}
};
