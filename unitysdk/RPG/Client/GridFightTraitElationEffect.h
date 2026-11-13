#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CHKCPJLBOGE;
class JLKCBOIFJKC;
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightElationTraitEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectElationProperty; }
namespace RPG::Client { class GridFightTraitEffectElationSkill; }
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETITEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D3FAB10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETORBCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D3FAAC0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CLEARCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D3FAB60)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_COMPOSITEEQUIP_OFFSET UNITYSDK_OFFSET(0x1D3FB3B0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FABB0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x1D3FBD40)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D3FBA90)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPITEMDATAS_OFFSET UNITYSDK_OFFSET(0x1D3FBAB0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3FBDA0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D3FBBF0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_ROUNDHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3FBE10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D3FBC10)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x1D3FBC70)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_STAR_OFFSET UNITYSDK_OFFSET(0x1D3FBC30)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x1D3FB530)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1D3FB300)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3FB0E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D3FBAA0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D3FBC00)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_SKILLCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1D3FBC20)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_STAR_OFFSET UNITYSDK_OFFSET(0x1D3FB9E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_TRACKEQUIPUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3FB4E0)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__REGISTERSUMMARIZER_OFFSET UNITYSDK_OFFSET(0x1D3FB010)
#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__UPDATEINTERNEL_OFFSET UNITYSDK_OFFSET(0x1D3FB1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_TypeDefinitionIndex = 67176;

	class GridFightTraitElationEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightTraitEffectElationProperty* _PropertyProvider_k__BackingField; // 0x30
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* AdditionalProperties; // 0x38
		::System::Action_1<::RPG::Client::GridFightEquipItemData*>* _OnGetItem; // 0x40
		::System::Action_1<::RPG::Client::GridFightOrbEntityData*>* _OnGetOrb; // 0x48
		::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* _ParamConfigRow; // 0x50
		::RPG::Client::GridFightTraitEffectElationSkill* _SkillComponent_k__BackingField; // 0x58
		::RPG::Client::GridFightElationTraitEquipComponent* _EquipComponent_k__BackingField; // 0x60
		::System::UInt32 _Star; // 0x68
		::System::UInt32 _TrackEquipUpdate; // 0x6C
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddGetOrbCallback(::System::Action_1<::RPG::Client::GridFightOrbEntityData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightOrbEntityData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETORBCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddGetItemCallback(::System::Action_1<::RPG::Client::GridFightEquipItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ADDGETITEMCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ClearCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_CLEARCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate(::JLKCBOIFJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnUpdate_1(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void _UpdateInternel(::CHKCPJLBOGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHKCPJLBOGE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__UPDATEINTERNEL_OFFSET))(this, a1);
		}

		::System::Void CompositeEquip(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_COMPOSITEEQUIP_OFFSET))(this, a1);
		}

		::System::Void TrackEquipUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_TRACKEQUIPUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterSummarizer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT__REGISTERSUMMARIZER_OFFSET))(this);
		}

		::RPG::Client::GridFightElationTraitEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightElationTraitEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightElationTraitEquipComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightElationTraitEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_EQUIPCOMPONENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_EquipItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EQUIPITEMDATAS_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitEffectElationProperty* get_PropertyProvider()
		{
			return ((::RPG::Client::GridFightTraitEffectElationProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_PROPERTYPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyProvider(::RPG::Client::GridFightTraitEffectElationProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_PROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEffectElationSkill* get_SkillComponent()
		{
			return ((::RPG::Client::GridFightTraitEffectElationSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLCOMPONENT_OFFSET))(this);
		}

		::System::Void set_SkillComponent(::RPG::Client::GridFightTraitEffectElationSkill* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEffectElationSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_SKILLCOMPONENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_SET_STAR_OFFSET))(this, a1);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_SKILLDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_EffectParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_EFFECTPARAMS_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GET_ROUNDHEADICONPATH_OFFSET))(this);
		}

	};
}
