#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/GEEOPFIMJEM.h"
#include "unitysdk/IAJPMNLEFLJ.h"
#include "unitysdk/OKLBEPJCBJG.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BJBDLDCDDJH;
class CHLIAIJFBJF;
class DBMBGHNGDCG;
class ENLBPLPOGMF;
class LJFHKAJPFNE;
class LPBNBKGHOGA;
namespace RPG::Client::OpenWorld { class StreamingLayerSetting; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADDTAMONOTICKENTRY_OFFSET UNITYSDK_OFFSET(0xE49F1B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORMINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0xE49C6C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0xE499AD0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_2_OFFSET UNITYSDK_OFFSET(0xE49B5F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_3_OFFSET UNITYSDK_OFFSET(0xE49B930)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_4_OFFSET UNITYSDK_OFFSET(0xE49BF70)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_5_OFFSET UNITYSDK_OFFSET(0xE49C070)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_6_OFFSET UNITYSDK_OFFSET(0xE49C310)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_7_OFFSET UNITYSDK_OFFSET(0xE49C5E0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE4999D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSCONTAIN_OFFSET UNITYSDK_OFFSET(0xE497F10)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSPROJECTTOXZPLANE_OFFSET UNITYSDK_OFFSET(0xE497C70)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CALCBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xE49F2D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4A1130)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CHECKSTREAMINGRECTSIMILAR_OFFSET UNITYSDK_OFFSET(0xE4961D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CLOSEIRIHIZTEST_OFFSET UNITYSDK_OFFSET(0xE4A1050)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_COPYANIMATOR_OFFSET UNITYSDK_OFFSET(0xE499110)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CREATERECTBYCENTERANDSIZE_OFFSET UNITYSDK_OFFSET(0xE497BC0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A1120)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0xE49D1D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GAMEOBJECTHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0xE49CD80)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETCELLFILTER_OFFSET UNITYSDK_OFFSET(0xE4A0A60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHCONFIGDATAPOOL_OFFSET UNITYSDK_OFFSET(0xE4A0B70)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHTEXTASSET_OFFSET UNITYSDK_OFFSET(0xE4A0C60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETLODLEVELBYDISTANCE_OFFSET UNITYSDK_OFFSET(0xE49F050)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETMINLODLEVEL_OFFSET UNITYSDK_OFFSET(0xE49EE20)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTAGEJSONPATH_OFFSET UNITYSDK_OFFSET(0xE49CBC0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0xE49A060)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_2_OFFSET UNITYSDK_OFFSET(0xE49A6E0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_3_OFFSET UNITYSDK_OFFSET(0xE49AD60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_4_OFFSET UNITYSDK_OFFSET(0xE49AF30)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE499F60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEDIR_OFFSET UNITYSDK_OFFSET(0xE49C9B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEJSONPATH_OFFSET UNITYSDK_OFFSET(0xE49CB50)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETVECTOR3S_OFFSET UNITYSDK_OFFSET(0xE4960E0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ASYNCLOADPERSISTENTASSET_OFFSET UNITYSDK_OFFSET(0xE4A0E70)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLESCENELOGERROR_OFFSET UNITYSDK_OFFSET(0xE4A0ED0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLETAMONOTICKLOGERROR_OFFSET UNITYSDK_OFFSET(0xE4A0E80)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLEUSINGSYNCLOAD_OFFSET UNITYSDK_OFFSET(0xE4A0E10)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODCONFIG_OFFSET UNITYSDK_OFFSET(0xE4A0F20)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0xE4A08F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_GROUPLODCONFIG_OFFSET UNITYSDK_OFFSET(0xE4A0F90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_QUALITYSETTING_OFFSET UNITYSDK_OFFSET(0xE4A02F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET UNITYSDK_OFFSET(0xE4A10C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0xE4A0CC0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGLAYERSETTING_OFFSET UNITYSDK_OFFSET(0xE497B40)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGVISIBLEENABLE_OFFSET UNITYSDK_OFFSET(0xE4A0D90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCROOMCACHE_OFFSET UNITYSDK_OFFSET(0xE49E380)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCSPROOMCACHE_OFFSET UNITYSDK_OFFSET(0xE49E310)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GIZMODRAWRECT_OFFSET UNITYSDK_OFFSET(0xE498060)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORMANDCANFORCECHOOSEPLATFORM_OFFSET UNITYSDK_OFFSET(0xE4A09A0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORM_OFFSET UNITYSDK_OFFSET(0xE4A0950)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISCOLLIDERGO_OFFSET UNITYSDK_OFFSET(0xE49FEA0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_1_OFFSET UNITYSDK_OFFSET(0xE4965E0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_2_OFFSET UNITYSDK_OFFSET(0xE497180)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_OFFSET UNITYSDK_OFFSET(0xE4962B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_OPENHIZTEST_OFFSET UNITYSDK_OFFSET(0xE4A1000)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_PROJECTPOINT_OFFSET UNITYSDK_OFFSET(0xE49D060)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTCONTAIN_OFFSET UNITYSDK_OFFSET(0xE497D10)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTOVERLAY_OFFSET UNITYSDK_OFFSET(0xE497DE0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REMOVETAMONOTICKENTRY_OFFSET UNITYSDK_OFFSET(0xE498CB0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REPLACELODCONFIGLAYER_OFFSET UNITYSDK_OFFSET(0xE49E200)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RETURNVECTOR3S_OFFSET UNITYSDK_OFFSET(0xE496160)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RUNTIMECALCBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xE49F3F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_1_OFFSET UNITYSDK_OFFSET(0xE4A0150)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_OFFSET UNITYSDK_OFFSET(0xE4A0010)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETHEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0xE49D250)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETSTREAMINGGRASSFASTMODE_OFFSET UNITYSDK_OFFSET(0xE4A0290)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_1_OFFSET UNITYSDK_OFFSET(0xE49E490)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_OFFSET UNITYSDK_OFFSET(0xE49E390)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLESCENELOGERROR_OFFSET UNITYSDK_OFFSET(0xE4A0EE0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLETAMONOTICKLOGERROR_OFFSET UNITYSDK_OFFSET(0xE4A0E90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLEUSINGSYNCLOAD_OFFSET UNITYSDK_OFFSET(0xE4A0E60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET UNITYSDK_OFFSET(0xE4A1110)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0xE4A0CD0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGVISIBLEENABLE_OFFSET UNITYSDK_OFFSET(0xE4A0E00)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SHRINKOPENWORLDIRIBYTEARRAYCACHE_OFFSET UNITYSDK_OFFSET(0xE4A0AF0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_STREAMINGDESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0xE498220)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TRANSFORMMESHBOUND_OFFSET UNITYSDK_OFFSET(0xE499790)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TREEDEPTHTOCOLOR_OFFSET UNITYSDK_OFFSET(0xE497FE0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_UPDATEGRAPHICQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0xE4A0340)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldHelper_TypeDefinitionIndex = 76000;

	class OpenWorldHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Animator*>** StaticGet__AnimatorList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Animator*>**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9BD0);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__RendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9BD8);
		}

		static ::System::String** StaticGet_TAMonoTickLodSettingTemplateAssetPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9BE0);
		}

		static ::UnityEngine::GameObject** StaticGet_TransformTool()
		{
			return (::UnityEngine::GameObject**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9BE8);
		}

		static ::System::String** StaticGet_SceneConstValueConfigAssetPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9BF0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_OpenWorldByteArrayCache()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9BF8);
		}

		static ::System::String** StaticGet_TSCOverrideLayer()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C00);
		}

		static ::System::Collections::Generic::Queue_1<::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__vectorsPool()
		{
			return (::System::Collections::Generic::Queue_1<::Il2CppArray<::UnityEngine::Vector3>*>**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C08);
		}

		static ::System::String** StaticGet_EntityStreamingLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C10);
		}

		static ::System::String** StaticGet_StageCapturedPropCommonJson()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C18);
		}

		static ::RPG::Client::OpenWorld::StreamingLayerSetting** StaticGet__StreamingLayerSetting()
		{
			return (::RPG::Client::OpenWorld::StreamingLayerSetting**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C20);
		}

		static ::System::String** StaticGet_GroupLodSettingTemplate()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C28);
		}

		static ::System::String** StaticGet_EntityLodSettingTemplate()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C30);
		}

		static ::System::String** StaticGet_GroupDefaultStreamingTemplateName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C38);
		}

		static ::System::String** StaticGet_NormDistanceLodSettingTemplateAssetPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C40);
		}

