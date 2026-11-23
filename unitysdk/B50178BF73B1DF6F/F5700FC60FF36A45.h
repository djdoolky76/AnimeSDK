#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BED9DB3A34D9A5A5;
namespace System { class Object; }
namespace System { class String; }

#define B50178BF73B1DF6F_F5700FC60FF36A45_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B50178BF73B1DF6F_F5700FC60FF36A45__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB30)

namespace B50178BF73B1DF6F
{
	inline static constexpr unsigned int F5700FC60FF36A45_TypeDefinitionIndex = 14638;

	class F5700FC60FF36A45 : public ::System::MulticastDelegate
	{
	public:
		::System::String* Invoke(::BED9DB3A34D9A5A5* B83442F930EA3E85)
		{
			return ((::System::String*(*)(::PVOID, ::BED9DB3A34D9A5A5*))((::PBYTE)hIl2Cpp + B50178BF73B1DF6F_F5700FC60FF36A45_INVOKE_OFFSET))(this, B83442F930EA3E85);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B50178BF73B1DF6F_F5700FC60FF36A45__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
