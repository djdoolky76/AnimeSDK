#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B02E27E0FCF18E2F_EE41A6C39A24D4BE;
namespace MiHoYo::SDK { class NetworkResponseModelEx; }

#define B02E27E0FCF18E2F_F3DE3B9FB6644259_AF4C0E01BCA22BBD_OFFSET UNITYSDK_OFFSET(0x39A1B50)
#define B02E27E0FCF18E2F_F3DE3B9FB6644259__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B02E27E0FCF18E2F_F3DE3B9FB6644259_TypeDefinitionIndex = 12519;

class B02E27E0FCF18E2F_F3DE3B9FB6644259 : public ::System::Object
{
public:
	::MiHoYo::SDK::NetworkResponseModelEx* A6CAE7339066B0FB; // 0x10
	::B02E27E0FCF18E2F_EE41A6C39A24D4BE* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B02E27E0FCF18E2F_F3DE3B9FB6644259__CTOR_OFFSET))(this);
	}

	::System::Void AF4C0E01BCA22BBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B02E27E0FCF18E2F_F3DE3B9FB6644259_AF4C0E01BCA22BBD_OFFSET))(this);
	}
};
