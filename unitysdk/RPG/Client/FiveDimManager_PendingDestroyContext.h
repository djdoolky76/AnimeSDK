#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0xD02B990)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xD02BAA0)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xD023F80)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONALLOC_OFFSET UNITYSDK_OFFSET(0xD02BA00)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xD02BA60)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__BUILDDESTROYLISTANDHIDECOLLIDER_OFFSET UNITYSDK_OFFSET(0xD02B600)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_PendingDestroyContext_TypeDefinitionIndex = 60540;

	class FiveDimManager_PendingDestroyContext : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* Services; // 0x10
		::RPG::PoolList_1<::HIOEAKHGILF*>* Entities; // 0x18
		::NDDFLGNNMDK* Context; // 0x20
		::RPG::GameCore::GameEntity* InstanceEntity; // 0x28
		::System::Int32 CurrentDestroyIndex; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void Init(::PEEDLCHFAFL* a1, ::NDDFLGNNMDK* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*, ::NDDFLGNNMDK*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _BuildDestroyListAndHideCollider(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__BUILDDESTROYLISTANDHIDECOLLIDER_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONRECYCLE_OFFSET))(this);
		}

	};
}
