#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }

#define F3F08B203D851D60_A3F0C4721A6A2ADA_F20A7E2A8DB74666_OFFSET UNITYSDK_OFFSET(0x3988A60)
#define F3F08B203D851D60_A3F0C4721A6A2ADA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_A3F0C4721A6A2ADA_TypeDefinitionIndex = 12506;

class F3F08B203D851D60_A3F0C4721A6A2ADA : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::String* A701B33D1D009AC6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_A3F0C4721A6A2ADA__CTOR_OFFSET))(this);
	}

	::System::Void F20A7E2A8DB74666(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_A3F0C4721A6A2ADA_F20A7E2A8DB74666_OFFSET))(this, A6CAE7339066B0FB);
	}
};
