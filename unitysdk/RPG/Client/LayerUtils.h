#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_LAYERUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x20798080)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerUtils_TypeDefinitionIndex = 36217;

	class LayerUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DefaultLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9720);
		}

		static ::System::String** StaticGet_PVSGrdLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9728);
		}

		static ::System::String** StaticGet_TriggerLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9730);
		}

		static ::System::String** StaticGet_PerformanceLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9738);
		}

		static ::System::String** StaticGet_UI3DLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9740);
		}

		static ::System::String** StaticGet_DestructLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9748);
		}

		static ::System::String** StaticGet_UIAfterPostProcessLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9750);
		}

		static ::System::String** StaticGet_StageColliderLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9758);
		}

		static ::System::String** StaticGet_HitBoxLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9760);
		}

		static ::System::String** StaticGet_UILayer3Name()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9768);
		}

		static ::System::String** StaticGet_LocalPlayerColliderLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9770);
		}

		static ::System::String** StaticGet_ProjectileLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9778);
		}

		static ::System::String** StaticGet_CameraColliderLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9780);
		}

		static ::System::String** StaticGet_PhotoColliderName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9788);
		}

		static ::System::String** StaticGet_CharacterLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9790);
		}

		static ::System::String** StaticGet_LocalPlayerLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9798);
		}

		static ::System::String** StaticGet_LocalPlayerTriggerLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x97A0);
		}

		static ::System::String** StaticGet_NPCLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x97A8);
		}

		static ::System::String** StaticGet_AirWallColliderLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x97B0);
		}

		static ::System::String** StaticGet_UILayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x97B8);
		}

		static ::System::String** StaticGet_IgnoreCollisionLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x97C0);
		}

		static ::System::String** StaticGet_PropLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x97C8);
		}

		static ::System::Int32* StaticGet_StageColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xA80);
		}

		static ::System::Int32* StaticGet_FullTriggerTargetLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xA84);
		}

		static ::System::Int32* StaticGet_PhotoColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xA88);
		}

		static ::System::Int32* StaticGet_NpcMonsterDetectLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xA8C);
		}

		static ::System::Int32* StaticGet_TriggerLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xA90);
		}

		static ::System::Int32* StaticGet_PerformanceLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xA94);
		}

		static ::System::Int32* StaticGet_DefaultLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xA98);
		}

		static ::System::Int32* StaticGet_LocalPlayerColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xA9C);
		}

		static ::System::Int32* StaticGet_NPCLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAA0);
		}

		static ::System::Int32* StaticGet_UIAfterPostProcessLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAA4);
		}

		static ::System::Int32* StaticGet_HitBoxLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAA8);
		}

		static ::System::Int32* StaticGet_PlayerMoveRaycastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAAC);
		}

		static ::System::Int32* StaticGet_VisionDetectLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAB0);
		}

		static ::System::Int32* StaticGet_StageColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAB4);
		}

		static ::System::Int32* StaticGet_EntityLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAB8);
		}

		static ::System::Int32* StaticGet_CameraColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xABC);
		}

		static ::System::Int32* StaticGet_DefaultLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAC0);
		}

		static ::System::Int32* StaticGet_LocalPlayerTriggerLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAC4);
		}

		static ::System::Int32* StaticGet_ProjectileLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAC8);
		}

		static ::System::Int32* StaticGet_AttackDetectLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xACC);
		}

		static ::System::Int32* StaticGet_LocalPlayerColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAD0);
		}

		static ::System::Int32* StaticGet_MoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAD4);
		}

		static ::System::Int32* StaticGet_SceneRaycastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAD8);
		}

		static ::System::Int32* StaticGet_AirWallColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xADC);
		}

		static ::System::Int32* StaticGet_IgnoreCollisionLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAE0);
		}

		static ::System::Int32* StaticGet_DefaultTriggerTargetLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAE4);
		}

		static ::System::Int32* StaticGet_DestructLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAE8);
		}

		static ::System::Int32* StaticGet_CharacterLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAEC);
		}

		static ::System::Int32* StaticGet_LocalPlayerLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAF0);
		}

		static ::System::Int32* StaticGet_CameraDitherLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAF4);
		}

		static ::System::Int32* StaticGet_TriggerLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAF8);
		}

		static ::System::Int32* StaticGet_UILayer3LayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xAFC);
		}

		static ::System::Int32* StaticGet_CameraColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB00);
		}

		static ::System::Int32* StaticGet_PlayerMoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB04);
		}

		static ::System::Int32* StaticGet_PVSGrdLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB08);
		}

		static ::System::Int32* StaticGet_AirWallColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB0C);
		}

		static ::System::Int32* StaticGet_PerformanceLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB10);
		}

		static ::System::Int32* StaticGet_PVSGrdLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB14);
		}

		static ::System::Int32* StaticGet_UILayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB18);
		}

		static ::System::Int32* StaticGet_PropLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB1C);
		}

		static ::System::Int32* StaticGet_UILayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB20);
		}

		static ::System::Int32* StaticGet_HitBoxLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB24);
		}

		static ::System::Int32* StaticGet_PropLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB28);
		}

		static ::System::Int32* StaticGet_NPCLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB2C);
		}

		static ::System::Int32* StaticGet_UI3DLayerLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB30);
		}

		static ::System::Int32* StaticGet_ProjectileLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB34);
		}

		static ::System::Int32* StaticGet_CharacterLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB38);
		}

		static ::System::Int32* StaticGet_IgnoreCollisionLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB3C);
		}

		static ::System::Int32* StaticGet_LocalPlayerLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB40);
		}

		static ::System::Int32* StaticGet_DestructLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB44);
		}

		static ::System::Int32* StaticGet_UI3DLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB48);
		}

		static ::System::Int32* StaticGet_UIAfterPostProcessLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB4C);
		}

		static ::System::Int32* StaticGet_PhotoColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB50);
		}

		static ::System::Int32* StaticGet_MoveRaycastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB54);
		}

		static ::System::Int32* StaticGet_UILayer3LayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERUTILS_CCTOR_OFFSET))();
		}

	};
}
