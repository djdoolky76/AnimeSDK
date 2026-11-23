#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }

#define F3F08B203D851D60_AC3F6F1AAC01FA09_E0D6C7D162CC7D24_OFFSET UNITYSDK_OFFSET(0x3988400)
#define F3F08B203D851D60_AC3F6F1AAC01FA09__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_AC3F6F1AAC01FA09_TypeDefinitionIndex = 12503;

class F3F08B203D851D60_AC3F6F1AAC01FA09 : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::String* BD2C65BCCC92F212; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_AC3F6F1AAC01FA09__CTOR_OFFSET))(this);
	}

	::System::Void E0D6C7D162CC7D24(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_AC3F6F1AAC01FA09_E0D6C7D162CC7D24_OFFSET))(this, A6CAE7339066B0FB);
	}
};
