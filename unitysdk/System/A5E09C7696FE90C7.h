#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class FD14828E4F0219C7;
namespace System { class Object; }
namespace System::Reflection { class F60CD5AA5C2080DF; }

#define SYSTEM_A5E09C7696FE90C7_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define SYSTEM_A5E09C7696FE90C7__CTOR_OFFSET UNITYSDK_OFFSET(0x374A3B0)

namespace System
{
	inline static constexpr unsigned int A5E09C7696FE90C7_TypeDefinitionIndex = 10680;

	class A5E09C7696FE90C7 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_A5E09C7696FE90C7__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Reflection::F60CD5AA5C2080DF* Invoke(::System::Object* AD0CAFBAFB8B01EA, ::FD14828E4F0219C7* F0D3F87128A7C4CA)
		{
			return ((::System::Reflection::F60CD5AA5C2080DF*(*)(::PVOID, ::System::Object*, ::FD14828E4F0219C7*))((::PBYTE)hIl2Cpp + SYSTEM_A5E09C7696FE90C7_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, F0D3F87128A7C4CA);
		}
	};
}
