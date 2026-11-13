#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/RPG/Client/OpenWorld/ColliderVisibleReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData_StreamingItemDataFlag.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemEnableReason.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemVisibleReason.h"
#include "unitysdk/RPG/Client/BitFlag_1.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DGPKLNNFELK;
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_ALIASMARK_OFFSET UNITYSDK_OFFSET(0x1BEFFFB0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_BITGETHELPER_OFFSET UNITYSDK_OFFSET(0x1BEFF8D0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_BITSETHELPER_OFFSET UNITYSDK_OFFSET(0x1BEFF920)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF00ED0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFFF30)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_DEBUG_RECORD_STACK_OFFSET UNITYSDK_OFFSET(0x1BF00E80)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x1BF007A0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETCOLLIDERVISIBLEVALUE_OFFSET UNITYSDK_OFFSET(0x1BF00B60)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x1BF00080)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEFFFF0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETLOADINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x1BF000F0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETPERSISTENTASSETPATH_OFFSET UNITYSDK_OFFSET(0x1BF007F0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETPRELOADLOD_OFFSET UNITYSDK_OFFSET(0x1BF008F0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETVISIBLEVALUE_OFFSET UNITYSDK_OFFSET(0x1BF00AA0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CAMERACULL_OFFSET UNITYSDK_OFFSET(0x1BEFFAB0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CULLINGLOD_OFFSET UNITYSDK_OFFSET(0x1BF00CB0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0x1BF00C90)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x1BF00C20)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_FIRSTLOD_OFFSET UNITYSDK_OFFSET(0x1BF00D50)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_FORCELOD_OFFSET UNITYSDK_OFFSET(0x1BF00DD0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISDISTEFFECTBYSCALE_OFFSET UNITYSDK_OFFSET(0x1BF00DF0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISFASTFADING_OFFSET UNITYSDK_OFFSET(0x1BEFFBD0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISFILTERBYVOLUME_OFFSET UNITYSDK_OFFSET(0x1BEFFCF0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISUSEAUTOLODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1BF00E60)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_LASTLOD_OFFSET UNITYSDK_OFFSET(0x1BF00CD0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_NOTLOADFORPVS_OFFSET UNITYSDK_OFFSET(0x1BEFFE10)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_OBJECTINDEX_OFFSET UNITYSDK_OFFSET(0x1BF000C0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_OBJSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1BF00C70)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_PARENTITEM_OFFSET UNITYSDK_OFFSET(0x1BF000D0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_STAGEPREFABINFO_OFFSET UNITYSDK_OFFSET(0x1BF006D0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_STREAMINGLOCK_OFFSET UNITYSDK_OFFSET(0x1BEFF990)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_INITAFTERLOADED_OFFSET UNITYSDK_OFFSET(0x1BF00450)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x1BF00040)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETCOLLIDERVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0x1BF00AF0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETENABLEREASON_OFFSET UNITYSDK_OFFSET(0x1BF00BB0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETFLAGDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BEFF680)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0x1BF00A30)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CAMERACULL_OFFSET UNITYSDK_OFFSET(0x1BEFFB30)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CULLINGLOD_OFFSET UNITYSDK_OFFSET(0x1BF00CC0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CULLINGSTATUS_OFFSET UNITYSDK_OFFSET(0x1BF00CA0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_FORCELOD_OFFSET UNITYSDK_OFFSET(0x1BF00DE0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISFASTFADING_OFFSET UNITYSDK_OFFSET(0x1BEFFC50)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISFILTERBYVOLUME_OFFSET UNITYSDK_OFFSET(0x1BEFFD70)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISUSEAUTOLODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1BF00E70)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_NOTLOADFORPVS_OFFSET UNITYSDK_OFFSET(0x1BEFFE90)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_OBJSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1BF00C80)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_PARENTITEM_OFFSET UNITYSDK_OFFSET(0x1BF000E0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_STAGEPREFABINFO_OFFSET UNITYSDK_OFFSET(0x1BF006F0)
#define RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_STREAMINGLOCK_OFFSET UNITYSDK_OFFSET(0x1BEFFA10)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingItemData_TypeDefinitionIndex = 76060;

	class StreamingItemData : public ::System::Object
	{
	public:
		::RPG::Client::OpenWorld::StreamingItemData* _ParentItem_k__BackingField; // 0x10
		::RPG::Client::OpenWorld::StreamingLayerDetail* LayerDetail; // 0x18
		::GEEOPFIMJEM _StagePrefabInfoView; // 0x20
		::DGPKLNNFELK* LodTemplateCfg; // 0x38
		::System::String* RelativeParentPath; // 0x40
		::RPG::GameCore::BlockNodeConfig* BlockConfig; // 0x48
		::UnityEngine::Transform* BeforeLockParent; // 0x50
		::System::Single MaxScale; // 0x58
		::System::Int16 m_ForceLod; // 0x5C
		::System::Boolean _IsUseAutoLodTemplate_k__BackingField; // 0x5E
		::System::Boolean IndependentIRI; // 0x5F
		::System::Int16 JobLod; // 0x60
		::System::Byte _padding0[0x2];
		::UnityEngine::Bounds Boundary; // 0x64
		::System::Byte _padding1[0x4];
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingItemEnableReason> _EnableReasonBool; // 0x80
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::ColliderVisibleReason> ColliderVisible; // 0x88
		::System::Int64 LastCullingIndex; // 0x90
		::RPG::Client::BitFlag_1<::System::Object*> m_FlagBit; // 0x98
		::System::Int32 DebugLod; // 0x9C
		::System::Int32 _ObjectIndex; // 0xA0
		::System::Int32 LodLevel; // 0xA4
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingItemVisibleReason> Visible; // 0xA8
		::System::Int16 m_CullingStatus; // 0xB0
		::System::Int16 m_CullingLod; // 0xB2
		::System::Int32 _ObjStageIndex_k__BackingField; // 0xB4
		static ::System::Int32* StaticGet__ObjectCounter()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "StreamingItemData")->GetStaticField(0x67E0);
		}

		static ::System::Int32* StaticGet_NextForceLod()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "StreamingItemData")->GetStaticField(0x67E4);
		}

		// static const ::System::String* EMPTY_GO_ASSET_PATH; // 0x0
		// static const ::System::Object InvalidForceLod; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_CCTOR_OFFSET))();
		}

		::System::Void SetFlagDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETFLAGDEFAULT_OFFSET))(this);
		}

		::System::Boolean BitGetHelper(::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_BITGETHELPER_OFFSET))(this, a1);
		}

		::System::Void BitSetHelper(::System::Boolean a1, ::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemData_StreamingItemDataFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_BITSETHELPER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_StreamingLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_STREAMINGLOCK_OFFSET))(this);
		}

		::System::Void set_StreamingLock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_STREAMINGLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_CameraCull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CAMERACULL_OFFSET))(this);
		}

		::System::Void set_CameraCull(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CAMERACULL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFastFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISFASTFADING_OFFSET))(this);
		}

		::System::Void set_IsFastFading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISFASTFADING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFilterByVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISFILTERBYVOLUME_OFFSET))(this);
		}

		::System::Void set_IsFilterByVolume(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISFILTERBYVOLUME_OFFSET))(this, a1);
		}

		::System::Boolean get_NotLoadForPVS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_NOTLOADFORPVS_OFFSET))(this);
		}

		::System::Void set_NotLoadForPVS(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_NOTLOADFORPVS_OFFSET))(this, a1);
		}

		::System::Boolean AliasMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_ALIASMARK_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Void OnTransformChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_ONTRANSFORMCHANGE_OFFSET))(this);
		}

		::System::Single GetCullingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETCULLINGDISTANCE_OFFSET))(this);
		}

		::System::Int32 get_ObjectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_OBJECTINDEX_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingItemData* get_ParentItem()
		{
			return ((::RPG::Client::OpenWorld::StreamingItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_PARENTITEM_OFFSET))(this);
		}

		::System::Void set_ParentItem(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_PARENTITEM_OFFSET))(this, a1);
		}

		::System::Single GetLoadingPriority(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETLOADINGPRIORITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitAfterLoaded(::LJFHKAJPFNE* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_INITAFTERLOADED_OFFSET))(this, a1, a2);
		}

		::GEEOPFIMJEM get_StagePrefabInfo()
		{
			return ((::GEEOPFIMJEM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_STAGEPREFABINFO_OFFSET))(this);
		}

		::System::Void set_StagePrefabInfo(::GEEOPFIMJEM a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEEOPFIMJEM))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_STAGEPREFABINFO_OFFSET))(this, a1);
		}

		::System::String* GetAssetPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETASSETPATH_OFFSET))(this, a1);
		}

		::System::String* GetPersistentAssetPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETPERSISTENTASSETPATH_OFFSET))(this, a1);
		}

		::System::Int32 GetPreloadLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETPRELOADLOD_OFFSET))(this);
		}

		::System::Void SetVisibleReason(::System::Boolean a1, ::RPG::Client::OpenWorld::StreamingItemVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETVISIBLEREASON_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetVisibleValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETVISIBLEVALUE_OFFSET))(this);
		}

		::System::Void SetColliderVisibleReason(::System::Boolean a1, ::RPG::Client::OpenWorld::ColliderVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::ColliderVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETCOLLIDERVISIBLEREASON_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetColliderVisibleValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GETCOLLIDERVISIBLEVALUE_OFFSET))(this);
		}

		::System::Void SetEnableReason(::System::Boolean a1, ::RPG::Client::OpenWorld::StreamingItemEnableReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OpenWorld::StreamingItemEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SETENABLEREASON_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ENABLE_OFFSET))(this);
		}

		::System::Int32 get_ObjStageIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_OBJSTAGEINDEX_OFFSET))(this);
		}

		::System::Void set_ObjStageIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_OBJSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_CullingStatus()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CULLINGSTATUS_OFFSET))(this);
		}

		::System::Void set_CullingStatus(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CULLINGSTATUS_OFFSET))(this, a1);
		}

		::System::Int32 get_CullingLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_CULLINGLOD_OFFSET))(this);
		}

		::System::Void set_CullingLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_CULLINGLOD_OFFSET))(this, a1);
		}

		::System::Int32 get_LastLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_LASTLOD_OFFSET))(this);
		}

		::System::Int32 get_FirstLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_FIRSTLOD_OFFSET))(this);
		}

		::System::Int32 get_ForceLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_FORCELOD_OFFSET))(this);
		}

		::System::Void set_ForceLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_FORCELOD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDistEffectByScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISDISTEFFECTBYSCALE_OFFSET))(this);
		}

		::System::Boolean get_IsUseAutoLodTemplate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_GET_ISUSEAUTOLODTEMPLATE_OFFSET))(this);
		}

		::System::Void set_IsUseAutoLodTemplate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_SET_ISUSEAUTOLODTEMPLATE_OFFSET))(this, a1);
		}

		::System::Void DEBUG_RECORD_STACK(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGITEMDATA_DEBUG_RECORD_STACK_OFFSET))(this, a1, a2);
		}

	};
}
