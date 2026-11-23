#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F2ED7362B14BE716;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F2ED7362B14BE716_EAFDC34AF1F6D340_E0C800B0AEA33B66_OFFSET UNITYSDK_OFFSET(0x3A973E0)
#define F2ED7362B14BE716_EAFDC34AF1F6D340__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F2ED7362B14BE716_EAFDC34AF1F6D340_TypeDefinitionIndex = 12032;

class F2ED7362B14BE716_EAFDC34AF1F6D340 : public ::System::Object
{
public:
	::F2ED7362B14BE716* A544919C800E2923; // 0x10
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_EAFDC34AF1F6D340__CTOR_OFFSET))(this);
	}

	::System::Void E0C800B0AEA33B66(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + F2ED7362B14BE716_EAFDC34AF1F6D340_E0C800B0AEA33B66_OFFSET))(this, A6CAE7339066B0FB);
	}
};
