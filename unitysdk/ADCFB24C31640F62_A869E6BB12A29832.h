#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADCFB24C31640F62;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ADCFB24C31640F62_A869E6BB12A29832_AD8B729AC9E895EA_OFFSET UNITYSDK_OFFSET(0x3A43590)
#define ADCFB24C31640F62_A869E6BB12A29832__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADCFB24C31640F62_A869E6BB12A29832_TypeDefinitionIndex = 12956;

class ADCFB24C31640F62_A869E6BB12A29832 : public ::System::Object
{
public:
	::ADCFB24C31640F62* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_A869E6BB12A29832__CTOR_OFFSET))(this);
	}

	::System::Void AD8B729AC9E895EA(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_A869E6BB12A29832_AD8B729AC9E895EA_OFFSET))(this, A6CAE7339066B0FB);
	}
};
