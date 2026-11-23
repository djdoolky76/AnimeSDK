#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7F9C9491EE9F059/A1DD51B242BE0B4E.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/F128FB13A0C669F8.h"

namespace System { class Object; }

#define E7F9C9491EE9F059_F4C0BE9ACC01A7E0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define E7F9C9491EE9F059_F4C0BE9ACC01A7E0__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

namespace E7F9C9491EE9F059
{
	inline static constexpr unsigned int F4C0BE9ACC01A7E0_TypeDefinitionIndex = 14232;

	class F4C0BE9ACC01A7E0 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::E7F9C9491EE9F059::A1DD51B242BE0B4E EB22C3793E99D207, ::F128FB13A0C669F8& ED065EFE111BD08A)
		{
			return ((::System::Void(*)(::PVOID, ::E7F9C9491EE9F059::A1DD51B242BE0B4E, ::F128FB13A0C669F8&))((::PBYTE)hIl2Cpp + E7F9C9491EE9F059_F4C0BE9ACC01A7E0_INVOKE_OFFSET))(this, EB22C3793E99D207, ED065EFE111BD08A);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E7F9C9491EE9F059_F4C0BE9ACC01A7E0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
