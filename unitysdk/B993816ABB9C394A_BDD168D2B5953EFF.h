#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_BDD168D2B5953EFF_ADB9A1BBD641FFC3_OFFSET UNITYSDK_OFFSET(0x38D0A70)
#define B993816ABB9C394A_BDD168D2B5953EFF_B0F0793220429754_OFFSET UNITYSDK_OFFSET(0x38D1A60)
#define B993816ABB9C394A_BDD168D2B5953EFF_B3CC7887E52CE49C_OFFSET UNITYSDK_OFFSET(0x38D1A60)
#define B993816ABB9C394A_BDD168D2B5953EFF_B90F2B94BE144545_OFFSET UNITYSDK_OFFSET(0x38D0390)
#define B993816ABB9C394A_BDD168D2B5953EFF_F141B3B251072E50_OFFSET UNITYSDK_OFFSET(0x38D1A90)
#define B993816ABB9C394A_BDD168D2B5953EFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_BDD168D2B5953EFF_TypeDefinitionIndex = 11733;

class B993816ABB9C394A_BDD168D2B5953EFF : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10
	::B993816ABB9C394A* A544919C800E2923; // 0x18
	::System::String* E5ABD378DF0998D3; // 0x20
	::System::String* E0FC22FC7C7790C3; // 0x28
	::System::String* B818DC27A4B3B150; // 0x30
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* BDCB87964C751DB1; // 0x38
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* E8ABFD1D9609DF22; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BDD168D2B5953EFF__CTOR_OFFSET))(this);
	}

	::System::Void B90F2B94BE144545(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BDD168D2B5953EFF_B90F2B94BE144545_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void ADB9A1BBD641FFC3(::MiHoYo::SDK::NetworkResponseModel* BC19BCEE7D937085)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BDD168D2B5953EFF_ADB9A1BBD641FFC3_OFFSET))(this, BC19BCEE7D937085);
	}

	::System::Void B0F0793220429754(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BDD168D2B5953EFF_B0F0793220429754_OFFSET))(this, A6CAE7339066B0FB);
	}

	::System::Void F141B3B251072E50()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BDD168D2B5953EFF_F141B3B251072E50_OFFSET))(this);
	}

	::System::Void B3CC7887E52CE49C(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_BDD168D2B5953EFF_B3CC7887E52CE49C_OFFSET))(this, A6CAE7339066B0FB);
	}
};
