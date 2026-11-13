#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEffectHideReason.h"
#include "unitysdk/RPG/GameCore/EffectScaleAdaptType.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DDFONBMPFDC;
class DEBEAKKOHLN;
class DKFPCAADLNA;
class EGAIAJLKEIB;
class MFGKBHBMMLG;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginBase; }
namespace RPG::Client { class MonoEffectPluginSpeed; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OnEventCallBack; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAGS_OFFSET UNITYSDK_OFFSET(0x1402FA30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x1402F9E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ADVANCE_OFFSET UNITYSDK_OFFSET(0x14035DB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ATTACHTOTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1402F2A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_AWAKEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x1402BDB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1403ADA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_COPYTARGETANIMATORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x14039BD0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1402BD80)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESPAWNMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x1402B780)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTORYMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x1402E570)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTROYEFFECT_OFFSET UNITYSDK_OFFSET(0x14036F00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISABLEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x1402AE10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSEPLUGINS_OFFSET UNITYSDK_OFFSET(0x14036B70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1402E9C0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ENABLEMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x1402AC30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETADAPTSCALE_OFFSET UNITYSDK_OFFSET(0x1403A610)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETANIMATORS_OFFSET UNITYSDK_OFFSET(0x14039300)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETATTACHNAME_OFFSET UNITYSDK_OFFSET(0x1402CEE0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTENTITY_OFFSET UNITYSDK_OFFSET(0x1402C490)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTGO_OFFSET UNITYSDK_OFFSET(0x1402CCB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETFLAGMASK_OFFSET UNITYSDK_OFFSET(0x1402FBA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1402CB80)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINPOSITION_OFFSET UNITYSDK_OFFSET(0x1403A170)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINROTATION_OFFSET UNITYSDK_OFFSET(0x1403A110)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETPREFABATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1402CF70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1402C3D0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETGO_OFFSET UNITYSDK_OFFSET(0x1402CDB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0x1402CD70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1403AA40)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ACCUMULATEDEFFECTTIME_OFFSET UNITYSDK_OFFSET(0x1403AD20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ATTACHTOTIMELINE_OFFSET UNITYSDK_OFFSET(0x140384A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0x1403AD00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_FROMUIMODEL_OFFSET UNITYSDK_OFFSET(0x1403AAA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_GORENDERCACHE_OFFSET UNITYSDK_OFFSET(0x1403ACF0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISFORBIDINITRENDERCACAHE_OFFSET UNITYSDK_OFFSET(0x1403A1E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISFORIBIDRESETRENDERCACHE_OFFSET UNITYSDK_OFFSET(0x14031CB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISINVISIBLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x1403AD30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISRESET_OFFSET UNITYSDK_OFFSET(0x1403AC90)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISSELFDESTROYED_OFFSET UNITYSDK_OFFSET(0x1403AC80)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1403AC70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_MANUALUPDATEPARTICLE_OFFSET UNITYSDK_OFFSET(0x14036A70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_OWNERMONO_OFFSET UNITYSDK_OFFSET(0x1403AD50)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x1403AD10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x1402FB50)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1402FB00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASHIDEREASON_OFFSET UNITYSDK_OFFSET(0x14039010)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_1_OFFSET UNITYSDK_OFFSET(0x1402FCC0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_OFFSET UNITYSDK_OFFSET(0x1402FBE0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_HIDEEFFECT_OFFSET UNITYSDK_OFFSET(0x140350F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISATTACHED_OFFSET UNITYSDK_OFFSET(0x1402CF20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISINDELAY_OFFSET UNITYSDK_OFFSET(0x1402FDB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ISPLUGINSSET_OFFSET UNITYSDK_OFFSET(0x1402F250)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_MANUALTICKVISIBLE_OFFSET UNITYSDK_OFFSET(0x14030FF0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEIN_OFFSET UNITYSDK_OFFSET(0x1402F770)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEOUT_OFFSET UNITYSDK_OFFSET(0x1402F830)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONMONOEFFECTDESTROY_OFFSET UNITYSDK_OFFSET(0x1402B600)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONPREREATTACH_OFFSET UNITYSDK_OFFSET(0x1402F410)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_ONREATTACHED_OFFSET UNITYSDK_OFFSET(0x1402F530)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_POSTAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x14039060)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_PRERESETPLUGINS_OFFSET UNITYSDK_OFFSET(0x14031D40)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_PRERESET_OFFSET UNITYSDK_OFFSET(0x1402B9A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERFADEINCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1402F8F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERREATTACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1402F650)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REPLAY_OFFSET UNITYSDK_OFFSET(0x140341F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPARTICLEEMISSION_OFFSET UNITYSDK_OFFSET(0x14030BB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPLUGINS_OFFSET UNITYSDK_OFFSET(0x14033490)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_RESET_OFFSET UNITYSDK_OFFSET(0x14032160)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_REVIVE_OFFSET UNITYSDK_OFFSET(0x14030270)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SELFDESTROY_OFFSET UNITYSDK_OFFSET(0x14038CA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_1_OFFSET UNITYSDK_OFFSET(0x14039930)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x14039380)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETATTACH_OFFSET UNITYSDK_OFFSET(0x1402CE20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTENTITY_OFFSET UNITYSDK_OFFSET(0x1402CC50)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0x1402CC00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETDONTSYNCENTITYVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1403A080)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETEFFECTPLUGINS_OFFSET UNITYSDK_OFFSET(0x1402F090)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1402FE10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISH_OFFSET UNITYSDK_OFFSET(0x1402E690)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETHIGHQUALITYEFFECTON_OFFSET UNITYSDK_OFFSET(0x14039290)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETPARTICLEEMISSIONON_OFFSET UNITYSDK_OFFSET(0x14030DA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x1402C200)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETOVERRIDEGO_OFFSET UNITYSDK_OFFSET(0x1402CD20)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x14033B00)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_GORENDERCACHE_OFFSET UNITYSDK_OFFSET(0x1403ACA0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_ISINVISIBLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x1403AD40)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SIMULATE_OFFSET UNITYSDK_OFFSET(0x14035190)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_SPAWNMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x1402B6D0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STARTALLPS_OFFSET UNITYSDK_OFFSET(0x1400DE80)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPALLPS_OFFSET UNITYSDK_OFFSET(0x1400E050)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPPARTICLEEMISSION_OFFSET UNITYSDK_OFFSET(0x14030450)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x14037C70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_TRYSIMULATEAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x14035930)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR_UNLOADLODMONOEFFECT_OFFSET UNITYSDK_OFFSET(0x14030000)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CANFOLLOWTARGETVISIBLE_OFFSET UNITYSDK_OFFSET(0x1403A870)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__CLEARTRAILRENDERS_OFFSET UNITYSDK_OFFSET(0x14037670)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__COPYANIMATOR_OFFSET UNITYSDK_OFFSET(0x14039D70)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__DISPOSETRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x14036CC0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__FIXPREWARMWITHSPEED0_OFFSET UNITYSDK_OFFSET(0x1402E360)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITBYEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x14032690)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECTANIMSTATE_OFFSET UNITYSDK_OFFSET(0x14034EE0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECT_OFFSET UNITYSDK_OFFSET(0x1402D030)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__ISENTITYINVISIBLESTATE_OFFSET UNITYSDK_OFFSET(0x1403A7E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__MOVETRAILRENDERS_OFFSET UNITYSDK_OFFSET(0x14030820)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__ONTARGETENTITYDISPOSE_OFFSET UNITYSDK_OFFSET(0x1403AB10)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RECOVEREFFECTLAYERSFROMUI3D_OFFSET UNITYSDK_OFFSET(0x140379E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYANIMATORS_OFFSET UNITYSDK_OFFSET(0x14034BB0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYPARTICLESYSTEMS_OFFSET UNITYSDK_OFFSET(0x14034800)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETMAZESKILLEFFECTSETTING_OFFSET UNITYSDK_OFFSET(0x14031E90)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x140329A0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETACTIVE_OFFSET UNITYSDK_OFFSET(0x14038E40)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETEFFECTUI3DLAYERS_OFFSET UNITYSDK_OFFSET(0x14033860)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SETUPPLUGINS_OFFSET UNITYSDK_OFFSET(0x1402F0F0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCPROPSTATE_OFFSET UNITYSDK_OFFSET(0x1403A270)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCRECORDANIMATORSTATE_OFFSET UNITYSDK_OFFSET(0x1403A460)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKTIMESCALE_OFFSET UNITYSDK_OFFSET(0x14035E30)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKVISIBLITY_OFFSET UNITYSDK_OFFSET(0x14031040)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYDISPOSEEFFECTPLUGINCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x14037810)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYRESETEFFECTPLUGINCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x140335E0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATEEFFECTPERFORMSPEED_OFFSET UNITYSDK_OFFSET(0x140385B0)
#define RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATESHADERSIMULATIONSPEED_OFFSET UNITYSDK_OFFSET(0x14038B70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectBehavior_TypeDefinitionIndex = 71815;

	class MonoEffectBehavior : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean _IsReset; // 0x18
		::System::Boolean _IsRegisteredEvent; // 0x19
		::System::Boolean _UseCasterFollowTimeScale; // 0x1A
		::System::Byte _padding0[0x5];
		::RPG::GameCore::EventManager* _EventManagerRef; // 0x20
		::RPG::GameCore::GameEntity* _CastEntityRef; // 0x28
		::UnityEngine::GameObject* _CastOverrideGORef; // 0x30
		::RPG::GameCore::GameEntity* _TargetEntityRef; // 0x38
		::UnityEngine::GameObject* _TargetOverrideGORef; // 0x40
		::System::String* _AttachPointName; // 0x48
		::System::Boolean _IsInvisibleByGamePlay_k__BackingField; // 0x50
		::System::Byte _padding1[0x3];
		::System::Single _CurrentLife; // 0x54
		::System::Int32 _EnableFrameCount; // 0x58
		::System::Single _TimeScale; // 0x5C
		::System::Single _Speed; // 0x60
		::System::Int32 _Flag; // 0x64
		::System::Int32 _HideReason; // 0x68
		::System::Single _AccumulatedEffectTime; // 0x6C
		::System::Boolean _IsSelfDestroyed; // 0x70
		::System::Boolean _IsVisible; // 0x71
		::System::Boolean _VisibleNeedRefresh; // 0x72
		::System::Boolean _FollowTargetEntityVisible; // 0x73
		::System::Boolean _FollowAttachPointVisible; // 0x74
		::System::Byte _padding2[0x3];
		::System::Single _OwnerTaskTimeScale; // 0x78
		::System::Boolean _EffectInited; // 0x7C
		::System::Byte _padding3[0x3];
		::System::Single _OriginMaxLifeTime; // 0x80
		::UnityEngine::Vector3 _OriginLocalOffset; // 0x84
		::UnityEngine::Vector3 _OriginRotationOffset; // 0x90
		::UnityEngine::Vector3 _OriginPosition; // 0x9C
		::UnityEngine::Vector3 _OriginScale; // 0xA8
		::UnityEngine::Quaternion _OriginRotation; // 0xB4
		::System::Single _OriginSelfTimeSlow; // 0xC4
		::System::Boolean _OriginDontSyncCasterVisibility; // 0xC8
		::System::Byte _padding4[0x7];
		::RPG::PoolList_1<::System::Int32>* _OriginRenderFlagList; // 0xD0
		::RPG::PoolList_1<::UnityEngine::ParticleSystemSimulationSpace>* _OriginParticleSystemSimulationSpaceList; // 0xD8
		::RPG::PoolList_1<::System::Single>* _OriginParticleSystemSimulationSpeedList; // 0xE0
		::RPG::PoolList_1<::System::Single>* _OriginParticleSystemVolocitySpeedModifierList; // 0xE8
		::RPG::PoolList_1<::System::Object*>* _OriginParticleSystemEmmisionDistanceList; // 0xF0
		::RPG::PoolList_1<::System::Int32>* _OriginGameObjectsLayerList; // 0xF8
		::UnityEngine::Transform* _EffHighRoot; // 0x100
		::RPG::GameCore::CharacterVisibleComponent* _targetEntityVisibleCompt; // 0x108
		::Il2CppArray<::MFGKBHBMMLG*>* _EffectVisibleComponents; // 0x110
		::System::Collections::Generic::List_1<::DKFPCAADLNA*>* _EffectReattachComponents; // 0x118
		::System::Collections::Generic::List_1<::DDFONBMPFDC*>* _EffectFadeComponents; // 0x120
		::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* _EffectPluginList; // 0x128
		::RPG::Client::MonoEffectPluginSpeed* _EffectPluginSpeed; // 0x130
		::DEBEAKKOHLN* _GoRendererCache; // 0x138
		::RPG::PoolList_1<::UnityEngine::Renderer*>* _posmRenderList; // 0x140
		::Il2CppArray<::EGAIAJLKEIB*>* _ResetEffectPlugins; // 0x148
		::System::Single _DelayTimer; // 0x150
		::System::Single _LastestTickDelaTime; // 0x154
		::System::Int32 _StopParticleEmissionFrame; // 0x158
		::System::Byte _padding5[0x4];
		::System::Action* _FinishCallback; // 0x160
		::RPG::GameCore::OnEventCallBack* _onTargetEntityDisposeDelegate; // 0x168
		::System::Boolean _IsAnimatorReset; // 0x170
		static ::System::String** StaticGet_EFFECT_HIGHT_ROOT_NAME()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "MonoEffectBehavior")->GetStaticField(0x68F20);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__ResetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "MonoEffectBehavior")->GetStaticField(0x68F28);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__PreResetMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "MonoEffectBehavior")->GetStaticField(0x68F30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* GetGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETGAMEOBJECT_OFFSET))(this);
		}

		::System::Void SetCastOverrideGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTOVERRIDEGO_OFFSET))(this, a1);
		}

		::System::Void SetCastEntity(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETCASTENTITY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GetCastEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTENTITY_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCastGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETCASTGO_OFFSET))(this);
		}

		::System::Void SetTargetOverrideGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETOVERRIDEGO_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetTargetOverrideGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETOVERRIDEGO_OFFSET))(this);
		}

		::System::Void SetTargetEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETTARGETENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetTargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETENTITY_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTargetGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTARGETGO_OFFSET))(this);
		}

		::System::Void SetAttach(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETATTACH_OFFSET))(this, a1, a2);
		}

		::System::String* GetAttachName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETATTACHNAME_OFFSET))(this);
		}

		::System::Boolean IsAttached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISATTACHED_OFFSET))(this);
		}

		::System::String* GetPrefabAttachPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETPREFABATTACHPOINT_OFFSET))(this);
		}

		::System::Void AwakeMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_AWAKEMONOEFFECT_OFFSET))(this);
		}

		::System::Void EnableMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ENABLEMONOEFFECT_OFFSET))(this);
		}

		::System::Void _FixPrewarmWithSpeed0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__FIXPREWARMWITHSPEED0_OFFSET))(this);
		}

		::System::Void DisableMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISABLEMONOEFFECT_OFFSET))(this);
		}

		::System::Void DestoryMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTORYMONOEFFECT_OFFSET))(this);
		}

		::System::Void SpawnMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SPAWNMONOEFFECT_OFFSET))(this);
		}

		::System::Void DespawnMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESPAWNMONOEFFECT_OFFSET))(this);
		}

		::System::Void SetEffectPlugins(::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETEFFECTPLUGINS_OFFSET))(this, a1);
		}

		::System::Boolean IsPluginsSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISPLUGINSSET_OFFSET))(this);
		}

		::System::Void AttachToTargetEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ATTACHTOTARGETENTITY_OFFSET))(this);
		}

		::System::Void OnPreReattach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONPREREATTACH_OFFSET))(this);
		}

		::System::Void OnReattached()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONREATTACHED_OFFSET))(this);
		}

		::System::Void RegisterReattachComponent(::DKFPCAADLNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKFPCAADLNA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERREATTACHCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void OnFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEIN_OFFSET))(this);
		}

		::System::Void OnFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONFADEOUT_OFFSET))(this);
		}

		::System::Void RegisterFadeInComponent(::DDFONBMPFDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDFONBMPFDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REGISTERFADEINCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void AddFlag(::RPG::GameCore::MonoEffectFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAG_OFFSET))(this, a1);
		}

		::System::Void AddFlags(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ADDFLAGS_OFFSET))(this, a1);
		}

		::System::Boolean HasFlag(::RPG::GameCore::MonoEffectFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_OFFSET))(this, a1);
		}

		static ::System::Boolean HasFlag_1(::System::Int32 a1, ::RPG::GameCore::MonoEffectFlag a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::MonoEffectFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASFLAG_1_OFFSET))(a1, a2);
		}

		::System::Int32 GetFlagMask()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETFLAGMASK_OFFSET))(this);
		}

		::System::Boolean HasOneOfFlags(::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_OFFSET))(this, a1);
		}

		static ::System::Boolean HasOneOfFlags_1(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASONEOFFLAGS_1_OFFSET))(a1, a2);
		}

		::System::Boolean IsInDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ISINDELAY_OFFSET))(this);
		}

		::System::Void SetFinish(::System::Boolean a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFinishImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETFINISHIMMEDIATELY_OFFSET))(this);
		}

		::System::Void UnloadLODMonoEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_UNLOADLODMONOEFFECT_OFFSET))(this);
		}

		::System::Void Revive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REVIVE_OFFSET))(this);
		}

		::System::Void StopParticleEmission(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPPARTICLEEMISSION_OFFSET))(this, a1);
		}

		::System::Void ResetParticleEmission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPARTICLEEMISSION_OFFSET))(this);
		}

		::System::Void SetParticleEmissionOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETPARTICLEEMISSIONON_OFFSET))(this, a1);
		}

		::System::Void ManualTickVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_MANUALTICKVISIBLE_OFFSET))(this);
		}

		::System::Void PreReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_PRERESET_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESET_OFFSET))(this);
		}

		::System::Void Replay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_REPLAY_OFFSET))(this, a1);
		}

		::System::Void TrySimulateAfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_TRYSIMULATEAFTERUPDATE_OFFSET))(this);
		}

		::System::Void Advance(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ADVANCE_OFFSET))(this, a1, a2);
		}

		::System::Void Simulate(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SIMULATE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_RESETPLUGINS_OFFSET))(this);
		}

		::System::Void PreResetPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_PRERESETPLUGINS_OFFSET))(this);
		}

		::System::Void DisposePlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSEPLUGINS_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void _DisposeTriggerParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__DISPOSETRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void DestroyEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_DESTROYEFFECT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void SelfDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SELFDESTROY_OFFSET))(this);
		}

		::System::Void OnMonoEffectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_ONMONOEFFECTDESTROY_OFFSET))(this);
		}

		::System::Void StartAllPs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STARTALLPS_OFFSET))(this);
		}

		::System::Void StopAllPs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_STOPALLPS_OFFSET))(this);
		}

		::System::Void HideEffect(::System::Boolean a1, ::RPG::Client::MonoEffectHideReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HIDEEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasHideReason(::RPG::Client::MonoEffectHideReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffectHideReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_HASHIDEREASON_OFFSET))(this, a1);
		}

		::System::Void _SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void PostAudioEvent(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_POSTAUDIOEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void SetHighQualityEffectOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETHIGHQUALITYEFFECTON_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::UnityEngine::Animator*>* GetAnimators()
		{
			return ((::RPG::PoolList_1<::UnityEngine::Animator*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETANIMATORS_OFFSET))(this);
		}

		::System::Void SetAnimatorState(::System::Int32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetAnimatorState_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETANIMATORSTATE_1_OFFSET))(this, a1, a2);
		}

		::System::Void CopyTargetAnimatorParameters(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_COPYTARGETANIMATORPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void _CopyAnimator(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__COPYANIMATOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetDontSyncEntityVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SETDONTSYNCENTITYVISIBILITY_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetOriginRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetOriginPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETORIGINPOSITION_OFFSET))(this);
		}

		::System::Void _InitEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECT_OFFSET))(this);
		}

		::System::Void _SetupPlugins(::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::Client::MonoEffectPluginBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETUPPLUGINS_OFFSET))(this, a1);
		}

		::System::Void _TryResetEffectPluginComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYRESETEFFECTPLUGINCOMPONENTS_OFFSET))(this);
		}

		::System::Void _TryDisposeEffectPluginComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TRYDISPOSEEFFECTPLUGINCOMPONENTS_OFFSET))(this);
		}

		::System::Void _InitEffectAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITEFFECTANIMSTATE_OFFSET))(this);
		}

		::System::Void _InitByEffectParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__INITBYEFFECTPARAMS_OFFSET))(this);
		}

		::System::Void _ResetTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETTRANSFORM_OFFSET))(this);
		}

		::System::Void _SyncPropState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCPROPSTATE_OFFSET))(this);
		}

		::System::Void _SyncRecordAnimatorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SYNCRECORDANIMATORSTATE_OFFSET))(this);
		}

		::System::Void _SetEffectUI3DLayers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__SETEFFECTUI3DLAYERS_OFFSET))(this);
		}

		::System::Void _RecoverEffectLayersFromUI3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RECOVEREFFECTLAYERSFROMUI3D_OFFSET))(this);
		}

		::System::Boolean _IsEntityInVisibleState(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__ISENTITYINVISIBLESTATE_OFFSET))(this, a1);
		}

		::System::Boolean _CanFollowTargetVisible(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CANFOLLOWTARGETVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _TickVisiblity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKVISIBLITY_OFFSET))(this);
		}

		::System::Void GetTimeScale(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETTIMESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void _TickTimeScale(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__TICKTIMESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateEffectPerformSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATEEFFECTPERFORMSPEED_OFFSET))(this);
		}

		::System::Void _UpdateShaderSimulationSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__UPDATESHADERSIMULATIONSPEED_OFFSET))(this, a1);
		}

		::System::Void _OnTargetEntityDispose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__ONTARGETENTITYDISPOSE_OFFSET))(this, a1);
		}

		::System::Void _ReplayParticleSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYPARTICLESYSTEMS_OFFSET))(this);
		}

		::System::Void _ReplayAnimators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__REPLAYANIMATORS_OFFSET))(this);
		}

		::System::Void _ResetMazeSkillEffectSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__RESETMAZESKILLEFFECTSETTING_OFFSET))(this);
		}

		::System::Void _ClearTrailRenders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__CLEARTRAILRENDERS_OFFSET))(this);
		}

		::System::Void _MoveTrailRenders(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR__MOVETRAILRENDERS_OFFSET))(this, a1);
		}

		::System::Single GetAdaptScale(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EffectScaleAdaptType a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EffectScaleAdaptType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GETADAPTSCALE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_FromUIModel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_FROMUIMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsSelfDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISSELFDESTROYED_OFFSET))(this);
		}

		::System::Boolean get_IsReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISRESET_OFFSET))(this);
		}

		::System::Void set_GoRenderCache(::DEBEAKKOHLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEBEAKKOHLN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_GORENDERCACHE_OFFSET))(this, a1);
		}

		::DEBEAKKOHLN* get_GoRenderCache()
		{
			return ((::DEBEAKKOHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_GORENDERCACHE_OFFSET))(this);
		}

		::System::Single get_CurrentLife()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_CURRENTLIFE_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_SPEED_OFFSET))(this);
		}

		::System::Single get_AccumulatedEffectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ACCUMULATEDEFFECTTIME_OFFSET))(this);
		}

		::System::Boolean get_IsInvisibleByGamePlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISINVISIBLEBYGAMEPLAY_OFFSET))(this);
		}

		::System::Void set_IsInvisibleByGamePlay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_SET_ISINVISIBLEBYGAMEPLAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsForbidInitRenderCacahe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISFORBIDINITRENDERCACAHE_OFFSET))(this);
		}

		::System::Boolean get_IsForibidResetRenderCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ISFORIBIDRESETRENDERCACHE_OFFSET))(this);
		}

		::System::Boolean get_ManualUpdateParticle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_MANUALUPDATEPARTICLE_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* get_OwnerMono()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_OWNERMONO_OFFSET))(this);
		}

		::System::Boolean get_AttachToTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTBEHAVIOR_GET_ATTACHTOTIMELINE_OFFSET))(this);
		}

	};
}
