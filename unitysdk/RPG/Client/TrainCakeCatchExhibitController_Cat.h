#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C609E20)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C60A750)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1C60B5E0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ISSHOWTRANSCAT_OFFSET UNITYSDK_OFFSET(0x1C60B740)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_NPCID_OFFSET UNITYSDK_OFFSET(0x1C60B5F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_TRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x1C60B610)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_ONREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1C605AB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_REFRESHLOCATION_OFFSET UNITYSDK_OFFSET(0x1C609E30)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETNPCID_OFFSET UNITYSDK_OFFSET(0x1C60ABB0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETPREFIX_OFFSET UNITYSDK_OFFSET(0x1C60B3B0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSAVE_OFFSET UNITYSDK_OFFSET(0x1C60B1F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x1C607450)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C606540)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SET_NPCID_OFFSET UNITYSDK_OFFSET(0x1C60B600)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TICK_OFFSET UNITYSDK_OFFSET(0x1C60A4F0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TRIGGERCHANGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1C607580)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__ADDSELECTEDEFFECT_OFFSET UNITYSDK_OFFSET(0x1C60AD90)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x1C60A980)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATETRANSCAT_OFFSET UNITYSDK_OFFSET(0x1C60AD20)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x1C60A880)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYTRANSCAT_OFFSET UNITYSDK_OFFSET(0x1C60A920)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0x1C60B410)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTARGETLOCATION_OFFSET UNITYSDK_OFFSET(0x1C609F70)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x1C60B640)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__LERPLOCATION_OFFSET UNITYSDK_OFFSET(0x1C60A550)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1C60AAA0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHTRANSCATNAME_OFFSET UNITYSDK_OFFSET(0x1C60B150)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REMOVESELECTEDEFFECT_OFFSET UNITYSDK_OFFSET(0x1C60A7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController_Cat_TypeDefinitionIndex = 61503;

	class TrainCakeCatchExhibitController_Cat : public ::System::Object
	{
	public:
		::RPG::GameCore::AnchorInfo* FollowAnchor; // 0x10
		::UnityEngine::GameObject* _TransCat; // 0x18
		::RPG::Client::TrainCakeCatchExhibitController* _Owner; // 0x20
		::System::String* _Prefix; // 0x28
		::UnityEngine::Transform* FollowAttachPoint; // 0x30
		::RPG::GameCore::GameEntity* _Entity; // 0x38
		::UnityEngine::Vector3 PosOffset; // 0x40
		::UnityEngine::Quaternion _SaveLerpStartRotation; // 0x4C
		::System::UInt32 _NpcID_k__BackingField; // 0x5C
		::System::Boolean _HasSetLocation; // 0x60
		::System::Boolean _IsShowTransCat; // 0x61
		::System::Boolean _IsInSavePerform; // 0x62
		::System::Boolean _IsSelected; // 0x63
		::UnityEngine::Quaternion _TargetRotation; // 0x64
		::System::Single _SaveLerpTimer; // 0x74
		::UnityEngine::Vector3 _SaveLerpStartPosition; // 0x78
		::UnityEngine::Vector3 _TargetPosition; // 0x84
		// static const ::System::String* _BODY_RENDERER_NAME; // 0x0
		::System::Void _ctor(::RPG::Client::TrainCakeCatchExhibitController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainCakeCatchExhibitController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_CTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshLocation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_REFRESHLOCATION_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TICK_OFFSET))(this, a1);
		}

		::System::Void _LerpLocation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__LERPLOCATION_OFFSET))(this, a1);
		}

		::System::Boolean _GetTargetLocation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTARGETLOCATION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_DISPOSE_OFFSET))(this);
		}

		::System::Void _CreateEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATEENTITY_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void _DestroyEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYENTITY_OFFSET))(this);
		}

		::System::Void SetNpcID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETNPCID_OFFSET))(this, a1, a2);
		}

		::System::Void OnRegionChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_ONREGIONCHANGE_OFFSET))(this);
		}

		::System::Void _CreateTransCat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__CREATETRANSCAT_OFFSET))(this);
		}

		::System::Void _DestroyTransCat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__DESTROYTRANSCAT_OFFSET))(this);
		}

		::System::Void SetSave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSAVE_OFFSET))(this);
		}

		::System::Void SetPrefix(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETPREFIX_OFFSET))(this, a1);
		}

		::System::Void _RefreshEntityName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHENTITYNAME_OFFSET))(this);
		}

		::System::Void _RefreshTransCatName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REFRESHTRANSCATNAME_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SETSELECTED_OFFSET))(this, a1);
		}

		::System::Void _AddSelectedEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__ADDSELECTEDEFFECT_OFFSET))(this);
		}

		::System::Void _RemoveSelectedEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__REMOVESELECTEDEFFECT_OFFSET))(this);
		}

		::System::Void TriggerChangeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_TRIGGERCHANGEEFFECT_OFFSET))(this);
		}

		::System::Void _FireEffectAsync(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__FIREEFFECTASYNC_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ENTITY_OFFSET))(this);
		}

		::System::UInt32 get_NpcID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_NPCID_OFFSET))(this);
		}

		::System::Void set_NpcID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_SET_NPCID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_TransformPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_TRANSFORMPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetTransformPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT__GETTRANSFORMPOSITION_OFFSET))(this);
		}

		::System::Boolean get_IsShowTransCat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER_CAT_GET_ISSHOWTRANSCAT_OFFSET))(this);
		}

	};
}
