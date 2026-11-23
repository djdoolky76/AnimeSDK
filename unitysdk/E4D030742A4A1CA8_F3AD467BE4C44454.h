#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E4D030742A4A1CA8;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define E4D030742A4A1CA8_F3AD467BE4C44454_A528193FAD6479F1_OFFSET UNITYSDK_OFFSET(0x3A68BB0)
#define E4D030742A4A1CA8_F3AD467BE4C44454__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4D030742A4A1CA8_F3AD467BE4C44454_TypeDefinitionIndex = 13040;

class E4D030742A4A1CA8_F3AD467BE4C44454 : public ::System::Object
{
public:
	::E4D030742A4A1CA8* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_F3AD467BE4C44454__CTOR_OFFSET))(this);
	}

	::System::Void A528193FAD6479F1(::MiHoYo::SDK::CallbackModel_1<::System::String*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + E4D030742A4A1CA8_F3AD467BE4C44454_A528193FAD6479F1_OFFSET))(this, A6CAE7339066B0FB);
	}
};
