#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }

#define B993816ABB9C394A_A5EAC2C45B1D7379_F034F545E719F311_OFFSET UNITYSDK_OFFSET(0x38D71E0)
#define B993816ABB9C394A_A5EAC2C45B1D7379__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_A5EAC2C45B1D7379_TypeDefinitionIndex = 11745;

class B993816ABB9C394A_A5EAC2C45B1D7379 : public ::System::Object
{
public:
	::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* A55C1996E9795A80; // 0x10
	::B993816ABB9C394A* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_A5EAC2C45B1D7379__CTOR_OFFSET))(this);
	}

	::System::Void F034F545E719F311(::MiHoYo::SDK::NetworkResponseModel* BC19BCEE7D937085)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_A5EAC2C45B1D7379_F034F545E719F311_OFFSET))(this, BC19BCEE7D937085);
	}
};
