#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }

#define F3F08B203D851D60_A255E737E50C343B_F2FDA93FE5742BC3_OFFSET UNITYSDK_OFFSET(0x3988620)
#define F3F08B203D851D60_A255E737E50C343B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_A255E737E50C343B_TypeDefinitionIndex = 12504;

class F3F08B203D851D60_A255E737E50C343B : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::String* BD2C65BCCC92F212; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_A255E737E50C343B__CTOR_OFFSET))(this);
	}

	::System::Void F2FDA93FE5742BC3(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_A255E737E50C343B_F2FDA93FE5742BC3_OFFSET))(this, A6CAE7339066B0FB);
	}
};
