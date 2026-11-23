#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"

#define UNITYENGINE_PARTICLESYSTEM_EEF31E344F9C36FB__CTOR_OFFSET UNITYSDK_OFFSET(0x41AAF30)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EEF31E344F9C36FB_TypeDefinitionIndex = 21003;

	struct alignas(4) ParticleSystem_EEF31E344F9C36FB
	{
		::System::Single F36843C98FCE7886; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::ParticleSystem_MinMaxCurve F4D5A8A533AC63D8; // 0x18
		::System::Int32 A0FFF49A446DA986; // 0x38
		::System::Single FAE3EB162DF73D7A; // 0x3C
		::System::Single EDD5B9720E513944; // 0x40

		::System::Void _ctor(::System::Single FFD8008EB2637225, ::System::Int16 E37C599CFA5945B7, ::System::Int16 E8AF36DD169843B6, ::System::Int32 AB4EDE47ABF0AA58, ::System::Single AEEB184546B6D5E5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int16, ::System::Int16, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EEF31E344F9C36FB__CTOR_OFFSET))(this, FFD8008EB2637225, E37C599CFA5945B7, E8AF36DD169843B6, AB4EDE47ABF0AA58, AEEB184546B6D5E5);
		}
	};
}
