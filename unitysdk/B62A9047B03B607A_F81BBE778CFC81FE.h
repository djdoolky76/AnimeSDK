#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B62A9047B03B607A;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define B62A9047B03B607A_F81BBE778CFC81FE_A43C22F0DE527855_OFFSET UNITYSDK_OFFSET(0x3B0D720)
#define B62A9047B03B607A_F81BBE778CFC81FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B62A9047B03B607A_F81BBE778CFC81FE_TypeDefinitionIndex = 12267;

class B62A9047B03B607A_F81BBE778CFC81FE : public ::System::Object
{
public:
	::B62A9047B03B607A* A544919C800E2923; // 0x10
	::System::String* EAE533E9B4BAEB61; // 0x18
	::System::String* B714679C324FF96E; // 0x20
	::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F81BBE778CFC81FE__CTOR_OFFSET))(this);
	}

	::System::Void A43C22F0DE527855(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F81BBE778CFC81FE_A43C22F0DE527855_OFFSET))(this, A6CAE7339066B0FB);
	}
};
