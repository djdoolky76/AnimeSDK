#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class WeGameSessionTicketModel; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define F7E8AD66E3B39722_EF3C140600B1C26C_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define F7E8AD66E3B39722_EF3C140600B1C26C__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int F7E8AD66E3B39722_EF3C140600B1C26C_TypeDefinitionIndex = 12162;

class F7E8AD66E3B39722_EF3C140600B1C26C : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_EF3C140600B1C26C__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::Win::WeGameSessionTicketModel*>*>*))((::PBYTE)hIl2Cpp + F7E8AD66E3B39722_EF3C140600B1C26C_INVOKE_OFFSET))(this, E04D2BE64FCE9814);
	}
};
