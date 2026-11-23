#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A620FEE9C3DCD7F9/F6EC87C4EFF5C668.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define A620FEE9C3DCD7F9_B16A10CBA5E44AAF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define A620FEE9C3DCD7F9_B16A10CBA5E44AAF__CTOR_OFFSET UNITYSDK_OFFSET(0x2284E60)

namespace A620FEE9C3DCD7F9
{
	inline static constexpr unsigned int B16A10CBA5E44AAF_TypeDefinitionIndex = 21498;

	class B16A10CBA5E44AAF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A620FEE9C3DCD7F9_B16A10CBA5E44AAF__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::A620FEE9C3DCD7F9::F6EC87C4EFF5C668 EB22C3793E99D207, ::PVOID F6C2EBBDFCAEF915)
		{
			return ((::System::Void(*)(::PVOID, ::A620FEE9C3DCD7F9::F6EC87C4EFF5C668, ::PVOID))((::PBYTE)hIl2Cpp + A620FEE9C3DCD7F9_B16A10CBA5E44AAF_INVOKE_OFFSET))(this, EB22C3793E99D207, F6C2EBBDFCAEF915);
		}
	};
}