		static ::System::String** StaticGet_GroupNoStreamingTemplateName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C48);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::AnimatorControllerParameter*>** StaticGet__AnimatorParaList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AnimatorControllerParameter*>**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C50);
		}

		static ::UnityEngine::MaterialPropertyBlock** StaticGet__EmptyMatPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C58);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet__CachedRendererMats()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C60);
		}

		static ::System::String** StaticGet_FadingTraceTarget()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C68);
		}

		static ::System::String** StaticGet_MonoEffectLodSettingTemplate()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C70);
		}

		static ::RPG::GameCore::LodConfig** StaticGet__GroupLodConfig()
		{
			return (::RPG::GameCore::LodConfig**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C78);
		}

		static ::RPG::GameCore::LodConfig** StaticGet__entityLodConfig()
		{
			return (::RPG::GameCore::LodConfig**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C80);
		}

		static ::System::String** StaticGet_HeightBlendTexSuffix()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C88);
		}

		static ::System::String** StaticGet_VariantMDVItemStreamingLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C90);
		}

		static ::System::String** StaticGet_SceneItemHLODStreamingLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9C98);
		}

		static ::System::String** StaticGet_GameplayLodSettingTemplate()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9CA0);
		}

		static ::System::String** StaticGet_LodSettingTemplateAssetPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9CA8);
		}

		static ::System::String** StaticGet_StreamingLayerSettingAssetPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0x9CB0);
		}

		static ::System::Boolean* StaticGet_UseSystemScheduler()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA70);
		}

		static ::System::Boolean* StaticGet_UseStageConfigV2()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA71);
		}

		static ::System::Boolean* StaticGet_EnableImmediateFinishResolver()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA72);
		}

		static ::System::Boolean* StaticGet_IRI_FALLBACK()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA73);
		}

		static ::System::Int32* StaticGet__ES_BlockBboxRange()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA74);
		}

		static ::System::Boolean* StaticGet_GRASS_FORCE_REFRESH_CULLING_ON_PERFORMANCE()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA78);
		}

		static ::System::Boolean* StaticGet__StreamingVisibleEnalbe()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA79);
		}

		static ::System::Boolean* StaticGet__EnableUsingSyncLoad()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA7A);
		}

		static ::System::Boolean* StaticGet__StreamingEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA7B);
		}

		static ::System::Int32* StaticGet__Blend_Base_Range()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA7C);
		}

		static ::System::Single* StaticGet_SchedulerFadingFramingLimitStandard()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA80);
		}

		static ::System::Boolean* StaticGet_COLLIDER_STREAMING_DEBUG()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA84);
		}

		static ::System::Boolean* StaticGet_EnableRegionOverrideMaxPerObjectShadowCount()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA85);
		}

		static ::System::Boolean* StaticGet_ForbidInstantiatePrefabWhenUseBunchItem()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA86);
		}

		static ::System::Boolean* StaticGet_IRI_CLOSE_UPDATE_HIZ()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA87);
		}

		static ::System::Int32* StaticGet_OVERRIDE_STREAMING_SOURCE_LOAD_DELTA_R()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA88);
		}

		static ::System::Int32* StaticGet__Block_Bbox_Base()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA8C);
		}

		static ::System::Boolean* StaticGet_IRI_FORCE_LOW_GRAPHIC()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA90);
		}

		static ::System::Boolean* StaticGet_RegionUpdateBlockVisibleInDisableStreaming()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA91);
		}

		static ::System::Boolean* StaticGet_UseNewStageCaptureProp()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA92);
		}

		static ::System::Boolean* StaticGet_LOW_IPHONE_STREAMING_FEATURE()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA93);
		}

		static ::System::Boolean* StaticGet_EnableBacklogWatchdog()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA94);
		}

		static ::System::Boolean* StaticGet_StreamingDebugScriptOpen()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA95);
		}

		static ::System::Boolean* StaticGet_ForbidCityAtmosphereStreaming()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA96);
		}

		static ::System::Boolean* StaticGet_InStageConfigV2Mode()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA97);
		}

		static ::System::Boolean* StaticGet_UsingStreamingInstanceStub()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA98);
		}

		static ::System::Boolean* StaticGet_SpaceFoldHideInvalidItem()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA99);
		}

		static ::System::Boolean* StaticGet_RuntimeStreamingEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA9A);
		}

		static ::System::Boolean* StaticGet_UseLodCulling()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA9B);
		}

		static ::System::Int32* StaticGet__RegionOverrideMaxPerObjectShadowCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xA9C);
		}

		static ::System::Boolean* StaticGet_EnableTimeoutPromote()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAA0);
		}

		static ::System::Boolean* StaticGet_StreamingItemUsingObjectPool()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAA1);
		}

		static ::System::Boolean* StaticGet_EnableFadingTraceLog()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAA2);
		}

		static ::System::Boolean* StaticGet_EntityStreaming()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAA3);
		}

		static ::System::Single* StaticGet_s_VisionSimilarValue()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAA4);
		}

		static ::System::Boolean* StaticGet_SwitchQualityAndReloadPersistent()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAA8);
		}

		static ::System::Boolean* StaticGet_RadicalCulling()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAA9);
		}

		static ::System::Boolean* StaticGet_STREAMING_CHECK_LOADING_TIMEOUT()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAAA);
		}

		static ::System::Boolean* StaticGet_EnableStreamingJobSystem()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAAB);
		}

		static ::System::Boolean* StaticGet_ENABLE_ANIMATOR_URO()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAAC);
		}

		static ::System::Boolean* StaticGet_EnableSceneItemHLOD()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAAD);
		}

		static ::System::Boolean* StaticGet_EnableVolumeHLODHide()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAAE);
		}

		static ::System::Single* StaticGet_HLODSwitchDelay()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAB0);
		}

		static ::System::Single* StaticGet_s_CenterSimilarValue()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAB4);
		}

		static ::System::Int32* StaticGet_CLOSE_HIZ_TEST()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAB8);
		}

		static ::System::Nullable_1<::RPG::GameCore::GraphicQuality>* StaticGet_CustomEntityLodGraphicQuality()
		{
			return (::System::Nullable_1<::RPG::GameCore::GraphicQuality>*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xABC);
		}

		static ::System::Int32* StaticGet__Block_Bbox_Range()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAC4);
		}

		static ::System::Int32* StaticGet_RegionDecEntityLodQualityRef()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAC8);
		}

		static ::System::Boolean* StaticGet_IRI_USE_BINARY_DATA()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xACC);
		}

		static ::System::Boolean* StaticGet_RenderDebugLodEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xACD);
		}

		static ::System::Boolean* StaticGet_IsBaselineMode()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xACE);
		}

		static ::System::Boolean* StaticGet_DisableOldBlockHLODPreload()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xACF);
		}

		static ::System::Int32* StaticGet__Block_Albedo_Height_Map()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAD0);
		}

		static ::System::Nullable_1<::RPG::GameCore::GraphicQuality>* StaticGet_CustomLodGraphicQuality()
		{
			return (::System::Nullable_1<::RPG::GameCore::GraphicQuality>*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAD4);
		}

		static ::System::Boolean* StaticGet_EnableCameraOcculuder()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xADC);
		}

		static ::System::Boolean* StaticGet_EnableLowTailSweep()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xADD);
		}

		static ::System::Boolean* StaticGet_EnableGrass()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xADE);
		}

		static ::System::Boolean* StaticGet_EnableMaintenanceSweep()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xADF);
		}

		static ::System::Int32* StaticGet__ES_HeightMap()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAE0);
		}

		static ::System::Int32* StaticGet__TerrainCoverageParamsId()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAE4);
		}

		static ::System::Single* StaticGet_OutvisiontToInvisioinLimitDist()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAE8);
		}

		static ::System::Single* StaticGet_SchedulerFadingFramingLimit()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAEC);
		}

		static ::System::Single* StaticGet_SchedulerFadingFramingLimitDelta()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAF0);
		}

		static ::System::Boolean* StaticGet_UsingStreamingGrass()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAF4);
		}

		static ::System::Boolean* StaticGet_LevelEditorStageStreaming()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAF5);
		}

		static ::System::Boolean* StaticGet_StreamingGrassFastMode()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAF6);
		}

		static ::System::Boolean* StaticGet_EnableRenderItemShadowCastingModeBugFix()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAF7);
		}

		static ::RPG::GameCore::GraphicQuality* StaticGet_CacheLodGraphicQuality()
		{
			return (::RPG::GameCore::GraphicQuality*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAF8);
		}

		static ::System::Boolean* StaticGet_UseBunchItem()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAFC);
		}

		static ::System::Boolean* StaticGet_EnableStreamingVolumeThreadTask()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAFD);
		}

		static ::System::Boolean* StaticGet_GraphicSettingDirty()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAFE);
		}

		static ::System::Boolean* StaticGet_DEBUG_SKIP_ITEM()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xAFF);
		}

		static ::System::Int32* StaticGet__Block_Normal_Detail_Map()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB00);
		}

		static ::System::Int32* StaticGet__ES_BlockBboxBase()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB04);
		}

		static ::System::Boolean* StaticGet_PVS_USE_BINARY_DATA()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB08);
		}

		static ::System::Boolean* StaticGet_UsePriorityScheduler()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB09);
		}

		static ::System::Boolean* StaticGet_UseLodShakeThreshold()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB0A);
		}

		static ::System::Boolean* StaticGet_FORCE_DRAW_IRI()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB0B);
		}

		static ::System::Int32* StaticGet_OVERRIDE_STREAMING_SOURCE_UNLOAD_DELTA_R()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB0C);
		}

		static ::System::UInt32* StaticGet_SUB_STAGE_ISLAND_ID_OFFSET()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB10);
		}

		static ::System::Single* StaticGet_MainSourceAttachPlayerThresholdDist()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.OpenWorld", "OpenWorldHelper")->GetStaticField(0xB14);
		}

		// static const ::System::Object OpenWorldByteArrayIncreaseSize; // 0x0
		// static const ::System::String* DynamicItemLayer; // 0x0
		// static const ::System::String* DynamicLargeItemLayer; // 0x0
		// static const ::System::Object DefaultHLODSwitchDelay; // 0x0
		// static const ::System::Object TransitionLimitTime; // 0x0
		// static const ::System::Object LevelGridSize; // 0x0
		// static const ::System::Object BaselineModeTickInterval; // 0x0
		// static const ::System::String* TransformFindSelfStr; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetVector3s()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETVECTOR3S_OFFSET))();
		}

		static ::System::Void ReturnVector3s(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RETURNVECTOR3S_OFFSET))(a1);
		}

		static ::System::Boolean CheckStreamingRectSimilar(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CHECKSTREAMINGRECTSIMILAR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound(::UnityEngine::Transform* a1, ::UnityEngine::Bounds a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound_1(::UnityEngine::Transform* a1, ::UnityEngine::Bounds a2, ::UnityEngine::Transform* a3)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound_2(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Bounds a2)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_2_OFFSET))(a1, a2);
		}

		static ::RPG::Client::OpenWorld::StreamingLayerSetting* get_StreamingLayerSetting()
		{
			return ((::RPG::Client::OpenWorld::StreamingLayerSetting*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGLAYERSETTING_OFFSET))();
		}

		static ::UnityEngine::Rect CreateRectByCenterAndSize(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CREATERECTBYCENTERANDSIZE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect BoundsProjectToXZPlane(::UnityEngine::Bounds a1)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSPROJECTTOXZPLANE_OFFSET))(a1);
		}

		static ::System::Boolean RectContain(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTCONTAIN_OFFSET))(a1, a2);
		}

		static ::System::Boolean RectOverlay(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTOVERLAY_OFFSET))(a1, a2);
		}

		static ::System::Boolean BoundsContain(::UnityEngine::Bounds a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSCONTAIN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Color TreeDepthToColor(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TREEDEPTHTOCOLOR_OFFSET))(a1);
		}

		static ::System::Void GizmoDrawRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GIZMODRAWRECT_OFFSET))(a1);
		}

		static ::System::Void StreamingDestroyInstance(::UnityEngine::GameObject* a1, ::CHLIAIJFBJF* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::CHLIAIJFBJF*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_STREAMINGDESTROYINSTANCE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void CopyAnimator(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_COPYANIMATOR_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Bounds TransformMeshBound(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::GameCore::MeshBound* a2)
		{
			return ((::UnityEngine::Bounds(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TRANSFORMMESHBOUND_OFFSET))(a1, a2);
		}

		static ::System::Void AdjustTransform(::RPG::GameCore::BlockNodeConfig* a1, ::OKLBEPJCBJG a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::OKLBEPJCBJG, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_1(::RPG::GameCore::BlockNodeConfig* a1, ::GEEOPFIMJEM a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::GEEOPFIMJEM, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetStreamingItemTransform(::RPG::GameCore::BlockNodeConfig* a1, ::OKLBEPJCBJG a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::OKLBEPJCBJG, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetStreamingItemTransform_1(::RPG::GameCore::BlockNodeConfig* a1, ::GEEOPFIMJEM a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::GEEOPFIMJEM, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GetStreamingItemTransform_2(::RPG::GameCore::BlockNodeConfig* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void GetStreamingItemTransform_3(::OKLBEPJCBJG a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::OKLBEPJCBJG, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_3_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void GetStreamingItemTransform_4(::GEEOPFIMJEM a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::GEEOPFIMJEM, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Matrix4x4 AdjustTransform_2(::RPG::GameCore::BlockNodeConfig* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::UnityEngine::Matrix4x4(*)(::RPG::GameCore::BlockNodeConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_3(::RPG::GameCore::BlockNodeConfig* a1, ::BJBDLDCDDJH* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::BJBDLDCDDJH*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_4(::OKLBEPJCBJG a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::OKLBEPJCBJG, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_5(::GEEOPFIMJEM a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::GEEOPFIMJEM, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_5_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AdjustTransform_6(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AdjustTransform_7(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AdjustTransformInWorldSpace(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORMINWORLDSPACE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* GetSubStageDir(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEDIR_OFFSET))(a1, a2);
		}

		static ::System::String* GetSubStageJsonPath(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEJSONPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetStageJsonPath(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTAGEJSONPATH_OFFSET))(a1, a2);
		}

		static ::System::String* GameObjectHierarchyPath(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GAMEOBJECTHIERARCHYPATH_OFFSET))(a1, a2);
		}

		static ::System::Single ProjectPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_PROJECTPOINT_OFFSET))(a1, a2);
		}

		static ::System::Void EnableKeyword(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ENABLEKEYWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetHeightBlend(::LJFHKAJPFNE* a1, ::LPBNBKGHOGA* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::LJFHKAJPFNE*, ::LPBNBKGHOGA*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETHEIGHTBLEND_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ReplaceLodConfigLayer(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REPLACELODCONFIGLAYER_OFFSET))(a1, a2);
		}

		static ::System::Boolean get_TSCSPRoomCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCSPROOMCACHE_OFFSET))();
		}

		static ::System::Boolean get_TSCRoomCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCROOMCACHE_OFFSET))();
		}

		static ::System::Void SetTerrainTex(::LJFHKAJPFNE* a1, ::LPBNBKGHOGA* a2, ::OKLBEPJCBJG a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::LJFHKAJPFNE*, ::LPBNBKGHOGA*, ::OKLBEPJCBJG, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetTerrainTex_1(::LJFHKAJPFNE* a1, ::LPBNBKGHOGA* a2, ::GEEOPFIMJEM a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::LJFHKAJPFNE*, ::LPBNBKGHOGA*, ::GEEOPFIMJEM, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetMinLODLevel(::RPG::GameCore::LodTemplate* a1, ::System::Int32 a2, ::RPG::GameCore::GraphicQuality a3)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LodTemplate*, ::System::Int32, ::RPG::GameCore::GraphicQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETMINLODLEVEL_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 GetLODLevelByDistance(::System::Single a1, ::RPG::GameCore::LodTemplate* a2, ::System::Int32 a3, ::RPG::GameCore::GraphicQuality a4)
		{
			return ((::System::Int32(*)(::System::Single, ::RPG::GameCore::LodTemplate*, ::System::Int32, ::RPG::GameCore::GraphicQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETLODLEVELBYDISTANCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AddTAMonoTickEntry(::LJFHKAJPFNE* a1, ::UnityEngine::GameObject* a2, ::ENLBPLPOGMF* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::LJFHKAJPFNE*, ::UnityEngine::GameObject*, ::ENLBPLPOGMF*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADDTAMONOTICKENTRY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RemoveTAMonoTickEntry(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REMOVETAMONOTICKENTRY_OFFSET))(a1);
		}

		static ::System::Single CalcBoundSize(::UnityEngine::Bounds a1)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CALCBOUNDSIZE_OFFSET))(a1);
		}

		static ::System::Single RuntimeCalcBoundSize(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RUNTIMECALCBOUNDSIZE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsColliderGO(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISCOLLIDERGO_OFFSET))(a1, a2);
		}

		static ::DBMBGHNGDCG* SetBlockGrass(::UnityEngine::GameObject* a1, ::UnityEngine::RPGPointCloudGrassBlockData* a2, ::RPG::GameCore::LodConfig* a3, ::RPG::GameCore::StageLodMapConfig* a4)
		{
			return ((::DBMBGHNGDCG*(*)(::UnityEngine::GameObject*, ::UnityEngine::RPGPointCloudGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_OFFSET))(a1, a2, a3, a4);
		}

		static ::DBMBGHNGDCG* SetBlockGrass_1(::UnityEngine::GameObject* a1, ::UnityEngine::RPGDensityMapGrassBlockData* a2, ::RPG::GameCore::LodConfig* a3, ::RPG::GameCore::StageLodMapConfig* a4)
		{
			return ((::DBMBGHNGDCG*(*)(::UnityEngine::GameObject*, ::UnityEngine::RPGDensityMapGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetStreamingGrassFastMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETSTREAMINGGRASSFASTMODE_OFFSET))(a1);
		}

		static ::RPG::GameCore::GraphicQuality get_QualitySetting()
		{
			return ((::RPG::GameCore::GraphicQuality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_QUALITYSETTING_OFFSET))();
		}

		static ::RPG::GameCore::GraphicQuality get_EntityLodQualitySetting()
		{
			return ((::RPG::GameCore::GraphicQuality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODQUALITYSETTING_OFFSET))();
		}

		static ::System::Boolean IsAdvancePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORM_OFFSET))();
		}

		static ::System::Boolean IsAdvancePlatformAndCanForceChoosePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORMANDCANFORCECHOOSEPLATFORM_OFFSET))();
		}

		static ::System::Int32 GetCellFilter()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETCELLFILTER_OFFSET))();
		}

		static ::System::Void UpdateGraphicQualitySetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_UPDATEGRAPHICQUALITYSETTING_OFFSET))();
		}

		static ::System::Void ShrinkOpenWorldIRIByteArrayCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SHRINKOPENWORLDIRIBYTEARRAYCACHE_OFFSET))();
		}

		static ::IAJPMNLEFLJ GetIRIBuildingRendererListWithConfigDataPool(::System::String* a1, ::System::Action_2<::IAJPMNLEFLJ, ::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::IAJPMNLEFLJ(*)(::System::String*, ::System::Action_2<::IAJPMNLEFLJ, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHCONFIGDATAPOOL_OFFSET))(a1, a2, a3);
		}

		static ::IAJPMNLEFLJ GetIRIBuildingRendererListWithTextAsset(::UnityEngine::TextAsset* a1)
		{
			return ((::IAJPMNLEFLJ(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHTEXTASSET_OFFSET))(a1);
		}

		static ::System::Boolean get_StreamingEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGENABLE_OFFSET))();
		}

		static ::System::Void set_StreamingEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGENABLE_OFFSET))(a1);
		}

		static ::System::Boolean get_StreamingVisibleEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGVISIBLEENABLE_OFFSET))();
		}

		static ::System::Void set_StreamingVisibleEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGVISIBLEENABLE_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableUsingSyncLoad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLEUSINGSYNCLOAD_OFFSET))();
		}

		static ::System::Void set_EnableUsingSyncLoad(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLEUSINGSYNCLOAD_OFFSET))(a1);
		}

		static ::System::Boolean get_AsyncLoadPersistentAsset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ASYNCLOADPERSISTENTASSET_OFFSET))();
		}

		static ::System::Boolean get_EnableTAMonoTickLogError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLETAMONOTICKLOGERROR_OFFSET))();
		}

		static ::System::Void set_EnableTAMonoTickLogError(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLETAMONOTICKLOGERROR_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableSceneLogError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLESCENELOGERROR_OFFSET))();
		}

		static ::System::Void set_EnableSceneLogError(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLESCENELOGERROR_OFFSET))(a1);
		}

		static ::RPG::GameCore::LodConfig* get_EntityLodConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::LodConfig* get_GroupLodConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_GROUPLODCONFIG_OFFSET))();
		}

		static ::System::Void OpenHizTest()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_OPENHIZTEST_OFFSET))();
		}

		static ::System::Void CloseIRIHizTest()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CLOSEIRIHIZTEST_OFFSET))();
		}

		static ::System::Int32 get_RegionOverrideMaxPerObjectShadowCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET))();
		}

		static ::System::Void set_RegionOverrideMaxPerObjectShadowCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET))(a1);
		}

	};
}
