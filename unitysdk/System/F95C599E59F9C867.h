#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class FE438F7690E41ABA; }
namespace System { class Object; }

#define SYSTEM_F95C599E59F9C867_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define SYSTEM_F95C599E59F9C867__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

namespace System
{
	inline static constexpr unsigned int F95C599E59F9C867_TypeDefinitionIndex = 10336;

	class F95C599E59F9C867 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_F95C599E59F9C867__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Object* AD0CAFBAFB8B01EA, ::System::FE438F7690E41ABA* A5FB7225DA5C5A9B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::FE438F7690E41ABA*))((::PBYTE)hIl2Cpp + SYSTEM_F95C599E59F9C867_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, A5FB7225DA5C5A9B);
		}
	};
}
