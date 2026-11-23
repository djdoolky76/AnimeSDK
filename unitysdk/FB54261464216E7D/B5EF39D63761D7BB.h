#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F3F77D0A032BAB12;
namespace System { class Object; }

#define FB54261464216E7D_B5EF39D63761D7BB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define FB54261464216E7D_B5EF39D63761D7BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace FB54261464216E7D
{
	inline static constexpr unsigned int B5EF39D63761D7BB_TypeDefinitionIndex = 15560;

	class B5EF39D63761D7BB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FB54261464216E7D_B5EF39D63761D7BB__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::F3F77D0A032BAB12* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::F3F77D0A032BAB12*))((::PBYTE)hIl2Cpp + FB54261464216E7D_B5EF39D63761D7BB_INVOKE_OFFSET))(this, B083BE7841B347C4);
		}
	};
}
