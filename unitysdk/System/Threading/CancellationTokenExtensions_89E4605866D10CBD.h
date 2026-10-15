#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
namespace System { class Action; }
namespace System { class Object; }

#define SYSTEM_THREADING_CANCELLATIONTOKENEXTENSIONS_89E4605866D10CBD_UNSAFEREGISTER_OFFSET UNITYSDK_OFFSET(0x1C41E6B0)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationTokenExtensions_89E4605866D10CBD_TypeDefinitionIndex = 41362;

	class CancellationTokenExtensions_89E4605866D10CBD : public ::System::Object
	{
	public:
		static ::System::Threading::CancellationTokenRegistration UnsafeRegister(::System::Threading::CancellationToken a1, ::System::Action* a2, ::System::Object* a3)
		{
			return ((::System::Threading::CancellationTokenRegistration(*)(::System::Threading::CancellationToken, ::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKENEXTENSIONS_89E4605866D10CBD_UNSAFEREGISTER_OFFSET))(a1, a2, a3);
		}

	};
}
