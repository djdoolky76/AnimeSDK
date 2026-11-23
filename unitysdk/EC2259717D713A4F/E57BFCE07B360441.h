#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define EC2259717D713A4F_E57BFCE07B360441_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F36B50)
#define EC2259717D713A4F_E57BFCE07B360441__CTOR_OFFSET UNITYSDK_OFFSET(0x3744B80)

namespace EC2259717D713A4F
{
	inline static constexpr unsigned int E57BFCE07B360441_TypeDefinitionIndex = 14886;

	class E57BFCE07B360441 : public ::System::MulticastDelegate
	{
	public:
		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EC2259717D713A4F_E57BFCE07B360441_INVOKE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EC2259717D713A4F_E57BFCE07B360441__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
