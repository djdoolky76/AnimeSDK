#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/PartnerAvatarConfig.h"
#include "unitysdk/JADCEDBCKAB.h"
#include "unitysdk/KGOEPEBCOOB.h"
#include "unitysdk/LBIHODCHCPC.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_DIFFICULTYTAGID_OFFSET UNITYSDK_OFFSET(0xBB7B570)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_LEVELABILITYBUFFHANDLES_OFFSET UNITYSDK_OFFSET(0xBB7B5D0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MISCCTRLDICT_OFFSET UNITYSDK_OFFSET(0xBB7B650)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MISCTIMECTRLDICT_OFFSET UNITYSDK_OFFSET(0xBB7B630)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MONSTERVERSIONADJUSTID_OFFSET UNITYSDK_OFFSET(0xBB7B590)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_OVERRIDEHIGHPRIORITYMONSTERPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xBB7B5B0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_PARTNERAVATAR_OFFSET UNITYSDK_OFFSET(0xBB7B610)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_WEAKNESSRESISTOVERRIDEID_OFFSET UNITYSDK_OFFSET(0xBB7B5F0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xBB7B670)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_DIFFICULTYTAGID_OFFSET UNITYSDK_OFFSET(0xBB7B580)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_LEVELABILITYBUFFHANDLES_OFFSET UNITYSDK_OFFSET(0xBB7B5E0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MISCCTRLDICT_OFFSET UNITYSDK_OFFSET(0xBB7B660)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MISCTIMECTRLDICT_OFFSET UNITYSDK_OFFSET(0xBB7B640)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MONSTERVERSIONADJUSTID_OFFSET UNITYSDK_OFFSET(0xBB7B5A0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_OVERRIDEHIGHPRIORITYMONSTERPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xBB7B5C0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_PARTNERAVATAR_OFFSET UNITYSDK_OFFSET(0xBB7B620)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_WEAKNESSRESISTOVERRIDEID_OFFSET UNITYSDK_OFFSET(0xBB7B600)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7B6D0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorBasicBattleDataComponent_TypeDefinitionIndex = 82125;

	class FloorBasicBattleDataComponent
	{
	public:
		::System::Collections::Generic::Dictionary_2<::LBIHODCHCPC, ::System::Boolean>* _MiscCtrlDict_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::KGOEPEBCOOB>* _LevelAbilityBuffHandles_k__BackingField; // 0x28
		::Foundation::ViewObject::Donjon::PartnerAvatarConfig _PartnerAvatar_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::JADCEDBCKAB, ::System::Boolean>* _MiscTimeCtrlDict_k__BackingField; // 0x40
		::System::Int32 _WeaknessResistOverrideID_k__BackingField; // 0x48
		::System::Int32 _MonsterVersionAdjustID_k__BackingField; // 0x4C
		::System::Int32 _OverrideHighPriorityMonsterPlayType_k__BackingField; // 0x50
		::System::Int32 _DifficultyTagID_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DifficultyTagID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_DIFFICULTYTAGID_OFFSET))(this);
		}

		::System::Void set_DifficultyTagID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_DIFFICULTYTAGID_OFFSET))(this, value);
		}

		::System::Int32 get_MonsterVersionAdjustID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MONSTERVERSIONADJUSTID_OFFSET))(this);
		}

		::System::Void set_MonsterVersionAdjustID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MONSTERVERSIONADJUSTID_OFFSET))(this, value);
		}

		::System::Int32 get_OverrideHighPriorityMonsterPlayType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_OVERRIDEHIGHPRIORITYMONSTERPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_OverrideHighPriorityMonsterPlayType(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_OVERRIDEHIGHPRIORITYMONSTERPLAYTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::KGOEPEBCOOB>* get_LevelAbilityBuffHandles()
		{
			return ((::System::Collections::Generic::List_1<::KGOEPEBCOOB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_LEVELABILITYBUFFHANDLES_OFFSET))(this);
		}

		::System::Void set_LevelAbilityBuffHandles(::System::Collections::Generic::List_1<::KGOEPEBCOOB>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KGOEPEBCOOB>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_LEVELABILITYBUFFHANDLES_OFFSET))(this, value);
		}

		::System::Int32 get_WeaknessResistOverrideID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_WEAKNESSRESISTOVERRIDEID_OFFSET))(this);
		}

		::System::Void set_WeaknessResistOverrideID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_WEAKNESSRESISTOVERRIDEID_OFFSET))(this, value);
		}

		::Foundation::ViewObject::Donjon::PartnerAvatarConfig get_PartnerAvatar()
		{
			return ((::Foundation::ViewObject::Donjon::PartnerAvatarConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_PARTNERAVATAR_OFFSET))(this);
		}

		::System::Void set_PartnerAvatar(::Foundation::ViewObject::Donjon::PartnerAvatarConfig value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::PartnerAvatarConfig))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_PARTNERAVATAR_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::JADCEDBCKAB, ::System::Boolean>* get_MiscTimeCtrlDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::JADCEDBCKAB, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MISCTIMECTRLDICT_OFFSET))(this);
		}

		::System::Void set_MiscTimeCtrlDict(::System::Collections::Generic::Dictionary_2<::JADCEDBCKAB, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::JADCEDBCKAB, ::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MISCTIMECTRLDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::LBIHODCHCPC, ::System::Boolean>* get_MiscCtrlDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::LBIHODCHCPC, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_GET_MISCCTRLDICT_OFFSET))(this);
		}

		::System::Void set_MiscCtrlDict(::System::Collections::Generic::Dictionary_2<::LBIHODCHCPC, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::LBIHODCHCPC, ::System::Boolean>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_SET_MISCCTRLDICT_OFFSET))(this, value);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORBASICBATTLEDATACOMPONENT_ONRECYCLE_OFFSET))(this);
		}
	};
}
