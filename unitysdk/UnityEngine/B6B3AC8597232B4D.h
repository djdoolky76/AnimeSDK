#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_B6B3AC8597232B4D_F503CD64A686CD8C_OFFSET UNITYSDK_OFFSET(0x41613D0)
#define UNITYENGINE_B6B3AC8597232B4D__CTOR_OFFSET UNITYSDK_OFFSET(0x4161480)

namespace UnityEngine
{
	inline static constexpr unsigned int B6B3AC8597232B4D_TypeDefinitionIndex = 17493;

	class B6B3AC8597232B4D : public ::System::Object
	{
	public:
		::System::IntPtr F206D41EC0C50691; // 0x10

		::System::Void _ctor(::System::IntPtr AB960C9FF260E787)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_B6B3AC8597232B4D__CTOR_OFFSET))(this, AB960C9FF260E787);
		}

		static ::UnityEngine::B6B3AC8597232B4D* F503CD64A686CD8C(::System::IntPtr AB960C9FF260E787)
		{
			return ((::UnityEngine::B6B3AC8597232B4D*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_B6B3AC8597232B4D_F503CD64A686CD8C_OFFSET))(AB960C9FF260E787);
		}
	};
}
