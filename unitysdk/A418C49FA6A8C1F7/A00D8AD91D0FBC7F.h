#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A418C49FA6A8C1F7_A00D8AD91D0FBC7F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define A418C49FA6A8C1F7_A00D8AD91D0FBC7F__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int A00D8AD91D0FBC7F_TypeDefinitionIndex = 13983;

	class A00D8AD91D0FBC7F : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A00D8AD91D0FBC7F_INVOKE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A00D8AD91D0FBC7F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
