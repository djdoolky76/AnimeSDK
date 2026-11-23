#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define E7ED61E0B00DDE0C_FDBF4FD73B809E89_F18DC423B2EC3FCF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define E7ED61E0B00DDE0C_FDBF4FD73B809E89_F18DC423B2EC3FCF__CTOR_OFFSET UNITYSDK_OFFSET(0x2A44330)

namespace E7ED61E0B00DDE0C
{
	inline static constexpr unsigned int FDBF4FD73B809E89_F18DC423B2EC3FCF_TypeDefinitionIndex = 18370;

	class FDBF4FD73B809E89_F18DC423B2EC3FCF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_FDBF4FD73B809E89_F18DC423B2EC3FCF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Single Invoke(::System::String* B39C7935DB5DA332)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_FDBF4FD73B809E89_F18DC423B2EC3FCF_INVOKE_OFFSET))(this, B39C7935DB5DA332);
		}
	};
}
