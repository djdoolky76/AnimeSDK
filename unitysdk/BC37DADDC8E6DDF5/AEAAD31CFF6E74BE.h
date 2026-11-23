#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class F9B10AC3ED7C868B;
namespace System { class Object; }

#define BC37DADDC8E6DDF5_AEAAD31CFF6E74BE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BC37DADDC8E6DDF5_AEAAD31CFF6E74BE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace BC37DADDC8E6DDF5
{
	inline static constexpr unsigned int AEAAD31CFF6E74BE_TypeDefinitionIndex = 15876;

	class AEAAD31CFF6E74BE : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::F9B10AC3ED7C868B* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::F9B10AC3ED7C868B*))((::PBYTE)hIl2Cpp + BC37DADDC8E6DDF5_AEAAD31CFF6E74BE_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BC37DADDC8E6DDF5_AEAAD31CFF6E74BE__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
