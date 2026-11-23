#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E4D030742A4A1CA8;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E4D030742A4A1CA8_B19EF8A9CE02FAF9_EDDADE32D11C68F0_OFFSET UNITYSDK_OFFSET(0x3A68C60)
#define E4D030742A4A1CA8_B19EF8A9CE02FAF9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4D030742A4A1CA8_B19EF8A9CE02FAF9_TypeDefinitionIndex = 13041;

class E4D030742A4A1CA8_B19EF8A9CE02FAF9 : public ::System::Object
{
public:
	::E4D030742A4A1CA8* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_B19EF8A9CE02FAF9__CTOR_OFFSET))(this);
	}

	::System::Void EDDADE32D11C68F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_B19EF8A9CE02FAF9_EDDADE32D11C68F0_OFFSET))(this);
	}
};
