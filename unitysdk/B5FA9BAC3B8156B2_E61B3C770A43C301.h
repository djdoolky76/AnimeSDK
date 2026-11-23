#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B5FA9BAC3B8156B2;
namespace MiHoYo::SDK { class NetworkResponseModel; }

#define B5FA9BAC3B8156B2_E61B3C770A43C301__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B5FA9BAC3B8156B2_E61B3C770A43C301_TypeDefinitionIndex = 12013;

class B5FA9BAC3B8156B2_E61B3C770A43C301 : public ::System::Object
{
public:
	::B5FA9BAC3B8156B2* A544919C800E2923; // 0x10
	::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5FA9BAC3B8156B2_E61B3C770A43C301__CTOR_OFFSET))(this);
	}
};
