#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameState.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BBOFEHOPCEC;
class EKFMIDBJDIA;
class EMJIDLCDFMI;
class GCEBGLLMGPE;
class IAJLHKIHBFB;
class KFELGAIGHAP;
class NFJIADFIJKO;
namespace Entitas { class IEntity; }
namespace RPG::Client { class LittleGameManager; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LittleGameFireEffectParams; }
namespace RPG::GameCore { class LittleGameKillEffectParams; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HCLPKMIIANI_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x15C26D80)
#define HCLPKMIIANI_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x15C268B0)
#define HCLPKMIIANI_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x15C26680)
#define HCLPKMIIANI_BGKPHMHMELD_OFFSET UNITYSDK_OFFSET(0x15C25F10)
#define HCLPKMIIANI_BHFEJACANJK_OFFSET UNITYSDK_OFFSET(0x15C26400)
#define HCLPKMIIANI_CANCLEAR_OFFSET UNITYSDK_OFFSET(0x15C274C0)
#define HCLPKMIIANI_CANSTART_OFFSET UNITYSDK_OFFSET(0x15C273F0)
#define HCLPKMIIANI_CLMPJEIAEHJ_OFFSET UNITYSDK_OFFSET(0x15C24720)
#define HCLPKMIIANI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C28230)
#define HCLPKMIIANI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15C25CC0)
#define HCLPKMIIANI_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0x15C26CF0)
#define HCLPKMIIANI_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x15C26C60)
#define HCLPKMIIANI_FBDMOGDHOGB_OFFSET UNITYSDK_OFFSET(0x15C25670)
#define HCLPKMIIANI_FIREEFFECT_OFFSET UNITYSDK_OFFSET(0x15C26EA0)
#define HCLPKMIIANI_GCBCGLLFEBF_OFFSET UNITYSDK_OFFSET(0x15C25BB0)
#define HCLPKMIIANI_GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0x15C27060)
#define HCLPKMIIANI_GETLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x15C27360)
#define HCLPKMIIANI_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x15C27150)
#define HCLPKMIIANI_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x15C270D0)
#define HCLPKMIIANI_GETSTATETREEROOT_OFFSET UNITYSDK_OFFSET(0x15C27550)
#define HCLPKMIIANI_GETTICKLODEXTRASAMPLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x15C273A0)
#define HCLPKMIIANI_GETVIEWROOT_OFFSET UNITYSDK_OFFSET(0x15C27210)
#define HCLPKMIIANI_GET_GAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x15C281F0)
#define HCLPKMIIANI_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15C28210)
#define HCLPKMIIANI_GET_STATE_OFFSET UNITYSDK_OFFSET(0x15C281D0)
#define HCLPKMIIANI_GKJLGHFCCIN_OFFSET UNITYSDK_OFFSET(0x15C26360)
#define HCLPKMIIANI_GPHKDFOLOEB_OFFSET UNITYSDK_OFFSET(0x15C27EB0)
#define HCLPKMIIANI_HDCHNPEEGFL_OFFSET UNITYSDK_OFFSET(0x15C28110)
#define HCLPKMIIANI_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15C24EF0)
#define HCLPKMIIANI_HMBANNNBHKM_OFFSET UNITYSDK_OFFSET(0x15C272A0)
#define HCLPKMIIANI_HPNGOJKPKLB_OFFSET UNITYSDK_OFFSET(0x15C258A0)
#define HCLPKMIIANI_JGMEDMOGLGO_OFFSET UNITYSDK_OFFSET(0x15C27110)
#define HCLPKMIIANI_JLAJHPDKIAF_OFFSET UNITYSDK_OFFSET(0x15C245A0)
#define HCLPKMIIANI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C25A50)
#define HCLPKMIIANI_KILLEFFECT_OFFSET UNITYSDK_OFFSET(0x15C26F30)
#define HCLPKMIIANI_KJOPDLIDLJP_OFFSET UNITYSDK_OFFSET(0x15C27890)
#define HCLPKMIIANI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C241F0)
#define HCLPKMIIANI_LHCGHJOJEBJ_OFFSET UNITYSDK_OFFSET(0x15C275A0)
#define HCLPKMIIANI_LOMKBOALLMD_OFFSET UNITYSDK_OFFSET(0x15C25170)
#define HCLPKMIIANI_NGDKAIBFEMH_OFFSET UNITYSDK_OFFSET(0x15C26460)
#define HCLPKMIIANI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15C24DD0)
#define HCLPKMIIANI_OHEIJDHDOEN_OFFSET UNITYSDK_OFFSET(0x15C27FF0)
#define HCLPKMIIANI_ONGOBJBNIDE_OFFSET UNITYSDK_OFFSET(0x15C248D0)
#define HCLPKMIIANI_PEGEBNACNCL_OFFSET UNITYSDK_OFFSET(0x15C27480)
#define HCLPKMIIANI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15C25010)
#define HCLPKMIIANI_REGISTERTASKSEQUENCES_OFFSET UNITYSDK_OFFSET(0x15C25E10)
#define HCLPKMIIANI_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x15C26E10)
#define HCLPKMIIANI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x15C26B30)
#define HCLPKMIIANI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x15C26950)
#define HCLPKMIIANI_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x15C26BD0)
#define HCLPKMIIANI_SETRENDERVISIBLE_OFFSET UNITYSDK_OFFSET(0x15C26FC0)
#define HCLPKMIIANI_SET_GAMEINSTANCEENTITY_OFFSET UNITYSDK_OFFSET(0x15C28200)
#define HCLPKMIIANI_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15C28220)
#define HCLPKMIIANI_SET_STATE_OFFSET UNITYSDK_OFFSET(0x15C281E0)
#define HCLPKMIIANI_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x15C265F0)
#define HCLPKMIIANI_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x15C26500)
#define HCLPKMIIANI__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15C27640)
#define HCLPKMIIANI__CANTICK_OFFSET UNITYSDK_OFFSET(0x15C275F0)
#define HCLPKMIIANI__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x15C27790)
#define HCLPKMIIANI__NEEDWAITSTREAMING_OFFSET UNITYSDK_OFFSET(0x15C27F30)
#define HCLPKMIIANI__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15C27850)
#define HCLPKMIIANI__ONINIT_OFFSET UNITYSDK_OFFSET(0x15C27740)
#define HCLPKMIIANI__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15C276E0)
#define HCLPKMIIANI__ONSTART_OFFSET UNITYSDK_OFFSET(0x15C277D0)
#define HCLPKMIIANI__ONSTOP_OFFSET UNITYSDK_OFFSET(0x15C27810)
#define HCLPKMIIANI__ONTICK_OFFSET UNITYSDK_OFFSET(0x15C27680)
#define HCLPKMIIANI__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x15C27C20)
#define HCLPKMIIANI__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x15C279A0)
#define HCLPKMIIANI__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x15C27E20)

