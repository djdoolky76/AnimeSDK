#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E2C0F4BBD584E55F;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define E2C0F4BBD584E55F_A88DF7E5443EDC17_E28D38D95BD1B619_OFFSET UNITYSDK_OFFSET(0x3A43310)
#define E2C0F4BBD584E55F_A88DF7E5443EDC17__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2C0F4BBD584E55F_A88DF7E5443EDC17_TypeDefinitionIndex = 12962;

class E2C0F4BBD584E55F_A88DF7E5443EDC17 : public ::System::Object
{
public:
	::E2C0F4BBD584E55F* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_A88DF7E5443EDC17__CTOR_OFFSET))(this);
	}

	::System::Void E28D38D95BD1B619(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E2C0F4BBD584E55F_A88DF7E5443EDC17_E28D38D95BD1B619_OFFSET))(this, A6CAE7339066B0FB);
	}
};
