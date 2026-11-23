#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define F7E8AD66E3B39722_B86D2EDFAFFAF56E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F7E8AD66E3B39722_B86D2EDFAFFAF56E__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

inline static constexpr unsigned int F7E8AD66E3B39722_B86D2EDFAFFAF56E_TypeDefinitionIndex = 12161;

class F7E8AD66E3B39722_B86D2EDFAFFAF56E : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_B86D2EDFAFFAF56E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::String* FA2F87623262A035, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_B86D2EDFAFFAF56E_INVOKE_OFFSET))(this, FA2F87623262A035, E04D2BE64FCE9814);
	}
};
