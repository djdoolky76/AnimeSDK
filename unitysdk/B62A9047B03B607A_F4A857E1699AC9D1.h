#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B62A9047B03B607A;
namespace MiHoYo::SDK { class AccountModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B62A9047B03B607A_F4A857E1699AC9D1_AC90B1F1F88C3BAC_OFFSET UNITYSDK_OFFSET(0x3B0CB90)
#define B62A9047B03B607A_F4A857E1699AC9D1_AF566FE53BD8B2A9_OFFSET UNITYSDK_OFFSET(0x3B0CA80)
#define B62A9047B03B607A_F4A857E1699AC9D1_E9DACD9000A2B521_OFFSET UNITYSDK_OFFSET(0x3B0CAD0)
#define B62A9047B03B607A_F4A857E1699AC9D1_FD5BF6F3890B8EF1_OFFSET UNITYSDK_OFFSET(0x3B0CDD0)
#define B62A9047B03B607A_F4A857E1699AC9D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B62A9047B03B607A_F4A857E1699AC9D1_TypeDefinitionIndex = 12264;

class B62A9047B03B607A_F4A857E1699AC9D1 : public ::System::Object
{
public:
	::B62A9047B03B607A* A544919C800E2923; // 0x10
	::System::String* A659FB88768169A1; // 0x18
	::MiHoYo::SDK::AccountModel* B44B7249A0CEA238; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F4A857E1699AC9D1__CTOR_OFFSET))(this);
	}

	::System::Void AF566FE53BD8B2A9(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F4A857E1699AC9D1_AF566FE53BD8B2A9_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void E9DACD9000A2B521(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F4A857E1699AC9D1_E9DACD9000A2B521_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void AC90B1F1F88C3BAC(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F4A857E1699AC9D1_AC90B1F1F88C3BAC_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}

	::System::Void FD5BF6F3890B8EF1(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F4A857E1699AC9D1_FD5BF6F3890B8EF1_OFFSET))(this, E41EB813C7FB644A, E04D2BE64FCE9814);
	}
};
