#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A418C49FA6A8C1F7_AACFB3A52FBCD232_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define A418C49FA6A8C1F7_AACFB3A52FBCD232__CTOR_OFFSET UNITYSDK_OFFSET(0x3744CE0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int AACFB3A52FBCD232_TypeDefinitionIndex = 13063;

	class AACFB3A52FBCD232 : public ::System::MulticastDelegate
	{
	public:
		::System::Int64 Invoke()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_AACFB3A52FBCD232_INVOKE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_AACFB3A52FBCD232__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
