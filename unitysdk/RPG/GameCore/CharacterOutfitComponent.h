#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterOutfitComponent_ESlot.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/ValueTuple_2.h"
class FJEOAPBLMKG;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xFD6D3B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_OFFSET UNITYSDK_OFFSET(0xFD6CBB0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0xFD674A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFD677F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DUPLICATETO_OFFSET UNITYSDK_OFFSET(0xFD6CAD0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARPATH_1_OFFSET UNITYSDK_OFFSET(0xFD704F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARPATH_2_OFFSET UNITYSDK_OFFSET(0xFD70300)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARPATH_OFFSET UNITYSDK_OFFSET(0xFD6D5E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELMATERIALSIMPL_OFFSET UNITYSDK_OFFSET(0xFD6E210)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERSIMPL_OFFSET UNITYSDK_OFFSET(0xFD6D790)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERS_OFFSET UNITYSDK_OFFSET(0xFD6A500)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETAVATAROUTFITTYPE_OFFSET UNITYSDK_OFFSET(0xFD6D510)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETGENDERTYPEFROMSTRING_OFFSET UNITYSDK_OFFSET(0xFD67700)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETOUTFITTYPE_OFFSET UNITYSDK_OFFSET(0xFD69300)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENTFORSTORYCHARACTER_OFFSET UNITYSDK_OFFSET(0xFD677A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xFD67640)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_2_OFFSET UNITYSDK_OFFSET(0xFD676A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xFD67550)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISEQUAL_OFFSET UNITYSDK_OFFSET(0xFD69CC0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0xFD6F660)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELSIMPL_OFFSET UNITYSDK_OFFSET(0xFD700A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELS_OFFSET UNITYSDK_OFFSET(0xFD682D0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADSOURCEOUTFITMODELS_OFFSET UNITYSDK_OFFSET(0xFD69C50)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONLOADMODEL_OFFSET UNITYSDK_OFFSET(0xFD5F230)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xFD67D50)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xFD67D90)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELCOMPONENTLOADEDART_OFFSET UNITYSDK_OFFSET(0xFD62DF0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xFD68070)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xFD680B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONPOSTMODELCOMPONENTLOADEDART_OFFSET UNITYSDK_OFFSET(0xFD62EC0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFITID_OFFSET UNITYSDK_OFFSET(0xFD68880)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFIT_OFFSET UNITYSDK_OFFSET(0xFD68F60)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_REFRESHOUTFITPARTS_OFFSET UNITYSDK_OFFSET(0xFD591F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_RESETOUTFITSPRINGBONE_OFFSET UNITYSDK_OFFSET(0xFD68820)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0xFD6C5B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFITFORSHAMAN_OFFSET UNITYSDK_OFFSET(0xFD6D0E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_1_OFFSET UNITYSDK_OFFSET(0xFD6C800)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_OFFSET UNITYSDK_OFFSET(0xFD6C7A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_TRIGGERDEFAULTCHANGEMODELEFFECTS_OFFSET UNITYSDK_OFFSET(0xFD6BE40)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__EVALUATEFORCEUSEDEFAULTOUTFITSLOT_OFFSET UNITYSDK_OFFSET(0xFD6D180)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__ONPLAYEROUTFITCHANGED_OFFSET UNITYSDK_OFFSET(0xFD6F6A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__ONPLAYERTELEPORTWITHINMAP_OFFSET UNITYSDK_OFFSET(0xFD6F860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_TypeDefinitionIndex = 58432;

	class CharacterOutfitComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::FJEOAPBLMKG*>* _OverrideOutfitModels; // 0x18
		::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* _Instance; // 0x20
		::RPG::AvatarSystem::IAvatar* _CurrentAvatar; // 0x28
		::RPG::AvatarSystem::AvatarPath* _CurrentAvatarPath; // 0x30
		::RPG::GameCore::GenderType _FakeAvatarHeroGender; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::GameCore::CharacterOutfitComponent_ESlot _ForceUseDefaultOutfitSlot; // 0x40
		::System::Byte _padding1[0x4];
		::System::Boolean _ForceUseDefaultOutfitForShaman; // 0x48
		::System::Byte _padding2[0x3];
		::RPG::GameCore::GenderType _StoryGenderType; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void InitComponent_1(::RPG::AvatarSystem::AvatarPath* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::System::Void InitComponent_2(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENT_2_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::GenderType GetGenderTypeFromString(::System::String* a1)
		{
			return ((::RPG::GameCore::GenderType(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETGENDERTYPEFROMSTRING_OFFSET))(a1);
		}

		::System::Void InitComponentForStoryCharacter(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_INITCOMPONENTFORSTORYCHARACTER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelComponentLoadedArt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELCOMPONENTLOADEDART_OFFSET))(this);
		}

		::System::Void OnPostModelComponentLoadedArt(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONPOSTMODELCOMPONENTLOADEDART_OFFSET))(this, a1);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnLoadModel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ONLOADMODEL_OFFSET))(this, a1);
		}

		::System::Void RefreshOutfitParts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_REFRESHOUTFITPARTS_OFFSET))(this);
		}

		::System::Void OverrideOutfitID(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFITID_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideOutfit(::System::Collections::Generic::List_1<::FJEOAPBLMKG*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FJEOAPBLMKG*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OVERRIDEOUTFIT_OFFSET))(this, a1, a2);
		}

		::System::Void ResetOutfitSpringBone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_RESETOUTFITSPRINGBONE_OFFSET))(this, a1);
		}

		::System::Void SetAnimatorSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETANIMATORSPEED_OFFSET))(this, a1);
		}

		static ::System::Void TriggerDefaultChangeModelEffects(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_TRIGGERDEFAULTCHANGEMODELEFFECTS_OFFSET))(a1, a2);
		}

		::System::Boolean SetForceUseDefaultOutfit(::RPG::GameCore::CharacterOutfitComponent_ESlot a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_ESlot))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_OFFSET))(this, a1);
		}

		::System::Boolean SetForceUseDefaultOutfit_1(::RPG::GameCore::CharacterOutfitComponent_ESlot a1, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a2, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_ESlot, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFIT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DuplicateTo(::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_DUPLICATETO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsEqual(::Collections::Pooled::PooledList_1<::FJEOAPBLMKG*>* a1, ::Collections::Pooled::PooledList_1<::FJEOAPBLMKG*>* a2, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a3, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Collections::Pooled::PooledList_1<::FJEOAPBLMKG*>*, ::Collections::Pooled::PooledList_1<::FJEOAPBLMKG*>*, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISEQUAL_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean Contains(::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a1, ::FJEOAPBLMKG* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*, ::FJEOAPBLMKG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_OFFSET))(a1, a2);
		}

		::System::Void SetForceUseDefaultOutfitForShaman(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_SETFORCEUSEDEFAULTOUTFITFORSHAMAN_OFFSET))(this, a1);
		}

		::System::Boolean Contains_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CONTAINS_1_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*> GetOutfitType()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETOUTFITTYPE_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*> GetAvatarOutfitType()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_GETAVATAROUTFITTYPE_OFFSET))(this);
		}

		::System::Void FindModelRenderers(::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a1, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>* a2, ::System::Collections::Generic::IList_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*, ::System::Collections::Generic::IList_1<::FJEOAPBLMKG*>*, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void FindModelMaterialsImpl(::FJEOAPBLMKG* a1, ::System::String* a2, ::System::Collections::Generic::IDictionary_2<::System::ValueTuple_2<::System::String*, ::System::UInt32>, ::System::String*>* a3)
		{
			return ((::System::Void(*)(::FJEOAPBLMKG*, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::ValueTuple_2<::System::String*, ::System::UInt32>, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELMATERIALSIMPL_OFFSET))(a1, a2, a3);
		}

		::System::Void FindModelRenderersImpl(::FJEOAPBLMKG* a1, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FJEOAPBLMKG*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_FINDMODELRENDERERSIMPL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsPlayerAvatarID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_ISPLAYERAVATARID_OFFSET))(a1);
		}

		::System::Void _OnPlayerOutfitChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__ONPLAYEROUTFITCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerTeleportWithinMap(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__ONPLAYERTELEPORTWITHINMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FJEOAPBLMKG*>* LoadOutfitModels(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::FJEOAPBLMKG*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FJEOAPBLMKG*>* LoadSourceOutfitModels()
		{
			return ((::System::Collections::Generic::List_1<::FJEOAPBLMKG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADSOURCEOUTFITMODELS_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*> EvaluateAvatarPath(::RPG::GameCore::CharacterDataComponent* a1)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*>(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARPATH_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*> EvaluateAvatarPath_1(::RPG::GameCore::AdventureCharacterDataComponent* a1)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*>(*)(::PVOID, ::RPG::GameCore::AdventureCharacterDataComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARPATH_1_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*> EvaluateAvatarPath_2(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_EVALUATEAVATARPATH_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FJEOAPBLMKG*>* LoadOutfitModelsImpl(::RPG::GameCore::GenderType a1, ::RPG::AvatarSystem::AvatarPath* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::FJEOAPBLMKG*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::AvatarSystem::AvatarPath*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_LOADOUTFITMODELSIMPL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::CharacterOutfitComponent_ESlot _EvaluateForceUseDefaultOutfitSlot(::RPG::AvatarSystem::AvatarPath* a1)
		{
			return ((::RPG::GameCore::CharacterOutfitComponent_ESlot(*)(::PVOID, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT__EVALUATEFORCEUSEDEFAULTOUTFITSLOT_OFFSET))(this, a1);
		}

	};
}
