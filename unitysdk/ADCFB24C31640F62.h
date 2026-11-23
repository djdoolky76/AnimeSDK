#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ADCFB24C31640F62_A49E0FA3B917F657_OFFSET UNITYSDK_OFFSET(0x3A2C030)
#define ADCFB24C31640F62_A592ED83E473D857_OFFSET UNITYSDK_OFFSET(0x3A2BC10)
#define ADCFB24C31640F62_BA374C3A99ACA9C4_OFFSET UNITYSDK_OFFSET(0x3A2C220)
#define ADCFB24C31640F62_E9D2E80BC0F1B135_OFFSET UNITYSDK_OFFSET(0x3A2BF00)
#define ADCFB24C31640F62_F2D8322DD9C80E59_OFFSET UNITYSDK_OFFSET(0x3A2CC60)
#define ADCFB24C31640F62_FD63768D046E277C_OFFSET UNITYSDK_OFFSET(0x3A2C740)
#define ADCFB24C31640F62_FEAAE4B47E207D95_OFFSET UNITYSDK_OFFSET(0x3A2CDD0)
#define ADCFB24C31640F62__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A2CFA0)
#define ADCFB24C31640F62__CTOR_OFFSET UNITYSDK_OFFSET(0x3A2D070)

inline static constexpr unsigned int ADCFB24C31640F62_TypeDefinitionIndex = 12961;

class ADCFB24C31640F62 : public ::System::Object
{
public:
	static ::ADCFB24C31640F62** StaticGet_EE999965A1D2099B()
	{
		return (::ADCFB24C31640F62**)Il2CppClass::FromTypeDefinitionIndex(ADCFB24C31640F62_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Boolean F26F8EF6E3478952; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 F66119E66C35ABE9; // 0x14
	::System::Boolean BE41041B9E291E71; // 0x18
	::System::Byte _padding1[0x7];
	::System::String* E4FB03000D89BC14; // 0x20
	::System::String* EAB8417E29AD0C6E; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADCFB24C31640F62__CCTOR_OFFSET))();
	}

	::System::Void F2D8322DD9C80E59(::System::String* A82F72570D9C70C2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_F2D8322DD9C80E59_OFFSET))(this, A82F72570D9C70C2, E04D2BE64FCE9814);
	}

	::System::Void A49E0FA3B917F657(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_A49E0FA3B917F657_OFFSET))(this, E04D2BE64FCE9814);
	}

	::System::Void BA374C3A99ACA9C4(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_BA374C3A99ACA9C4_OFFSET))(this, E04D2BE64FCE9814);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCFB24C31640F62__CTOR_OFFSET))(this);
	}

	::System::Void FEAAE4B47E207D95(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_FEAAE4B47E207D95_OFFSET))(this, F1BF0FE85E9DD584);
	}

	::System::Void FD63768D046E277C(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* A6CAE7339066B0FB, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_FD63768D046E277C_OFFSET))(this, A6CAE7339066B0FB, E04D2BE64FCE9814);
	}

	::System::Void E9D2E80BC0F1B135(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_E9D2E80BC0F1B135_OFFSET))(this, E04D2BE64FCE9814);
	}

	::System::Void A592ED83E473D857(::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_A592ED83E473D857_OFFSET))(this, E04D2BE64FCE9814);
	}
};
