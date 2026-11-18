#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/System/Nullable_1.h"

class ChangeLayerFlickHolder;
class Map3DFogItem;
class Map3DLiftRenderer;
class MonoSceneMap3DBlockDitherProxy;
class MonoSceneMap3DFogAnimationConfig;
class NapSceneMap3DConfig;
namespace MoleMole { class MapChangeLayerConfig; }
namespace MoleMole { class MapChangeLayerSwitchConfig; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Config { class Map3DVisualConfigItem; }
namespace MoleMole::Config { class SceneMap3DVisualConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define MONOSCENEMAP3DCONFIG_ADDSCENEMAPFOGITEM_OFFSET UNITYSDK_OFFSET(0x13EB8D30)
#define MONOSCENEMAP3DCONFIG_CREATELIFT_OFFSET UNITYSDK_OFFSET(0x13EB3CA0)
#define MONOSCENEMAP3DCONFIG_GENERATEBOTTOM_OFFSET UNITYSDK_OFFSET(0x13EB3400)
#define MONOSCENEMAP3DCONFIG_GENERATEOUTLINE_OFFSET UNITYSDK_OFFSET(0x13EB76C0)
#define MONOSCENEMAP3DCONFIG_GETMAPBOUNDS_OFFSET UNITYSDK_OFFSET(0x13EB30C0)
#define MONOSCENEMAP3DCONFIG_GETVIRTUALMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x13EB4C60)
#define MONOSCENEMAP3DCONFIG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EBA010)
#define MONOSCENEMAP3DCONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13EB9B30)
#define MONOSCENEMAP3DCONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13EB4600)
#define MONOSCENEMAP3DCONFIG_PLAYCHANGELAYERANIMATION_OFFSET UNITYSDK_OFFSET(0x13EB9DA0)
#define MONOSCENEMAP3DCONFIG_PUSHFOGITEMDATATOGPU_OFFSET UNITYSDK_OFFSET(0x13EB7BE0)
#define MONOSCENEMAP3DCONFIG_REFRESHCHARACTERARROWMATOCCLUSION_OFFSET UNITYSDK_OFFSET(0x13EB8160)
#define MONOSCENEMAP3DCONFIG_REFRESHCOLORBOX_OFFSET UNITYSDK_OFFSET(0x13EB6BF0)
#define MONOSCENEMAP3DCONFIG_REFRESHFONT_OFFSET UNITYSDK_OFFSET(0x13EB4F50)
#define MONOSCENEMAP3DCONFIG_REFRESHLIFTLAYER_OFFSET UNITYSDK_OFFSET(0x13EB42A0)
#define MONOSCENEMAP3DCONFIG_REFRESHLIGHT_OFFSET UNITYSDK_OFFSET(0x13EB59D0)
#define MONOSCENEMAP3DCONFIG_REMOVESCENEMAPFOGITEM_OFFSET UNITYSDK_OFFSET(0x13EB8E50)
#define MONOSCENEMAP3DCONFIG_SETCURRENTLAYERCENTERANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x13EB84D0)
#define MONOSCENEMAP3DCONFIG_TESTBOTTOM_OFFSET UNITYSDK_OFFSET(0x13EB3060)
#define MONOSCENEMAP3DCONFIG_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EB8EF0)
#define MONOSCENEMAP3DCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EBA570)
#define MONOSCENEMAP3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBA1C0)

inline static constexpr unsigned int MonoSceneMap3DConfig_TypeDefinitionIndex = 71254;

class MonoSceneMap3DConfig : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__FogItemCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11AF0);
	}
	static ::System::Int32* StaticGet__EnableFarOutlineFix()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11AF4);
	}
	static ::System::Int32* StaticGet__CircleOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11AF8);
	}
	static ::System::Int32* StaticGet__RotateAngle()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11AFC);
	}
	static ::System::Int32* StaticGet__BoundsCenter()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B00);
	}
	static ::System::Int32* StaticGet__BoundsSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B04);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxSizeDatas()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B08);
	}
	static ::System::Int32* StaticGet__GridTilling()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B0C);
	}
	static ::System::Int32* StaticGet__GridOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B10);
	}
	static ::System::Int32* StaticGet__RotateCenter()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B14);
	}
	static ::System::Int32* StaticGet__LocalCameraDitherAlphaAndCharacterPos()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B18);
	}
	static ::System::Int32* StaticGet__CameraDitherAlphaAndCharacterPos()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B1C);
	}
	static ::System::Int32* StaticGet__FogItems()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B20);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxColorData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B24);
	}
	static ::System::Int32* StaticGet__DisableOcclusionColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B28);
	}
	static ::System::Int32* StaticGet__Map3DColorBoxCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DConfig_TypeDefinitionIndex)->GetStaticField(0x11B2C);
	}
	// static const ::System::Int32 MAX_FOG_ITEM_COUNT = 0xA; // 0x0
	::NapSceneMap3DConfig* m_SceneMap3DConfig; // 0x18
	::System::Collections::Generic::List_1<::Map3DLiftRenderer*>* m_CreateLiftGo; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* LiftPosValue; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* FloorPosValue; // 0x30
	::System::Collections::Generic::List_1<::System::Object*>* SubAreaValue; // 0x38
	::System::Single bottomYOffset; // 0x40
	::System::Boolean overrideLightParams; // 0x44
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 lightEulerAngle; // 0x48
	::System::Boolean EnableCrossLayer; // 0x54
	::System::Byte _padding1[0x3];
	::Il2CppArray<::System::Object*>* CrossLayerNodeList; // 0x58
	::Il2CppArray<::System::Object*>* RadarCrossLayerNodeList; // 0x60
	::System::Boolean OnlyCalculateCullRenderList; // 0x68
	::System::Byte _padding2[0x7];
	::Il2CppArray<::UnityEngine::MeshRenderer*>* CullRenderList; // 0x70
	::System::Boolean EnableLayerClipOverride; // 0x78
	::System::Byte _padding3[0x3];
	::System::Single LayerClipYOffsetOverride; // 0x7C
	::UnityEngine::Vector3 LayerClipExSize; // 0x80
	::System::Byte _padding4[0x4];
	::UnityEngine::MaterialPropertyBlock* m_PropertyBlock; // 0x90
	::UnityEngine::MaterialPropertyBlock* m_BottomPropertyBlock; // 0x98
	::UnityEngine::ComputeBuffer* m_FogItemDataForGPU; // 0xA0
	::Il2CppArray<::System::Object*>* m_FogItemDataForCPU; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::MapChangeLayerSwitchConfig*>* EnableCameraChangeLayer; // 0xB0
	::Il2CppArray<::MoleMole::MapChangeLayerConfig*>* CameraChangeLayerPoints; // 0xB8
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerRadiusDuration; // 0xC0
	::System::Single _cameraChangeLayerMoveDelay; // 0xC8
	::System::Byte _padding5[0x4];
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerMoveDuration; // 0xD0
	::System::String* _cameraChangeLayerMoveGlichKey; // 0xD8
	::System::Single _cameraChangeLayerShowIconDelay; // 0xE0
	::System::Single _cameraChangeLayerMoveFocusDelay; // 0xE4
	::MoleMole::Cameras::CameraTrackBlending* _cameraChangeLayerMoveFocusDuration; // 0xE8
	::System::Boolean KeepCameraRotation; // 0xF0
	::System::Byte _padding6[0x7];
	::MonoSceneMap3DFogAnimationConfig* m_FogAnimationConfig; // 0xF8
	::UnityEngine::Bounds customMapBounds; // 0x100
	::System::Collections::Generic::List_1<::MonoSceneMap3DBlockDitherProxy*>* blockColliders; // 0x118
	::System::Boolean enableCameraDither; // 0x120
	::System::Byte _padding7[0x7];
	::Il2CppArray<::UnityEngine::Vector4>* colorBoxSizeData; // 0x128
	::Il2CppArray<::UnityEngine::Vector4>* colorBoxColorData; // 0x130
	::MoleMole::Config::SceneMap3DVisualConfig* m_VisualConfigs; // 0x138
	::MoleMole::Config::Map3DVisualConfigItem* m_MapConfig; // 0x140
	::System::String* m_VisualConfigKey; // 0x148
	::UnityEngine::Vector4 m_LayerSize; // 0x150
	::UnityEngine::Vector4 m_LayerCenterAndHeight; // 0x160
	::System::Single m_LayerClipYOffset; // 0x170
	::System::Byte _padding8[0x4];
	::System::Collections::Generic::HashSet_1<::Map3DFogItem*>* fogItems; // 0x178
	::System::Collections::Generic::List_1<::Map3DFogItem*>* removedList; // 0x180
	::System::Boolean needChangeLayerFlick; // 0x188
	::System::Byte _padding9[0x7];
	::UnityEngine::AnimationCurve* changeLayerFlickCurve; // 0x190
	::System::Single changeLayerFlickCurveLength; // 0x198
	::System::Byte _padding10[0x4];
	::Il2CppArray<::ChangeLayerFlickHolder*>* changeLayerFlickLayerHolder; // 0x1A0
	::Map3DFogItem* testFogItem; // 0x1A8
	::UnityEngine::MeshRenderer* bottomMeshRenderer; // 0x1B0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG__CCTOR_OFFSET))();
	}

	::System::Void TestBottom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_TESTBOTTOM_OFFSET))(this);
	}

	::System::Void CreateLift(::System::Collections::Generic::List_1<::System::Object*>* liftPosInfos)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_CREATELIFT_OFFSET))(this, liftPosInfos);
	}

	::System::Void RefreshLiftLayer(::System::Int32 layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>* hideBounds)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHLIFTLAYER_OFFSET))(this, layerIndex, hideBounds);
	}

	::UnityEngine::Bounds GetMapBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_GETMAPBOUNDS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_ONENABLE_OFFSET))(this);
	}

	::System::Void RefreshFont()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHFONT_OFFSET))(this);
	}

	::System::Void RefreshCharacterArrowMatOcclusion(::System::Boolean isOnEnable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHCHARACTERARROWMATOCCLUSION_OFFSET))(this, isOnEnable);
	}

	::System::Void RefreshLight()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHLIGHT_OFFSET))(this);
	}

	::System::Void GetVirtualMapConfig()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_GETVIRTUALMAPCONFIG_OFFSET))(this);
	}

	::System::Void RefreshColorBox(::System::Nullable_1<::UnityEngine::Bounds> bounds)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Bounds>))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REFRESHCOLORBOX_OFFSET))(this, bounds);
	}

	::System::Void SetCurrentLayerCenterAndHeight(::UnityEngine::Vector3 layerCenter, ::UnityEngine::Vector3 boundSize, ::System::Int32 layerIndex, ::System::Collections::Generic::List_1<::System::Object*>* reqInfos)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_SETCURRENTLAYERCENTERANDHEIGHT_OFFSET))(this, layerCenter, boundSize, layerIndex, reqInfos);
	}

	::Map3DFogItem* AddSceneMapFogItem(::UnityEngine::Bounds fogItemBounds)
	{
		return ((::Map3DFogItem*(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_ADDSCENEMAPFOGITEM_OFFSET))(this, fogItemBounds);
	}

	::System::Boolean RemoveSceneMapFogItem(::Map3DFogItem* fogItem)
	{
		return ((::System::Boolean(*)(::PVOID, ::Map3DFogItem*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_REMOVESCENEMAPFOGITEM_OFFSET))(this, fogItem);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_UPDATE_OFFSET))(this);
	}

	::System::Void PushFogItemDataToGPU()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_PUSHFOGITEMDATATOGPU_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_ONDISABLE_OFFSET))(this);
	}

	::System::Void PlayChangeLayerAnimation(::UnityEngine::GameObject* root)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_PLAYCHANGELAYERANIMATION_OFFSET))(this, root);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_ONDESTROY_OFFSET))(this);
	}

	::System::Void GenerateBottom(::UnityEngine::Bounds bounds, ::System::Boolean autoInit)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_GENERATEBOTTOM_OFFSET))(this, bounds, autoInit);
	}

	::System::Void GenerateOutline()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_GENERATEOUTLINE_OFFSET))(this);
	}
};
