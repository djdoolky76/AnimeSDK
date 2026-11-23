#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define ED6AE8D390FD2EA6_B4DC3FCD7D7E354D_F1D32BB4D65403B6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define ED6AE8D390FD2EA6_B4DC3FCD7D7E354D_F1D32BB4D65403B6__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace ED6AE8D390FD2EA6
{
	inline static constexpr unsigned int B4DC3FCD7D7E354D_F1D32BB4D65403B6_TypeDefinitionIndex = 21486;

	class B4DC3FCD7D7E354D_F1D32BB4D65403B6 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ED6AE8D390FD2EA6_B4DC3FCD7D7E354D_F1D32BB4D65403B6__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* BD2C65BCCC92F212)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ED6AE8D390FD2EA6_B4DC3FCD7D7E354D_F1D32BB4D65403B6_INVOKE_OFFSET))(this, BD2C65BCCC92F212);
		}
	};
}