inline static constexpr unsigned int HCLPKMIIANI_TypeDefinitionIndex = 60567;

	class HCLPKMIIANI : public ::System::Object
	{
	public:
		::KFELGAIGHAP* INJAFKILCKC; // 0x10
		::RPG::GameCore::GameEntity* _GameInstanceEntity_k__BackingField; // 0x18
		::KFELGAIGHAP* BKEIJFLIONC; // 0x20
		::System::String* BFDFFDNCBCA; // 0x28
		::NFJIADFIJKO* DLALHGJDNNO; // 0x30
		::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* LOOHCKGKHNJ; // 0x40
		::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* JFBFIDDALLG; // 0x50
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x58
		::KFELGAIGHAP* PIAIHCJPJDG; // 0x60
		::RPG::Client::LittleGameManager* NMKCIEGHMLF; // 0x68
		::RPG::Client::LittleGameState _State_k__BackingField; // 0x70
		::System::Boolean MLEAGNIHILM; // 0x74
		::System::Boolean EOKLHLCFLFK; // 0x75
		// static const ::System::String* GKPEEJNJBCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCLPKMIIANI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCLPKMIIANI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void RegisterTaskSequences(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_REGISTERTASKSEQUENCES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GKJLGHFCCIN(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GKJLGHFCCIN_OFFSET))(this, a1, a2);
		}

		::System::Void BHFEJACANJK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCLPKMIIANI_BHFEJACANJK_OFFSET))(this, a1);
		}

		::System::Boolean NGDKAIBFEMH(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_NGDKAIBFEMH_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerLittleGameCustomEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + HCLPKMIIANI_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
		}

		::System::Int16 EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
		}

		::System::Void AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void FireEffect(::Entitas::IEntity* a1, ::RPG::GameCore::LittleGameFireEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameFireEffectParams*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_FIREEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void KillEffect(::Entitas::IEntity* a1, ::RPG::GameCore::LittleGameKillEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::RPG::GameCore::LittleGameKillEffectParams*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_KILLEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetRenderVisible(::Entitas::IEntity* a1, ::System::Boolean a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_SETRENDERVISIBLE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GETENTITYNAME_OFFSET))(this);
		}

		::EMJIDLCDFMI* GetServices()
		{
			return ((::EMJIDLCDFMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GETSERVICES_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* JGMEDMOGLGO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_JGMEDMOGLGO_OFFSET))(this);
		}

		::System::String* GetLevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GETLEVELGRAPHPATH_OFFSET))(this);
		}

		::UnityEngine::Transform* GetViewRoot(::Entitas::IEntity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GETVIEWROOT_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGraphValueSource* HMBANNNBHKM()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_HMBANNNBHKM_OFFSET))(this);
		}

		::RPG::GameCore::LittleGameLevelConfig* GetLevelConfig()
		{
			return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GETLEVELCONFIG_OFFSET))(this);
		}

		::System::Void GetTickLodExtraSamplePositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GETTICKLODEXTRASAMPLEPOSITIONS_OFFSET))(this, a1);
		}

		::System::Boolean CanStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_CANSTART_OFFSET))(this);
		}

		::System::Boolean PEGEBNACNCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_PEGEBNACNCL_OFFSET))(this);
		}

		::System::Boolean CanClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_CANCLEAR_OFFSET))(this);
		}

		::BBOFEHOPCEC* GetStateTreeRoot(::System::Int32 a1)
		{
			return ((::BBOFEHOPCEC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GETSTATETREEROOT_OFFSET))(this, a1);
		}

		::GCEBGLLMGPE* LHCGHJOJEBJ(::System::Int32 a1)
		{
			return ((::GCEBGLLMGPE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCLPKMIIANI_LHCGHJOJEBJ_OFFSET))(this, a1);
		}

		::System::Boolean _CanTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__CANTICK_OFFSET))(this);
		}

		::System::Boolean _CanLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__CANLATEUPDATE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCLPKMIIANI__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCLPKMIIANI__ONLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + HCLPKMIIANI__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _FinishInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__FINISHINIT_OFFSET))(this);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__ONSTART_OFFSET))(this);
		}

		::System::Void _OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__ONSTOP_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__ONCLEAR_OFFSET))(this);
		}

		::System::Void KJOPDLIDLJP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_KJOPDLIDLJP_OFFSET))(this, a1);
		}

		::System::Void _SetPostProcessOnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__SETPOSTPROCESSONINIT_OFFSET))(this);
		}

		::System::Void _SetPostProcessOnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__SETPOSTPROCESSONCLEAR_OFFSET))(this);
		}

		::System::Void JLAJHPDKIAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_JLAJHPDKIAF_OFFSET))(this);
		}

		::System::Void _StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void GPHKDFOLOEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GPHKDFOLOEB_OFFSET))(this);
		}

		::System::Boolean _NeedWaitStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI__NEEDWAITSTREAMING_OFFSET))(this);
		}

		::System::Void HPNGOJKPKLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_HPNGOJKPKLB_OFFSET))(this);
		}

		::System::Void OHEIJDHDOEN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_OHEIJDHDOEN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::LockSource>* HDCHNPEEGFL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::LockSource>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_HDCHNPEEGFL_OFFSET))(this);
		}

		::System::Void ONGOBJBNIDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_ONGOBJBNIDE_OFFSET))(this);
		}

		::System::Void LOMKBOALLMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_LOMKBOALLMD_OFFSET))(this);
		}

		::System::Void BGKPHMHMELD(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_BGKPHMHMELD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLMPJEIAEHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_CLMPJEIAEHJ_OFFSET))(this);
		}

		::System::Void FBDMOGDHOGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_FBDMOGDHOGB_OFFSET))(this);
		}

		::System::Void GCBCGLLFEBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GCBCGLLFEBF_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameState get_State()
		{
			return ((::RPG::Client::LittleGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::LittleGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameState))((::PBYTE)hIl2Cpp + HCLPKMIIANI_SET_STATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_GameInstanceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GET_GAMEINSTANCEENTITY_OFFSET))(this);
		}

		::System::Void set_GameInstanceEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_SET_GAMEINSTANCEENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLPKMIIANI_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HCLPKMIIANI_SET_OWNERENTITY_OFFSET))(this, a1);
		}

	};
