#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_LAYERUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEF8A60)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerUtils_TypeDefinitionIndex = 36217;

	class LayerUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AirWallColliderLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9D80);
		}

		static ::System::String** StaticGet_IgnoreCollisionLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9D88);
		}

		static ::System::String** StaticGet_DestructLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9D90);
		}

		static ::System::String** StaticGet_HitBoxLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9D98);
		}

		static ::System::String** StaticGet_UILayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DA0);
		}

		static ::System::String** StaticGet_PVSGrdLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DA8);
		}

		static ::System::String** StaticGet_LocalPlayerColliderLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DB0);
		}

		static ::System::String** StaticGet_UILayer3Name()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DB8);
		}

		static ::System::String** StaticGet_UI3DLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DC0);
		}

		static ::System::String** StaticGet_PhotoColliderName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DC8);
		}

		static ::System::String** StaticGet_ProjectileLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DD0);
		}

		static ::System::String** StaticGet_TriggerLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DD8);
		}

		static ::System::String** StaticGet_UIAfterPostProcessLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DE0);
		}

		static ::System::String** StaticGet_LocalPlayerTriggerLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DE8);
		}

		static ::System::String** StaticGet_DefaultLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DF0);
		}

		static ::System::String** StaticGet_LocalPlayerLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9DF8);
		}

		static ::System::String** StaticGet_NPCLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9E00);
		}

		static ::System::String** StaticGet_StageColliderLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9E08);
		}

		static ::System::String** StaticGet_CharacterLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9E10);
		}

		static ::System::String** StaticGet_PerformanceLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9E18);
		}

		static ::System::String** StaticGet_CameraColliderLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9E20);
		}

		static ::System::String** StaticGet_PropLayerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0x9E28);
		}

		static ::System::Int32* StaticGet_UILayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB40);
		}

		static ::System::Int32* StaticGet_ProjectileLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB44);
		}

		static ::System::Int32* StaticGet_DestructLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB48);
		}

		static ::System::Int32* StaticGet_LocalPlayerLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB4C);
		}

		static ::System::Int32* StaticGet_PropLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB50);
		}

		static ::System::Int32* StaticGet_EntityLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB54);
		}

		static ::System::Int32* StaticGet_CameraColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB58);
		}

		static ::System::Int32* StaticGet_CharacterLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB5C);
		}

		static ::System::Int32* StaticGet_TriggerLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB60);
		}

		static ::System::Int32* StaticGet_HitBoxLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB64);
		}

		static ::System::Int32* StaticGet_PropLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB68);
		}

		static ::System::Int32* StaticGet_MoveRaycastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB6C);
		}

		static ::System::Int32* StaticGet_CharacterLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB70);
		}

		static ::System::Int32* StaticGet_AirWallColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB74);
		}

		static ::System::Int32* StaticGet_PlayerMoveRaycastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB78);
		}

		static ::System::Int32* StaticGet_LocalPlayerTriggerLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB7C);
		}

		static ::System::Int32* StaticGet_PerformanceLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB80);
		}

		static ::System::Int32* StaticGet_AirWallColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB84);
		}

		static ::System::Int32* StaticGet_PhotoColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB88);
		}

		static ::System::Int32* StaticGet_SceneRaycastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB8C);
		}

		static ::System::Int32* StaticGet_UIAfterPostProcessLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB90);
		}

		static ::System::Int32* StaticGet_DefaultLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB94);
		}

		static ::System::Int32* StaticGet_FullTriggerTargetLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB98);
		}

		static ::System::Int32* StaticGet_MoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xB9C);
		}

		static ::System::Int32* StaticGet_PhotoColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBA0);
		}

		static ::System::Int32* StaticGet_PVSGrdLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBA4);
		}

		static ::System::Int32* StaticGet_StageColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBA8);
		}

		static ::System::Int32* StaticGet_IgnoreCollisionLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBAC);
		}

		static ::System::Int32* StaticGet_HitBoxLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBB0);
		}

		static ::System::Int32* StaticGet_PerformanceLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBB4);
		}

		static ::System::Int32* StaticGet_NPCLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBB8);
		}

		static ::System::Int32* StaticGet_PlayerMoveCapsuleCastLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBBC);
		}

		static ::System::Int32* StaticGet_IgnoreCollisionLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBC0);
		}

		static ::System::Int32* StaticGet_UI3DLayerLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBC4);
		}

		static ::System::Int32* StaticGet_LocalPlayerLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBC8);
		}

		static ::System::Int32* StaticGet_UILayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBCC);
		}

		static ::System::Int32* StaticGet_DefaultLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBD0);
		}

		static ::System::Int32* StaticGet_NPCLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBD4);
		}

		static ::System::Int32* StaticGet_VisionDetectLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBD8);
		}

		static ::System::Int32* StaticGet_UILayer3LayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBDC);
		}

		static ::System::Int32* StaticGet_StageColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBE0);
		}

		static ::System::Int32* StaticGet_TriggerLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBE4);
		}

		static ::System::Int32* StaticGet_NpcMonsterDetectLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBE8);
		}

		static ::System::Int32* StaticGet_CameraColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBEC);
		}

		static ::System::Int32* StaticGet_AttackDetectLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBF0);
		}

		static ::System::Int32* StaticGet_ProjectileLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBF4);
		}

		static ::System::Int32* StaticGet_UIAfterPostProcessLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBF8);
		}

		static ::System::Int32* StaticGet_DefaultTriggerTargetLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xBFC);
		}

		static ::System::Int32* StaticGet_LocalPlayerColliderLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xC00);
		}

		static ::System::Int32* StaticGet_DestructLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xC04);
		}

		static ::System::Int32* StaticGet_PVSGrdLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xC08);
		}

		static ::System::Int32* StaticGet_UI3DLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xC0C);
		}

		static ::System::Int32* StaticGet_CameraDitherLayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xC10);
		}

		static ::System::Int32* StaticGet_UILayer3LayerMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xC14);
		}

		static ::System::Int32* StaticGet_LocalPlayerColliderLayerIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "LayerUtils")->GetStaticField(0xC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERUTILS_CCTOR_OFFSET))();
		}

	};
}
