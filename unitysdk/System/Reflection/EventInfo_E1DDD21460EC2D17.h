#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Delegate; }
namespace System { class Object; }

#define SYSTEM_REFLECTION_EVENTINFO_E1DDD21460EC2D17_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define SYSTEM_REFLECTION_EVENTINFO_E1DDD21460EC2D17__CTOR_OFFSET UNITYSDK_OFFSET(0x20F9B00)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_E1DDD21460EC2D17_TypeDefinitionIndex = 10323;

	class EventInfo_E1DDD21460EC2D17 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_E1DDD21460EC2D17__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Object* BE3AC753D09FA112, ::System::Delegate* F8C0F6B5844E21A1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_E1DDD21460EC2D17_INVOKE_OFFSET))(this, BE3AC753D09FA112, F8C0F6B5844E21A1);
		}
	};
}
