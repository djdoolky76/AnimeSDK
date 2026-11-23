#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_FE2CBCAA6ADCE589.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class Alert_E1B694816E36FF55; }
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_AB497C01C12A1134_A46F4B5F110D15F2_OFFSET UNITYSDK_OFFSET(0x38D3550)
#define B993816ABB9C394A_AB497C01C12A1134_A6C2038F66FA6E43_OFFSET UNITYSDK_OFFSET(0x38D3410)
#define B993816ABB9C394A_AB497C01C12A1134_F5C4D6C6EB3526EB_OFFSET UNITYSDK_OFFSET(0x38D37C0)
#define B993816ABB9C394A_AB497C01C12A1134_FC13ECFE453AD95A_OFFSET UNITYSDK_OFFSET(0x38D2470)
#define B993816ABB9C394A_AB497C01C12A1134__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_AB497C01C12A1134_TypeDefinitionIndex = 11736;

class B993816ABB9C394A_AB497C01C12A1134 : public ::System::Object
{
public:
	::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* A55C1996E9795A80; // 0x10
	::B993816ABB9C394A* A544919C800E2923; // 0x18
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x20
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* BB4C6B882CA82BAF; // 0x28
	::System::Action* BFD343A0EA70E6B3; // 0x30
	::MiHoYo::SDK::Alert_E1B694816E36FF55* BDCB87964C751DB1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_AB497C01C12A1134__CTOR_OFFSET))(this);
	}

	::System::Void FC13ECFE453AD95A(::MiHoYo::SDK::NetworkResponseModel* BC19BCEE7D937085)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_AB497C01C12A1134_FC13ECFE453AD95A_OFFSET))(this, BC19BCEE7D937085);
	}

	::System::Void A46F4B5F110D15F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_AB497C01C12A1134_A46F4B5F110D15F2_OFFSET))(this);
	}

	::System::Void F5C4D6C6EB3526EB(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* A8A64C573D7FC99A)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_AB497C01C12A1134_F5C4D6C6EB3526EB_OFFSET))(this, A8A64C573D7FC99A);
	}

	::System::Void A6C2038F66FA6E43(::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_FE2CBCAA6ADCE589))((::PBYTE)hIl2Cpp + B993816ABB9C394A_AB497C01C12A1134_A6C2038F66FA6E43_OFFSET))(this, E82293C0814051A5);
	}
};
