#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B62A9047B03B607A;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B62A9047B03B607A_F3505EE069C6453E_B03B4E7BD6E1CFC1_OFFSET UNITYSDK_OFFSET(0x3B0B800)
#define B62A9047B03B607A_F3505EE069C6453E_B341C95EF8EAA239_OFFSET UNITYSDK_OFFSET(0x3B0B7B0)
#define B62A9047B03B607A_F3505EE069C6453E_BCCAE87B232F21B2_OFFSET UNITYSDK_OFFSET(0x3B0BA10)
#define B62A9047B03B607A_F3505EE069C6453E_F8A639736E429D87_OFFSET UNITYSDK_OFFSET(0x3B0BDB0)
#define B62A9047B03B607A_F3505EE069C6453E_FA01CE7D525FB5C6_OFFSET UNITYSDK_OFFSET(0x3B0B8C0)
#define B62A9047B03B607A_F3505EE069C6453E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B62A9047B03B607A_F3505EE069C6453E_TypeDefinitionIndex = 12260;

class B62A9047B03B607A_F3505EE069C6453E : public ::System::Object
{
public:
	::B62A9047B03B607A* A544919C800E2923; // 0x10
	::MiHoYo::SDK::AccountModel* B44B7249A0CEA238; // 0x18
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E8981049E69F2A59; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F3505EE069C6453E__CTOR_OFFSET))(this);
	}

	::System::Void B341C95EF8EAA239(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F3505EE069C6453E_B341C95EF8EAA239_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void B03B4E7BD6E1CFC1(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F3505EE069C6453E_B03B4E7BD6E1CFC1_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void FA01CE7D525FB5C6(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F3505EE069C6453E_FA01CE7D525FB5C6_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void BCCAE87B232F21B2(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F3505EE069C6453E_BCCAE87B232F21B2_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void F8A639736E429D87(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F3505EE069C6453E_F8A639736E429D87_OFFSET))(this, A6CAE7339066B0FB);
	}
};
