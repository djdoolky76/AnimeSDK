#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattlePhaseFinishType.h"
#include "unitysdk/RPG/Client/LevelDirector.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
class BLBINLBGNLI;
class EKFMIDBJDIA;
class JAKJKCPJEPF;
namespace RPG::Client { class LevelStageVisableController; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLELEVELDIRECTOR_BATTLEPHASEFINISH_OFFSET UNITYSDK_OFFSET(0xD1A1B60)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_BINDCURRSTAGE_OFFSET UNITYSDK_OFFSET(0xD198170)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD197040)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD18FE40)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_AUTOTOTALDAMAGEFINISH_OFFSET UNITYSDK_OFFSET(0xD1A3170)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0xD1A3190)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CUSTOMIZEFORMATION_OFFSET UNITYSDK_OFFSET(0xD1A3150)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_GET_ROOTSTAGEVISABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xD1A31B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELCREATEPLAYERTEAMFINISH_OFFSET UNITYSDK_OFFSET(0xD19B460)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELPREBATTLEPERFORM_OFFSET UNITYSDK_OFFSET(0xD195820)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHDARKTEAMFACETO_OFFSET UNITYSDK_OFFSET(0xD195F60)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHTEAMLOCATION_OFFSET UNITYSDK_OFFSET(0xD195B90)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESETLEVELAREAROOTTOCENTER_OFFSET UNITYSDK_OFFSET(0xD19B6B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESULTPERFORM_OFFSET UNITYSDK_OFFSET(0xD195AA0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_AUTOTOTALDAMAGEFINISH_OFFSET UNITYSDK_OFFSET(0xD1A3180)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0xD1A31A0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CUSTOMIZEFORMATION_OFFSET UNITYSDK_OFFSET(0xD1A3160)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_SET_ROOTSTAGEVISABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xD1A31C0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR_TICK_OFFSET UNITYSDK_OFFSET(0xD1944B0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__DARKTEAMENTITYFACETO_OFFSET UNITYSDK_OFFSET(0xD1A2230)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__DODARKTEAMFACETOACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xD1A1200)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ENTITYPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xD1A3100)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__FINDROTATEWITHOTHERENTITY_OFFSET UNITYSDK_OFFSET(0xD1A1E00)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__INITEVENT_OFFSET UNITYSDK_OFFSET(0xD1A0C00)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONACTIONENTITYADDMODIFIEREVENT_OFFSET UNITYSDK_OFFSET(0xD1A2B70)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONLEVELTURNSTATECHANGEEVENT_OFFSET UNITYSDK_OFFSET(0xD1A2800)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__ONSINGLEINSERTABILITYFINISHORABORTEVENT_OFFSET UNITYSDK_OFFSET(0xD1A2AA0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__RESETALLENTITYFACEDIR_OFFSET UNITYSDK_OFFSET(0xD1A0E20)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__RESETENTITYFACEDIR_OFFSET UNITYSDK_OFFSET(0xD1A1BD0)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPCLOSEUPSHOT_OFFSET UNITYSDK_OFFSET(0xD1A1670)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPTEAMFORMATION_OFFSET UNITYSDK_OFFSET(0xD1A2C50)
#define RPG_CLIENT_BATTLELEVELDIRECTOR__UNINITEVENT_OFFSET UNITYSDK_OFFSET(0xD1A0D10)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleLevelDirector_TypeDefinitionIndex = 60577;

	class BattleLevelDirector : public ::RPG::Client::LevelDirector
	{
	public:
		::RPG::Client::Stage* _CurrStage_k__BackingField; // 0x40
		::RPG::Client::LevelStageVisableController* _RootStageVisableController_k__BackingField; // 0x48
		::BLBINLBGNLI* SPTGroup; // 0x50
		::JAKJKCPJEPF* _CustomizeFormation_k__BackingField; // 0x58
		::System::Boolean _AutoTotalDamageFinish_k__BackingField; // 0x60
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LevelRefreshTeamLocation(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHTEAMLOCATION_OFFSET))(this, a1, a2);
		}

		::System::Void LevelRefreshDarkTeamFaceTo(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELREFRESHDARKTEAMFACETO_OFFSET))(this, a1);
		}

		::System::Void LevelResetLevelAreaRootToCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESETLEVELAREAROOTTOCENTER_OFFSET))(this);
		}

		::System::Void LevelPreBattlePerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELPREBATTLEPERFORM_OFFSET))(this);
		}

		::System::Void LevelResultPerform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELRESULTPERFORM_OFFSET))(this, a1);
		}

		::System::Void LevelCreatePlayerTeamFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_LEVELCREATEPLAYERTEAMFINISH_OFFSET))(this);
		}

		::System::Void BattlePhaseFinish(::RPG::Client::BattlePhaseFinishType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePhaseFinishType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_BATTLEPHASEFINISH_OFFSET))(this, a1);
		}

		::System::Void _InitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__INITEVENT_OFFSET))(this);
		}

		::System::Void _UnInitEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__UNINITEVENT_OFFSET))(this);
		}

		::System::Void _ResetAllEntityFaceDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__RESETALLENTITYFACEDIR_OFFSET))(this);
		}

		::System::Void _ResetEntityFaceDir(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__RESETENTITYFACEDIR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _FindRotateWithOtherEntity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Object* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__FINDROTATEWITHOTHERENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _DoDarkTeamFaceToActiveEntity(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamFormationComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamFormationComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__DODARKTEAMFACETOACTIVEENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void _DarkTeamEntityFaceTo(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TeamFormationComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamFormationComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__DARKTEAMENTITYFACETO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnLevelTurnStateChangeEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONLEVELTURNSTATECHANGEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnSingleInsertAbilityFinishOrAbortEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONSINGLEINSERTABILITYFINISHORABORTEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnActionEntityAddModifierEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ONACTIONENTITYADDMODIFIEREVENT_OFFSET))(this, a1);
		}

		::System::Void _SetupTeamFormation(::RPG::GameCore::TeamFormationComponent* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::Il2CppArray<::RPG::MVector3>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Il2CppArray<::RPG::MVector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPTEAMFORMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetupCloseupShot(::System::String* a1, ::System::Single a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::MVector3 a5, ::RPG::MVector3 a6, ::System::Nullable_1<::RPG::MQuaternion> a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Nullable_1<::RPG::MQuaternion>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__SETUPCLOSEUPSHOT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _EntityPlayAnimation(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR__ENTITYPLAYANIMATION_OFFSET))(this, a1);
		}

		::JAKJKCPJEPF* get_CustomizeFormation()
		{
			return ((::JAKJKCPJEPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CUSTOMIZEFORMATION_OFFSET))(this);
		}

		::System::Void set_CustomizeFormation(::JAKJKCPJEPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAKJKCPJEPF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CUSTOMIZEFORMATION_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoTotalDamageFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_AUTOTOTALDAMAGEFINISH_OFFSET))(this);
		}

		::System::Void set_AutoTotalDamageFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_AUTOTOTALDAMAGEFINISH_OFFSET))(this, a1);
		}

		::RPG::Client::Stage* get_CurrStage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_CURRSTAGE_OFFSET))(this);
		}

		::System::Void set_CurrStage(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_CURRSTAGE_OFFSET))(this, a1);
		}

		::System::Void BindCurrStage(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_BINDCURRSTAGE_OFFSET))(this, a1);
		}

		::RPG::Client::LevelStageVisableController* get_RootStageVisableController()
		{
			return ((::RPG::Client::LevelStageVisableController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_GET_ROOTSTAGEVISABLECONTROLLER_OFFSET))(this);
		}

		::System::Void set_RootStageVisableController(::RPG::Client::LevelStageVisableController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LevelStageVisableController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLELEVELDIRECTOR_SET_ROOTSTAGEVISABLECONTROLLER_OFFSET))(this, a1);
		}

	};
}
