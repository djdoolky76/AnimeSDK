#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_AD7C2E9FA0D13169_E453207EF9BF4B0A_OFFSET UNITYSDK_OFFSET(0x38D7160)
#define B993816ABB9C394A_AD7C2E9FA0D13169__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_AD7C2E9FA0D13169_TypeDefinitionIndex = 11744;

class B993816ABB9C394A_AD7C2E9FA0D13169 : public ::System::Object
{
public:
	::B993816ABB9C394A* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_AD7C2E9FA0D13169__CTOR_OFFSET))(this);
	}

	::System::Void E453207EF9BF4B0A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_AD7C2E9FA0D13169_E453207EF9BF4B0A_OFFSET))(this, A6CAE7339066B0FB);
	}
};
