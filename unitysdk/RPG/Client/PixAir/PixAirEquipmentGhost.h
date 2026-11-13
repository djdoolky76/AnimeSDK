#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirGhostBase.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
namespace RPG::Client::PixAir { class PixAirTagDisplayData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CALCULATESKILLDESCRIPTIONLIST_OFFSET UNITYSDK_OFFSET(0x1E364760)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CLEARONPROPERTYCHANGEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E362C50)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CTOR_OFFSET UNITYSDK_OFFSET(0x1E362A30)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0x1E362880)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_CDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E362940)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1E35B5D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_CURRENTCD_OFFSET UNITYSDK_OFFSET(0x1E3632A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0x1E362800)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_DISPLAYTAGS_OFFSET UNITYSDK_OFFSET(0x1E363420)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1E3625B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E35B4A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISCDRESET_OFFSET UNITYSDK_OFFSET(0x1E363850)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISCORE_OFFSET UNITYSDK_OFFSET(0x1E363830)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISPLAYEREQUIPPED_OFFSET UNITYSDK_OFFSET(0x1E3637D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_LEFTMOSTINDEX_OFFSET UNITYSDK_OFFSET(0x1E363810)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E35B3F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NEEDPLAYJAMEFFECT_OFFSET UNITYSDK_OFFSET(0x1E363870)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NEEDSTOPJAMEFFECT_OFFSET UNITYSDK_OFFSET(0x1E363890)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_RUNTIMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1E362A10)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0x1E362840)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E3637F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SKILLDESCRIPTIONLIST_OFFSET UNITYSDK_OFFSET(0x1E363160)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SKILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E35B590)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_STARLEVEL_OFFSET UNITYSDK_OFFSET(0x1E35B550)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1E35B620)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_INITFROMENTITY_OFFSET UNITYSDK_OFFSET(0x1E3638B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_NOTIFYPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E362CF0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_REGISTERONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E362AD0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0x1E3636A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_CDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E363730)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1E363230)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_CURRENTCD_OFFSET UNITYSDK_OFFSET(0x1E3632F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0x1E363580)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1E362EB0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E362F20)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISCDRESET_OFFSET UNITYSDK_OFFSET(0x1E363860)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISCORE_OFFSET UNITYSDK_OFFSET(0x1E363840)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISPLAYEREQUIPPED_OFFSET UNITYSDK_OFFSET(0x1E3637E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_LEFTMOSTINDEX_OFFSET UNITYSDK_OFFSET(0x1E363820)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1E363040)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NEEDPLAYJAMEFFECT_OFFSET UNITYSDK_OFFSET(0x1E363880)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NEEDSTOPJAMEFFECT_OFFSET UNITYSDK_OFFSET(0x1E3638A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_RUNTIMEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1E362A20)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0x1E363610)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E363800)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SKILLDESCRIPTIONLIST_OFFSET UNITYSDK_OFFSET(0x1E3631A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SKILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E3630D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_STARLEVEL_OFFSET UNITYSDK_OFFSET(0x1E362FB0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_TAGS_OFFSET UNITYSDK_OFFSET(0x1E363390)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SYNCFROMENTITY_OFFSET UNITYSDK_OFFSET(0x1E365040)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_UNREGISTERONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E362BE0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipmentGhost_TypeDefinitionIndex = 81969;

	class PixAirEquipmentGhost : public ::RPG::Client::PixAir::PixAirGhostBase
	{
	public:
		::System::String* _IconPath; // 0x20
		::System::Collections::Generic::List_1<::System::Action*>* _onPropertyChangedCallbacks; // 0x28
		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* _Tags; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _SkillDescriptionList; // 0x38
		::System::String* _Name; // 0x40
		::System::String* _SkillDescription; // 0x48
		::System::Int32 _RuntimeUniqueID_k__BackingField; // 0x50
		::System::Boolean _IsLastFramJammed; // 0x54
		::System::Boolean _IsCDReset_k__BackingField; // 0x55
		::System::Boolean _NeedPlayJamEffect_k__BackingField; // 0x56
		::System::Boolean _IsPlayerEquipped_k__BackingField; // 0x57
		::System::Int32 _EquipmentID; // 0x58
		::RPG::GameCore::PixAirSlotType _Size_k__BackingField; // 0x5C
		::System::Single _CurrentCD; // 0x60
		::System::Int32 _BurnPower; // 0x64
		::System::Int32 _StarLevel; // 0x68
		::System::Int32 _ShieldPower; // 0x6C
		::System::Single _CoolDown; // 0x70
		::System::Int32 _LeftMostIndex_k__BackingField; // 0x74
		::System::Int32 _DamagePower; // 0x78
		::System::Boolean _NeedStopJamEffect_k__BackingField; // 0x7C
		::System::Boolean _IsCore_k__BackingField; // 0x7D
		::System::Byte _padding0[0x2];
		::System::Single _CDProgress; // 0x80
		::RPG::GameCore::PixAirEnchantmentType _EnchantType; // 0x84
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_RuntimeUniqueID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_RUNTIMEUNIQUEID_OFFSET))(this);
		}

		::System::Void set_RuntimeUniqueID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_RUNTIMEUNIQUEID_OFFSET))(this, a1);
		}

		::System::Void RegisterOnPropertyChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_REGISTERONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void UnregisterOnPropertyChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_UNREGISTERONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void ClearOnPropertyChangedCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CLEARONPROPERTYCHANGEDCALLBACKS_OFFSET))(this);
		}

		::System::Void NotifyPropertyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_NOTIFYPROPERTYCHANGED_OFFSET))(this);
		}

		::System::Int32 get_EquipmentID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_EQUIPMENTID_OFFSET))(this);
		}

		::System::Void set_EquipmentID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_EQUIPMENTID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Int32 get_StarLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_STARLEVEL_OFFSET))(this);
		}

		::System::Void set_StarLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_STARLEVEL_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_SkillDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SKILLDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_SkillDescription(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SKILLDESCRIPTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_SkillDescriptionList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SKILLDESCRIPTIONLIST_OFFSET))(this);
		}

		::System::Void set_SkillDescriptionList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SKILLDESCRIPTIONLIST_OFFSET))(this, a1);
		}

		::System::Single get_CoolDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_COOLDOWN_OFFSET))(this);
		}

		::System::Void set_CoolDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_COOLDOWN_OFFSET))(this, a1);
		}

		::System::Single get_CurrentCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_CURRENTCD_OFFSET))(this);
		}

		::System::Void set_CurrentCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_CURRENTCD_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_Tags()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_TAGS_OFFSET))(this);
		}

		::System::Void set_Tags(::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_TAGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTagDisplayData*>* get_DisplayTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirTagDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_DISPLAYTAGS_OFFSET))(this);
		}

		::System::Int32 get_DamagePower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_DAMAGEPOWER_OFFSET))(this);
		}

		::System::Void set_DamagePower(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_DAMAGEPOWER_OFFSET))(this, a1);
		}

		::System::Int32 get_ShieldPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SHIELDPOWER_OFFSET))(this);
		}

		::System::Void set_ShieldPower(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SHIELDPOWER_OFFSET))(this, a1);
		}

		::System::Int32 get_BurnPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_BURNPOWER_OFFSET))(this);
		}

		::System::Void set_BurnPower(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_BURNPOWER_OFFSET))(this, a1);
		}

		::System::Single get_CDProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_CDPROGRESS_OFFSET))(this);
		}

		::System::Void set_CDProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_CDPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISPLAYEREQUIPPED_OFFSET))(this);
		}

		::System::Void set_IsPlayerEquipped(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISPLAYEREQUIPPED_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirSlotType get_Size()
		{
			return ((::RPG::GameCore::PixAirSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::RPG::GameCore::PixAirSlotType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PixAirSlotType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_LeftMostIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_LEFTMOSTINDEX_OFFSET))(this);
		}

		::System::Void set_LeftMostIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_LEFTMOSTINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISCORE_OFFSET))(this);
		}

		::System::Void set_IsCore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCDReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_ISCDRESET_OFFSET))(this);
		}

		::System::Void set_IsCDReset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_ISCDRESET_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedPlayJamEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NEEDPLAYJAMEFFECT_OFFSET))(this);
		}

		::System::Void set_NeedPlayJamEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NEEDPLAYJAMEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedStopJamEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_GET_NEEDSTOPJAMEFFECT_OFFSET))(this);
		}

		::System::Void set_NeedStopJamEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SET_NEEDSTOPJAMEFFECT_OFFSET))(this, a1);
		}

		::System::Void InitFromEntity(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_INITFROMENTITY_OFFSET))(this, a1);
		}

		::System::Void CalculateSkillDescriptionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_CALCULATESKILLDESCRIPTIONLIST_OFFSET))(this);
		}

		::System::Void SyncFromEntity(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPMENTGHOST_SYNCFROMENTITY_OFFSET))(this, a1);
		}

	};
}
