#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/FNpcAvatarGenericParams.h"

class NPCAvatarMeshAssetsSO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_CLEARSTATICPRELOADSTATE_OFFSET UNITYSDK_OFFSET(0x105F50F0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETALLLODMESH_OFFSET UNITYSDK_OFFSET(0x105F5460)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETAVATARMESHCONFIG_1_OFFSET UNITYSDK_OFFSET(0x105F6720)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETAVATARMESHCONFIG_OFFSET UNITYSDK_OFFSET(0x105F6500)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x105F51B0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x105F5330)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x105F7210)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x105F5A30)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x105F54A0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_RELEASERESOURCES_OFFSET UNITYSDK_OFFSET(0x105F70C0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x105F74B0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x105F74C0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x105F7550)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x105F75E0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarMeshManager_TypeDefinitionIndex = 48331;

	class NPCAvatarMeshManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_meshAssetsLoaders()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarMeshManager_TypeDefinitionIndex)->GetStaticField(0x4B0E0);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_matAssetsLoaders()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarMeshManager_TypeDefinitionIndex)->GetStaticField(0x4B0E8);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* allLodMeshIDDicts; // 0x18
		::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO*>* meshConfigSO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void ClearStaticPreloadState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_CLEARSTATICPRELOADSTATE_OFFSET))();
		}

		static ::NPCCrowd::Avatar::NPCAvatarMeshManager* Get()
		{
			return ((::NPCCrowd::Avatar::NPCAvatarMeshManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GetAllLodMesh()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETALLLODMESH_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Boolean GetAvatarMeshConfig(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::NPCAvatarMeshAssetsSO*& mesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENPCAvatarGender, ::ENPCAvatarSize, ::NPCAvatarMeshAssetsSO*&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETAVATARMESHCONFIG_OFFSET))(this, gender, size, mesh);
		}

		::System::Void GetAvatarMeshConfig_1(::FNpcAvatarGenericParams genericParams, ::System::Collections::Generic::List_1<::System::Object*>* outAssets)
		{
			return ((::System::Void(*)(::PVOID, ::FNpcAvatarGenericParams, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETAVATARMESHCONFIG_1_OFFSET))(this, genericParams, outAssets);
		}

		::System::Void ReleaseResources(::NPCCrowd::EUnloadAssetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_RELEASERESOURCES_OFFSET))(this, reason);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}
	};
}
