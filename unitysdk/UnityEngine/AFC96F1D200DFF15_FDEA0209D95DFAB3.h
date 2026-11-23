#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define UNITYENGINE_AFC96F1D200DFF15_FDEA0209D95DFAB3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_AFC96F1D200DFF15_FDEA0209D95DFAB3__CTOR_OFFSET UNITYSDK_OFFSET(0x22B9540)

namespace UnityEngine
{
	inline static constexpr unsigned int AFC96F1D200DFF15_FDEA0209D95DFAB3_TypeDefinitionIndex = 21423;

	class AFC96F1D200DFF15_FDEA0209D95DFAB3 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AFC96F1D200DFF15_FDEA0209D95DFAB3__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::Boolean FC9116BC4A52D676)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AFC96F1D200DFF15_FDEA0209D95DFAB3_INVOKE_OFFSET))(this, FC9116BC4A52D676);
		}
	};
}
