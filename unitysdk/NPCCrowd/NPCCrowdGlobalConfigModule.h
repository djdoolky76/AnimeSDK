#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/FNpcAvatarGenericParams.h"

class NPCCrowdMaterialOverrideParamsInfo;
namespace NPCCrowd { class NPCCrowdAccItemOverrideConfigModule; }
namespace NPCCrowd { class NPCCrowdAccessorySlotConfigModule; }
namespace NPCCrowd { class NPCCrowdAvatarParamsConfigModule; }
namespace NPCCrowd { class NPCCrowdPartOverrideConfigModule; }
namespace NPCCrowd { class NPCCrowdRandomLibraryConfigModule; }
namespace NPCCrowd { class NPCCrowdScenePackedConfigModule; }
namespace NPCCrowd { class NPCModuleAvatarAssetsPackedInfo; }
namespace NPCCrowd::Accessories { class NpcAccessoryItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETACCESSORYSLOTITEM_OFFSET UNITYSDK_OFFSET(0xEEB0040)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETACCITEMOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xEEAFE70)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETNPCAVATARGENERICPARAMS_OFFSET UNITYSDK_OFFSET(0xEEAF750)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETNPCRANDOMLIBRARY_OFFSET UNITYSDK_OFFSET(0xEEAF920)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETPARTOVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xEEAFCA0)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETSCENEPACKEDASSETS_OFFSET UNITYSDK_OFFSET(0xEEAFAD0)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_ACCESSORYSLOT_OFFSET UNITYSDK_OFFSET(0xEEAF2A0)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_ACCITEMOVERRIDE_OFFSET UNITYSDK_OFFSET(0xEEAF290)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_AVATARPARAMS_OFFSET UNITYSDK_OFFSET(0xEEAF2B0)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_PARTOVERRIDE_OFFSET UNITYSDK_OFFSET(0xEEAF280)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_RANDOMLIBRARY_OFFSET UNITYSDK_OFFSET(0xEEAF2C0)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_SCENEPACKED_OFFSET UNITYSDK_OFFSET(0xEEAF2D0)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xEEAF420)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xEEAF2E0)
#define NPCCROWD_NPCCROWDGLOBALCONFIGMODULE___BASE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xEEB0210)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdGlobalConfigModule_TypeDefinitionIndex = 68380;

	class NPCCrowdGlobalConfigModule
	{
	public:
		::NPCCrowd::NPCCrowdPartOverrideConfigModule* _PartOverride_k__BackingField; // 0x28
		::NPCCrowd::NPCCrowdAccessorySlotConfigModule* _AccessorySlot_k__BackingField; // 0x30
		::NPCCrowd::NPCCrowdRandomLibraryConfigModule* _RandomLibrary_k__BackingField; // 0x38
		::NPCCrowd::NPCCrowdAccItemOverrideConfigModule* _AccItemOverride_k__BackingField; // 0x40
		::NPCCrowd::NPCCrowdAvatarParamsConfigModule* _AvatarParams_k__BackingField; // 0x48
		::NPCCrowd::NPCCrowdScenePackedConfigModule* _ScenePacked_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE__CTOR_OFFSET))(this);
		}

		::NPCCrowd::NPCCrowdPartOverrideConfigModule* get_PartOverride()
		{
			return ((::NPCCrowd::NPCCrowdPartOverrideConfigModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_PARTOVERRIDE_OFFSET))(this);
		}

		::NPCCrowd::NPCCrowdAccItemOverrideConfigModule* get_AccItemOverride()
		{
			return ((::NPCCrowd::NPCCrowdAccItemOverrideConfigModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_ACCITEMOVERRIDE_OFFSET))(this);
		}

		::NPCCrowd::NPCCrowdAccessorySlotConfigModule* get_AccessorySlot()
		{
			return ((::NPCCrowd::NPCCrowdAccessorySlotConfigModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_ACCESSORYSLOT_OFFSET))(this);
		}

		::NPCCrowd::NPCCrowdAvatarParamsConfigModule* get_AvatarParams()
		{
			return ((::NPCCrowd::NPCCrowdAvatarParamsConfigModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_AVATARPARAMS_OFFSET))(this);
		}

		::NPCCrowd::NPCCrowdRandomLibraryConfigModule* get_RandomLibrary()
		{
			return ((::NPCCrowd::NPCCrowdRandomLibraryConfigModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_RANDOMLIBRARY_OFFSET))(this);
		}

		::NPCCrowd::NPCCrowdScenePackedConfigModule* get_ScenePacked()
		{
			return ((::NPCCrowd::NPCCrowdScenePackedConfigModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GET_SCENEPACKED_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_PRELOADFORPHASE_OFFSET))(this, phase);
		}

		::System::Boolean GetNPCAvatarGenericParams(::System::Int32 id, ::FNpcAvatarGenericParams& par)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FNpcAvatarGenericParams&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETNPCAVATARGENERICPARAMS_OFFSET))(this, id, par);
		}

		::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>* GetNPCRandomLibrary(::System::Int32 libID)
		{
			return ((::System::Collections::Generic::List_1<::FNpcAvatarGenericParams>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETNPCRANDOMLIBRARY_OFFSET))(this, libID);
		}

		::System::Boolean GetScenePackedAssets(::System::String* tag, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*& par)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::NPCCrowd::NPCModuleAvatarAssetsPackedInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETSCENEPACKEDASSETS_OFFSET))(this, tag, par);
		}

		::System::Boolean GetPartOverrideInfo(::System::Int32 overrideInfoId, ::NPCCrowdMaterialOverrideParamsInfo*& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETPARTOVERRIDEINFO_OFFSET))(this, overrideInfoId, info);
		}

		::System::Boolean GetAccItemOverrideInfo(::System::Int32 overrideInfoId, ::NPCCrowdMaterialOverrideParamsInfo*& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowdMaterialOverrideParamsInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETACCITEMOVERRIDEINFO_OFFSET))(this, overrideInfoId, info);
		}

		::System::Boolean GetAccessorySlotItem(::System::String* accessoryKey, ::NPCCrowd::Accessories::NpcAccessoryItem*& item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE_GETACCESSORYSLOTITEM_OFFSET))(this, accessoryKey, item);
		}

		::ConfigModuleLib::Runtime::LoadOpHandle __base_PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase P0)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDGLOBALCONFIGMODULE___BASE_PRELOADFORPHASE_OFFSET))(this, P0);
		}
	};
}
