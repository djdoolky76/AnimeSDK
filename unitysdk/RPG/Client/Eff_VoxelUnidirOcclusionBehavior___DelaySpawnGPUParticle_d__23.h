#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Eff_VoxelUnidirOcclusionBehavior; }
namespace System { class Object; }

#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_CTOR_OFFSET UNITYSDK_OFFSET(0xCD0B700)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCD0B7A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCD0B960)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCD0B9C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCD0B970)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD0B710)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCD0B760)

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_VoxelUnidirOcclusionBehavior___DelaySpawnGPUParticle_d__23_TypeDefinitionIndex = 70406;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class Eff_VoxelUnidirOcclusionBehavior___DelaySpawnGPUParticle_d__23 : public ::System::Object
	{
	public:
		::RPG::Client::Eff_VoxelUnidirOcclusionBehavior* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___DELAYSPAWNGPUPARTICLE_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
