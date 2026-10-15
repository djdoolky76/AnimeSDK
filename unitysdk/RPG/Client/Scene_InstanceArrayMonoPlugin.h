#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKOKHPCKLAN_ERenderInstanceCollectMode.h"
#include "unitysdk/RPG/Client/DeformSourceMode.h"
#include "unitysdk/RPG/Client/InstanceArrayConfigJsonSyncMode.h"
#include "unitysdk/RPG/Client/InstanceArrayWorkMode.h"
#include "unitysdk/PNJJDIDBMNM.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_CLEAREXTERNALTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xE09E600)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE0A01D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE09F260)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xE09F4C0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xE09F410)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_CONFIGSAVENAME_OFFSET UNITYSDK_OFFSET(0xE09F2C0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ISBAKEDATACONTAINERMODE_OFFSET UNITYSDK_OFFSET(0xE095640)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ISINSTANCEARRAYRENDERINGMODE_OFFSET UNITYSDK_OFFSET(0xE09F250)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xE09F850)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET UNITYSDK_OFFSET(0xE0A01C0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_HASANYEXTERNALTRANSFORMINPUT_OFFSET UNITYSDK_OFFSET(0xE0986D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_HASHOVERBRIDGEDEPENDENCY_OFFSET UNITYSDK_OFFSET(0xE098730)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_PRUNEEXTERNALTRANSFORMSBYFRAMEAGE_OFFSET UNITYSDK_OFFSET(0xE09EA00)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_REMOVEEXTERNALTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE09E2D0)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_SETEXTERNALTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE09DA80)
#define RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_TRYGETEXTERNALELEMENTWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE099050)

namespace RPG::Client
{
	class Scene_InstanceArrayMonoPlugin
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* NKIPBCPAFCH; // 0x30
		::System::Int64 EEHENJIKGOK; // 0x38
		::RPG::Client::InstanceArrayWorkMode WorkMode; // 0x40
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* Materials; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* Meshes; // 0x50
		::System::Boolean DynamicTransform; // 0x58
		::System::Boolean AnimationDriven; // 0x59
		::System::Boolean PolymerBridge; // 0x5A
		::System::Byte _padding1[0x1];
		::RPG::Client::DeformSourceMode DeformSource; // 0x5C
		::System::String* ConfigWorldIndex; // 0x60
		::System::String* ConfigSceneCode; // 0x68
		::System::String* ConfigAssetName; // 0x70
		::UnityEngine::TextAsset* ConfigJsonAsset; // 0x78
		::RPG::Client::InstanceArrayConfigJsonSyncMode ConfigJsonSyncMode; // 0x80
		::System::Byte _padding2[0x4];
		::System::String* LEJJFMLOGGH; // 0x88
		// static const ::System::String* JHBGKECJDKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void SetExternalTransform(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_SETEXTERNALTRANSFORM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RemoveExternalTransform(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_REMOVEEXTERNALTRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void ClearExternalTransforms(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_CLEAREXTERNALTRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void PruneExternalTransformsByFrameAge(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_PRUNEEXTERNALTRANSFORMSBYFRAMEAGE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetExternalElementWorldTransform(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_TRYGETEXTERNALELEMENTWORLDTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasAnyExternalTransformInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_HASANYEXTERNALTRANSFORMINPUT_OFFSET))(this);
		}

		::System::Boolean HasHoverBridgeDependency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_HASHOVERBRIDGEDEPENDENCY_OFFSET))(this);
		}

		::System::Boolean get_IsBakeDataContainerMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ISBAKEDATACONTAINERMODE_OFFSET))(this);
		}

		::System::Boolean get_IsInstanceArrayRenderingMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ISINSTANCEARRAYRENDERINGMODE_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* get_ConfigSaveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_CONFIGSAVENAME_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ARTBOUND_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::PNJJDIDBMNM get_RenderBudgetData()
		{
			return ((::PNJJDIDBMNM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::IKOKHPCKLAN_ERenderInstanceCollectMode get_RenderInstanceCollectMode()
		{
			return ((::IKOKHPCKLAN_ERenderInstanceCollectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENE_INSTANCEARRAYMONOPLUGIN_GET_RENDERINSTANCECOLLECTMODE_OFFSET))(this);
		}

	};
}
