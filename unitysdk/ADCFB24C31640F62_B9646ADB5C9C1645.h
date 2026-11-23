#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define ADCFB24C31640F62_B9646ADB5C9C1645_E453207EF9BF4B0A_OFFSET UNITYSDK_OFFSET(0x3A43530)
#define ADCFB24C31640F62_B9646ADB5C9C1645__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADCFB24C31640F62_B9646ADB5C9C1645_TypeDefinitionIndex = 12955;

class ADCFB24C31640F62_B9646ADB5C9C1645 : public ::System::Object
{
public:
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_B9646ADB5C9C1645__CTOR_OFFSET))(this);
	}

	::System::Void E453207EF9BF4B0A(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_B9646ADB5C9C1645_E453207EF9BF4B0A_OFFSET))(this, A6CAE7339066B0FB);
	}
};
