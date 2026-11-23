#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B993816ABB9C394A;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B993816ABB9C394A_FAF5D9FF9FFE2FDA_B0EE927ACDB8AAD2_OFFSET UNITYSDK_OFFSET(0x38D7BD0)
#define B993816ABB9C394A_FAF5D9FF9FFE2FDA_EBFD84A3ED63C825_OFFSET UNITYSDK_OFFSET(0x38D7C30)
#define B993816ABB9C394A_FAF5D9FF9FFE2FDA_F54E45DAE364789E_OFFSET UNITYSDK_OFFSET(0x38D7B70)
#define B993816ABB9C394A_FAF5D9FF9FFE2FDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B993816ABB9C394A_FAF5D9FF9FFE2FDA_TypeDefinitionIndex = 11751;

class B993816ABB9C394A_FAF5D9FF9FFE2FDA : public ::System::Object
{
public:
	::B993816ABB9C394A* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_FAF5D9FF9FFE2FDA__CTOR_OFFSET))(this);
	}

	::System::Void F54E45DAE364789E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_FAF5D9FF9FFE2FDA_F54E45DAE364789E_OFFSET))(this);
	}

	::System::Void B0EE927ACDB8AAD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B993816ABB9C394A_FAF5D9FF9FFE2FDA_B0EE927ACDB8AAD2_OFFSET))(this);
	}

	::System::Void EBFD84A3ED63C825(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB, ::MiHoYo::SDK::AccountModel* AE11B914AE12D7B2)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + B993816ABB9C394A_FAF5D9FF9FFE2FDA_EBFD84A3ED63C825_OFFSET))(this, A6CAE7339066B0FB, AE11B914AE12D7B2);
	}
};
