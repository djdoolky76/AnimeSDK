#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNOPJGNOPJO.h"
#include "unitysdk/Foundation/AssetPath.h"

class HJGOAJHNEGC;
namespace Nap::NapECS { class EcsEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_CLEARRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x1C5A83D0)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_GETMODELPREFABASSETPATHBYTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x1C5A96D0)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_GET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C5A8040)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_ISMODELRECYCLETARGET_OFFSET UNITYSDK_OFFSET(0x1C5A8AF0)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C5A8060)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C5A8190)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_PRELOADMAINCHARACTERMODELPREFAB_OFFSET UNITYSDK_OFFSET(0x1C5A9980)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_REGISTERAVATARMODELRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C5A8820)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_SET_ROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C5A8050)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_SWAPBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5A8F60)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_TRYGETCACHEDENTITYMODEL_1_OFFSET UNITYSDK_OFFSET(0x1C5A9620)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_TRYGETCACHEDENTITYMODEL_OFFSET UNITYSDK_OFFSET(0x1C5A91E0)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_TRYRECYCLEENTITYMODEL_OFFSET UNITYSDK_OFFSET(0x1C5A8FB0)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_UNLOADMAINCHARACTERMODELPREFAB_OFFSET UNITYSDK_OFFSET(0x1C5AA080)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_UNREGISTERAVATARMODELRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C5A8B60)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AA110)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1C5AA250)
#define MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C5AA2E0)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarModelRecycleSubsystem_TypeDefinitionIndex = 70442;

	class AvatarModelRecycleSubsystem
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* _cachedBufferFront; // 0x10
		::UnityEngine::Transform* _RootTransform_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* _cachedBufferBack; // 0x20
		::Foundation::AssetPath _preloadAssetPath; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _modelRecycleTargetEntity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_RootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_GET_ROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void set_RootTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_SET_ROOTTRANSFORM_OFFSET))(this, value);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearRuntimeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_CLEARRUNTIMEDATA_OFFSET))(this);
		}

		::System::Void RegisterAvatarModelRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_REGISTERAVATARMODELRECYCLE_OFFSET))(this);
		}

		::System::Boolean IsModelRecycleTarget(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_ISMODELRECYCLETARGET_OFFSET))(this, ecsEntity);
		}

		::System::Void UnregisterAvatarModelRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_UNREGISTERAVATARMODELRECYCLE_OFFSET))(this);
		}

		::System::Void SwapBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_SWAPBUFFER_OFFSET))(this);
		}

		::System::Boolean TryRecycleEntityModel(::Nap::NapECS::EcsEntity* ecsEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_TRYRECYCLEENTITYMODEL_OFFSET))(this, ecsEntity);
		}

		::System::Boolean TryGetCachedEntityModel(::Foundation::AssetPath assetPath, ::System::Boolean setActive, ::UnityEngine::GameObject*& ins)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_TRYGETCACHEDENTITYMODEL_OFFSET))(this, assetPath, setActive, ins);
		}

		::System::Boolean TryGetCachedEntityModel_1(::HJGOAJHNEGC* battleAvatar, ::System::Boolean setActive, ::UnityEngine::GameObject*& ins)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJGOAJHNEGC*, ::System::Boolean, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_TRYGETCACHEDENTITYMODEL_1_OFFSET))(this, battleAvatar, setActive, ins);
		}

		::System::Void PreloadMainCharacterModelPrefab(::System::Int32 robotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_PRELOADMAINCHARACTERMODELPREFAB_OFFSET))(this, robotID);
		}

		::System::Void UnloadMainCharacterModelPrefab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_UNLOADMAINCHARACTERMODELPREFAB_OFFSET))(this);
		}

		static ::Foundation::AssetPath GetModelPrefabAssetPathByTemplateID(::DNOPJGNOPJO fighterType, ::System::UInt32 templateID, ::System::Int32 skinTemplateID)
		{
			return ((::Foundation::AssetPath(*)(::DNOPJGNOPJO, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM_GETMODELPREFABASSETPATHBYTEMPLATEID_OFFSET))(fighterType, templateID, skinTemplateID);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARMODELRECYCLESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
