#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define FB54261464216E7D_F194961E710259A4_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define FB54261464216E7D_F194961E710259A4__CTOR_OFFSET UNITYSDK_OFFSET(0x29BE330)

namespace FB54261464216E7D
{
	inline static constexpr unsigned int F194961E710259A4_TypeDefinitionIndex = 15700;

	class F194961E710259A4 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::System::IntPtr B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + FB54261464216E7D_F194961E710259A4_INVOKE_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FB54261464216E7D_F194961E710259A4__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
