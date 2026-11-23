#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADCFB24C31640F62_A869E6BB12A29832;
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }

#define ADCFB24C31640F62_FD095C2AA374E5A8_EB95E2C550065B69_OFFSET UNITYSDK_OFFSET(0x3A43E10)
#define ADCFB24C31640F62_FD095C2AA374E5A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADCFB24C31640F62_FD095C2AA374E5A8_TypeDefinitionIndex = 12957;

class ADCFB24C31640F62_FD095C2AA374E5A8 : public ::System::Object
{
public:
	::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* A55C1996E9795A80; // 0x10
	::ADCFB24C31640F62_A869E6BB12A29832* A8791C2B0F6F977B; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_FD095C2AA374E5A8__CTOR_OFFSET))(this);
	}

	::System::Void EB95E2C550065B69(::MiHoYo::SDK::NetworkResponseModel* BC19BCEE7D937085)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_FD095C2AA374E5A8_EB95E2C550065B69_OFFSET))(this, BC19BCEE7D937085);
	}
};
