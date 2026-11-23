#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E4D030742A4A1CA8;
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }

#define E4D030742A4A1CA8_A04637AF7AEC1593_F5891030E53C0138_OFFSET UNITYSDK_OFFSET(0x3A68F80)
#define E4D030742A4A1CA8_A04637AF7AEC1593__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4D030742A4A1CA8_A04637AF7AEC1593_TypeDefinitionIndex = 13043;

class E4D030742A4A1CA8_A04637AF7AEC1593 : public ::System::Object
{
public:
	::E4D030742A4A1CA8* A544919C800E2923; // 0x10
	::System::Action* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_A04637AF7AEC1593__CTOR_OFFSET))(this);
	}

	::System::Void F5891030E53C0138(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_A04637AF7AEC1593_F5891030E53C0138_OFFSET))(this, A6CAE7339066B0FB);
	}
};
