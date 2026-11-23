#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class E85A6EAD1EEB5736;
namespace System { class Object; }

#define BC37DADDC8E6DDF5_A2210FA02788A7E3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BC37DADDC8E6DDF5_A2210FA02788A7E3__CTOR_OFFSET UNITYSDK_OFFSET(0x2991280)

namespace BC37DADDC8E6DDF5
{
	inline static constexpr unsigned int A2210FA02788A7E3_TypeDefinitionIndex = 15534;

	class A2210FA02788A7E3 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::E85A6EAD1EEB5736* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::E85A6EAD1EEB5736*))((::PBYTE)hIl2Cpp + BC37DADDC8E6DDF5_A2210FA02788A7E3_INVOKE_OFFSET))(this, F220A2D27F7C6B6C);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BC37DADDC8E6DDF5_A2210FA02788A7E3__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
