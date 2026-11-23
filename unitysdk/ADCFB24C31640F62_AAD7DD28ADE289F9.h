#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ADCFB24C31640F62_AAD7DD28ADE289F9_E6A41070AD3BB8D8_OFFSET UNITYSDK_OFFSET(0x3A44490)
#define ADCFB24C31640F62_AAD7DD28ADE289F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ADCFB24C31640F62_AAD7DD28ADE289F9_TypeDefinitionIndex = 12958;

class ADCFB24C31640F62_AAD7DD28ADE289F9 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_AAD7DD28ADE289F9__CTOR_OFFSET))(this);
	}

	::System::Void E6A41070AD3BB8D8(::MiHoYo::SDK::CallbackModel_1<::System::String*>* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + ADCFB24C31640F62_AAD7DD28ADE289F9_E6A41070AD3BB8D8_OFFSET))(this, A6CAE7339066B0FB);
	}
};
