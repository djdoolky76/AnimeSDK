#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BF6288F874C2953B;
namespace System { class Object; }

#define SYSTEM_A29B0C417D4BF04E_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define SYSTEM_A29B0C417D4BF04E__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

namespace System
{
	inline static constexpr unsigned int A29B0C417D4BF04E_TypeDefinitionIndex = 11350;

	class A29B0C417D4BF04E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_A29B0C417D4BF04E__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Object* AD0CAFBAFB8B01EA, ::BF6288F874C2953B* A5FB7225DA5C5A9B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BF6288F874C2953B*))((::PBYTE)hIl2Cpp + SYSTEM_A29B0C417D4BF04E_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA, A5FB7225DA5C5A9B);
		}
	};
}
