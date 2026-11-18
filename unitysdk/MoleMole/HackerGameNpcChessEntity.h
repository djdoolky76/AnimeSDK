#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHMKFBLNLIA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HackerGameChessEntity.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/GKICHLJKDHA_CDNEOOANCOA.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class FBAMLABJMKF;
class KIHFMFLBPHM;
namespace MoleMole { class HackerGameBaseDamage; }
namespace MoleMole::FlowCanvas { class HackShardedInfo; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x143281E0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_CONSTRUCTNPCDATA_OFFSET UNITYSDK_OFFSET(0x14327660)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_EXECUTEDELAYEDLASER_OFFSET UNITYSDK_OFFSET(0x14328690)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_DAMAGEWHENESCAPE_OFFSET UNITYSDK_OFFSET(0x14326EA0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x14326E80)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ENTITYTAG_OFFSET UNITYSDK_OFFSET(0x14326F60)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_FEVERREWARD_OFFSET UNITYSDK_OFFSET(0x14326E60)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x14326E20)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_MOVETIMER_OFFSET UNITYSDK_OFFSET(0x14326EC0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONBEFOREMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x14326F20)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONCREATEDEVENT_OFFSET UNITYSDK_OFFSET(0x14326F40)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDAMAGEDCAMERASHAKEKEY_OFFSET UNITYSDK_OFFSET(0x14326FC0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDAMAGEDEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14326F80)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDAMAGEDEVENT_OFFSET UNITYSDK_OFFSET(0x14326EE0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDEATHBODYEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14326FE0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDEATHEVENT_OFFSET UNITYSDK_OFFSET(0x14326F00)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONESCAPEEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14327020)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONFEVERDAMAGEDEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14326FA0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONFEVERDEATHBODYEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14327000)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x14326E40)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GRIDDIRTOVECTOR2INT_OFFSET UNITYSDK_OFFSET(0x14327510)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_GRIDLINKHELPER_OFFSET UNITYSDK_OFFSET(0x14327AD0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x14327B80)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_MOVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x14327180)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_MOVE_OFFSET UNITYSDK_OFFSET(0x14327040)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_ONATTACHHACKSHARDEDINFO_OFFSET UNITYSDK_OFFSET(0x14328330)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x143284B0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SETEFFECT_OFFSET UNITYSDK_OFFSET(0x14328290)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_DAMAGEWHENESCAPE_OFFSET UNITYSDK_OFFSET(0x14326EB0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x14326E90)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ENTITYTAG_OFFSET UNITYSDK_OFFSET(0x14326F70)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_FEVERREWARD_OFFSET UNITYSDK_OFFSET(0x14326E70)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x14326E30)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_MOVETIMER_OFFSET UNITYSDK_OFFSET(0x14326ED0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONBEFOREMOVEEVENT_OFFSET UNITYSDK_OFFSET(0x14326F30)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONCREATEDEVENT_OFFSET UNITYSDK_OFFSET(0x14326F50)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDAMAGEDCAMERASHAKEKEY_OFFSET UNITYSDK_OFFSET(0x14326FD0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDAMAGEDEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14326F90)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDAMAGEDEVENT_OFFSET UNITYSDK_OFFSET(0x14326EF0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDEATHBODYEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14326FF0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDEATHEVENT_OFFSET UNITYSDK_OFFSET(0x14326F10)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONESCAPEEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14327030)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONFEVERDAMAGEDEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14326FB0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONFEVERDEATHBODYEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x14327010)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x14326E50)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY_TAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0x14327DF0)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x14328710)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY___BASE_MOVE_OFFSET UNITYSDK_OFFSET(0x14328770)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY___BASE_ONATTACHHACKSHARDEDINFO_OFFSET UNITYSDK_OFFSET(0x14328780)
#define MOLEMOLE_HACKERGAMENPCCHESSENTITY___BASE_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x14328810)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameNpcChessEntity_TypeDefinitionIndex = 38434;

	class HackerGameNpcChessEntity : public ::MoleMole::HackerGameChessEntity
	{
	public:
		// static const ::System::Int32 playbackSpeedId = 0x1; // 0x0
		::System::String* _OnCreatedEvent_k__BackingField; // 0x50
		::MoleMole::HackerGameBaseDamage* _Damage_k__BackingField; // 0x58
		::System::String* _OnFeverDamagedEffectKey_k__BackingField; // 0x60
		::System::String* _OnDamagedEvent_k__BackingField; // 0x68
		::System::String* _OnBeforeMoveEvent_k__BackingField; // 0x70
		::System::String* _EntityTag_k__BackingField; // 0x78
		::System::String* _OnDeathBodyEffectKey_k__BackingField; // 0x80
		::System::String* _OnDeathEvent_k__BackingField; // 0x88
		::System::String* _OnFeverDeathBodyEffectKey_k__BackingField; // 0x90
		::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* DamagedBodyPart; // 0x98
		::System::String* _OnEscapeEffectKey_k__BackingField; // 0xA0
		::System::Collections::IEnumerator* DeathEnumerator; // 0xA8
		::System::String* _OnDamagedEffectKey_k__BackingField; // 0xB0
		::System::String* _OnDamagedCameraShakeKey_k__BackingField; // 0xB8
		::MoleMole::HackerGameBaseDamage* _DamageWhenEscape_k__BackingField; // 0xC0
		::System::Int32 _FeverReward_k__BackingField; // 0xC8
		::System::Int32 _MoveSpeed_k__BackingField; // 0xCC
		::System::Int32 _Reward_k__BackingField; // 0xD0
		::System::Int32 _MoveTimer_k__BackingField; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MoveSpeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_MOVESPEED_OFFSET))(this);
		}

		::System::Void set_MoveSpeed(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_MOVESPEED_OFFSET))(this, value);
		}

		::System::Int32 get_Reward()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_REWARD_OFFSET))(this);
		}

		::System::Void set_Reward(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_REWARD_OFFSET))(this, value);
		}

		::System::Int32 get_FeverReward()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_FEVERREWARD_OFFSET))(this);
		}

		::System::Void set_FeverReward(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_FEVERREWARD_OFFSET))(this, value);
		}

		::MoleMole::HackerGameBaseDamage* get_Damage()
		{
			return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_DAMAGE_OFFSET))(this);
		}

		::System::Void set_Damage(::MoleMole::HackerGameBaseDamage* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackerGameBaseDamage*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_DAMAGE_OFFSET))(this, value);
		}

		::MoleMole::HackerGameBaseDamage* get_DamageWhenEscape()
		{
			return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_DAMAGEWHENESCAPE_OFFSET))(this);
		}

		::System::Void set_DamageWhenEscape(::MoleMole::HackerGameBaseDamage* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackerGameBaseDamage*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_DAMAGEWHENESCAPE_OFFSET))(this, value);
		}

		::System::Int32 get_MoveTimer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_MOVETIMER_OFFSET))(this);
		}

		::System::Void set_MoveTimer(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_MOVETIMER_OFFSET))(this, value);
		}

		::System::String* get_OnDamagedEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDAMAGEDEVENT_OFFSET))(this);
		}

		::System::Void set_OnDamagedEvent(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDAMAGEDEVENT_OFFSET))(this, value);
		}

		::System::String* get_OnDeathEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDEATHEVENT_OFFSET))(this);
		}

		::System::Void set_OnDeathEvent(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDEATHEVENT_OFFSET))(this, value);
		}

		::System::String* get_OnBeforeMoveEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONBEFOREMOVEEVENT_OFFSET))(this);
		}

		::System::Void set_OnBeforeMoveEvent(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONBEFOREMOVEEVENT_OFFSET))(this, value);
		}

		::System::String* get_OnCreatedEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONCREATEDEVENT_OFFSET))(this);
		}

		::System::Void set_OnCreatedEvent(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONCREATEDEVENT_OFFSET))(this, value);
		}

		::System::String* get_EntityTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ENTITYTAG_OFFSET))(this);
		}

		::System::Void set_EntityTag(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ENTITYTAG_OFFSET))(this, value);
		}

		::System::String* get_OnDamagedEffectKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDAMAGEDEFFECTKEY_OFFSET))(this);
		}

		::System::Void set_OnDamagedEffectKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDAMAGEDEFFECTKEY_OFFSET))(this, value);
		}

		::System::String* get_OnFeverDamagedEffectKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONFEVERDAMAGEDEFFECTKEY_OFFSET))(this);
		}

		::System::Void set_OnFeverDamagedEffectKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONFEVERDAMAGEDEFFECTKEY_OFFSET))(this, value);
		}

		::System::String* get_OnDamagedCameraShakeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDAMAGEDCAMERASHAKEKEY_OFFSET))(this);
		}

		::System::Void set_OnDamagedCameraShakeKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDAMAGEDCAMERASHAKEKEY_OFFSET))(this, value);
		}

		::System::String* get_OnDeathBodyEffectKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONDEATHBODYEFFECTKEY_OFFSET))(this);
		}

		::System::Void set_OnDeathBodyEffectKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONDEATHBODYEFFECTKEY_OFFSET))(this, value);
		}

		::System::String* get_OnFeverDeathBodyEffectKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONFEVERDEATHBODYEFFECTKEY_OFFSET))(this);
		}

		::System::Void set_OnFeverDeathBodyEffectKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONFEVERDEATHBODYEFFECTKEY_OFFSET))(this, value);
		}

		::System::String* get_OnEscapeEffectKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GET_ONESCAPEEFFECTKEY_OFFSET))(this);
		}

		::System::Void set_OnEscapeEffectKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SET_ONESCAPEEFFECTKEY_OFFSET))(this, value);
		}

		::System::Boolean Move(::Share::GridDir dir)
		{
			return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_MOVE_OFFSET))(this, dir);
		}

		::System::Void MoveInternal(::Share::GridDir dir)
		{
			return ((::System::Void(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_MOVEINTERNAL_OFFSET))(this, dir);
		}

		::GKICHLJKDHA_CDNEOOANCOA ConstructNpcData(::MoleMole::HollowChessboard::HollowEntity* entity, ::MoleMole::HollowChessboard::HollowCell startPoint, ::MoleMole::HollowChessboard::HollowCell targetPoint)
		{
			return ((::GKICHLJKDHA_CDNEOOANCOA(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_CONSTRUCTNPCDATA_OFFSET))(this, entity, startPoint, targetPoint);
		}

		::LHMKFBLNLIA GridLinkHelper(::MoleMole::HollowChessboard::HollowCell source, ::MoleMole::HollowChessboard::HollowCell target)
		{
			return ((::LHMKFBLNLIA(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GRIDLINKHELPER_OFFSET))(this, source, target);
		}

		::MoleMole::Vector2Int GridDirToVector2Int(::Share::GridDir dir)
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_GRIDDIRTOVECTOR2INT_OFFSET))(this, dir);
		}

		::System::Void Init(::FBAMLABJMKF* chessboard, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_INIT_OFFSET))(this, chessboard, entityID);
		}

		::System::Boolean TakeDamage(::MoleMole::HackerGameDamageData data, ::System::Int32 damageIn)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackerGameDamageData, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_TAKEDAMAGE_OFFSET))(this, data, damageIn);
		}

		::System::Boolean AttachEffect(::MoleMole::HackerGameDamageData data, ::KIHFMFLBPHM* statusEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackerGameDamageData, ::KIHFMFLBPHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_ATTACHEFFECT_OFFSET))(this, data, statusEffect);
		}

		::System::Void SetEffect(::MoleMole::StatusEffectType type, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StatusEffectType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_SETEFFECT_OFFSET))(this, type, value);
		}

		::System::Void OnAttachHackShardedInfo(::MoleMole::FlowCanvas::HackShardedInfo* shardedInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackShardedInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_ONATTACHHACKSHARDEDINFO_OFFSET))(this, shardedInfo);
		}

		::System::Void OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_ONUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ExecuteDelayedLaser()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY_EXECUTEDELAYEDLASER_OFFSET))(this);
		}

		::System::Boolean __base_Move(::Share::GridDir P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY___BASE_MOVE_OFFSET))(this, P0);
		}

		::System::Void __base_OnAttachHackShardedInfo(::MoleMole::FlowCanvas::HackShardedInfo* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackShardedInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY___BASE_ONATTACHHACKSHARDEDINFO_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMENPCCHESSENTITY___BASE_ONUPDATEINTERNAL_OFFSET))(this);
		}
	};
}
