#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class E3E5DF04DCFE6819; }
namespace System::Threading { class ManualResetEvent; }

#define UNITYENGINE_B463273FDDB5FC21_F7F84F14EAF479A9_INVOKE_OFFSET UNITYSDK_OFFSET(0x4144DD0)
#define UNITYENGINE_B463273FDDB5FC21_F7F84F14EAF479A9__CTOR_OFFSET UNITYSDK_OFFSET(0x3212AC0)

namespace UnityEngine
{
	inline static constexpr unsigned int B463273FDDB5FC21_F7F84F14EAF479A9_TypeDefinitionIndex = 17100;

	struct alignas(8) B463273FDDB5FC21_F7F84F14EAF479A9
	{
		::System::Threading::E3E5DF04DCFE6819* BF23A8C8F2F96396; // 0x10
		::System::Object* AB77E3796CB20D4A; // 0x18
		::System::Threading::ManualResetEvent* A2C3AA2B1F88D218; // 0x20

		::System::Void _ctor(::System::Threading::E3E5DF04DCFE6819* E04D2BE64FCE9814, ::System::Object* E5EB06E4FD2C32F7, ::System::Threading::ManualResetEvent* B6E222F537DC50FA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::E3E5DF04DCFE6819*, ::System::Object*, ::System::Threading::ManualResetEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_B463273FDDB5FC21_F7F84F14EAF479A9__CTOR_OFFSET))(this, E04D2BE64FCE9814, E5EB06E4FD2C32F7, B6E222F537DC50FA);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B463273FDDB5FC21_F7F84F14EAF479A9_INVOKE_OFFSET))(this);
		}
	};
}
