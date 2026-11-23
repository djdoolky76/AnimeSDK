#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define FA0FB4840586622A_B22CF861E0E47718_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define FA0FB4840586622A_B22CF861E0E47718__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9A50)

namespace FA0FB4840586622A
{
	inline static constexpr unsigned int B22CF861E0E47718_TypeDefinitionIndex = 8697;

	class B22CF861E0E47718 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::System::Boolean B4EFF56811D9A639, ::System::String* B6018BB9F7294B44)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + FA0FB4840586622A_B22CF861E0E47718_INVOKE_OFFSET))(this, B4EFF56811D9A639, B6018BB9F7294B44);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FA0FB4840586622A_B22CF861E0E47718__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
