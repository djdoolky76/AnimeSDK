#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define B2F70F41B9C3250D_F1DC6352FFA05D5A_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define B2F70F41B9C3250D_F1DC6352FFA05D5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36B60)

namespace B2F70F41B9C3250D
{
	inline static constexpr unsigned int F1DC6352FFA05D5A_TypeDefinitionIndex = 17150;

	class F1DC6352FFA05D5A : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2F70F41B9C3250D_F1DC6352FFA05D5A_INVOKE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B2F70F41B9C3250D_F1DC6352FFA05D5A__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
