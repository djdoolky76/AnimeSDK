#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_B0156D338EE56B33_FBEE5CD02213B366_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_B0156D338EE56B33_FBEE5CD02213B366__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF6400)

namespace UnityEngine
{
	inline static constexpr unsigned int B0156D338EE56B33_FBEE5CD02213B366_TypeDefinitionIndex = 20104;

	class B0156D338EE56B33_FBEE5CD02213B366 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_B0156D338EE56B33_FBEE5CD02213B366__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Int32 F5AEFA05C9F71B82)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_B0156D338EE56B33_FBEE5CD02213B366_INVOKE_OFFSET))(this, F5AEFA05C9F71B82);
		}
	};
}
