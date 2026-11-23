#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }

#define A7417194EED331E6_B8FE15655745F3A8_A3CC31C24D8AA8D9_OFFSET UNITYSDK_OFFSET(0x3A98A10)
#define A7417194EED331E6_B8FE15655745F3A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7417194EED331E6_B8FE15655745F3A8_TypeDefinitionIndex = 12011;

class A7417194EED331E6_B8FE15655745F3A8 : public ::System::Object
{
public:
	::System::String* AF94CBD00018A704; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7417194EED331E6_B8FE15655745F3A8__CTOR_OFFSET))(this);
	}

	::System::Void A3CC31C24D8AA8D9(::MiHoYo::SDK::NetworkResponseModel* E225F8A5D4C22E30)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + A7417194EED331E6_B8FE15655745F3A8_A3CC31C24D8AA8D9_OFFSET))(this, E225F8A5D4C22E30);
	}
};
