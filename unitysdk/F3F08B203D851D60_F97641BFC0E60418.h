#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F3F08B203D851D60;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class String; }

#define F3F08B203D851D60_F97641BFC0E60418_ECC2628A1A8351A1_OFFSET UNITYSDK_OFFSET(0x3988840)
#define F3F08B203D851D60_F97641BFC0E60418__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3F08B203D851D60_F97641BFC0E60418_TypeDefinitionIndex = 12505;

class F3F08B203D851D60_F97641BFC0E60418 : public ::System::Object
{
public:
	::F3F08B203D851D60* A544919C800E2923; // 0x10
	::System::String* A701B33D1D009AC6; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3F08B203D851D60_F97641BFC0E60418__CTOR_OFFSET))(this);
	}

	::System::Void ECC2628A1A8351A1(::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + F3F08B203D851D60_F97641BFC0E60418_ECC2628A1A8351A1_OFFSET))(this, A6CAE7339066B0FB);
	}
};
