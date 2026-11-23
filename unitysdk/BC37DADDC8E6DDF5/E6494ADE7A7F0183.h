#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define BC37DADDC8E6DDF5_E6494ADE7A7F0183_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BC37DADDC8E6DDF5_E6494ADE7A7F0183__CTOR_OFFSET UNITYSDK_OFFSET(0x29BE330)

namespace BC37DADDC8E6DDF5
{
	inline static constexpr unsigned int E6494ADE7A7F0183_TypeDefinitionIndex = 15963;

	class E6494ADE7A7F0183 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BC37DADDC8E6DDF5_E6494ADE7A7F0183__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::IntPtr F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + BC37DADDC8E6DDF5_E6494ADE7A7F0183_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
		}
	};
}
