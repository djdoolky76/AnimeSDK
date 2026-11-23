#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define F3F08B203D851D60_A2827D22E81CEA5E_EF73CAE3D4FC8EE0_OFFSET UNITYSDK_OFFSET(0x39833F0)
#define F3F08B203D851D60_A2827D22E81CEA5E_F5891030E53C0138_OFFSET UNITYSDK_OFFSET(0x39831A0)
#define F3F08B203D851D60_A2827D22E81CEA5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_A2827D22E81CEA5E_TypeDefinitionIndex = 12497;

class F3F08B203D851D60_A2827D22E81CEA5E : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::Action* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_A2827D22E81CEA5E__CTOR_OFFSET))(this);
	}

	::System::Void EF73CAE3D4FC8EE0(::System::String* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_A2827D22E81CEA5E_EF73CAE3D4FC8EE0_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F5891030E53C0138(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_A2827D22E81CEA5E_F5891030E53C0138_OFFSET))(this, A6CAE7339066B0FB);
	}
};
