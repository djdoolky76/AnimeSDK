#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class OBJANKHLNGO;
namespace RPG::Client::PixAir { class PixAirEquipViewModel; }
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1E35FCE0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3613C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0x1E361A90)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_CDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E3628C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1E362720)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0x1E361890)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLEBURN_OFFSET UNITYSDK_OFFSET(0x1E358840)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1E3587C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLESHIELD_OFFSET UNITYSDK_OFFSET(0x1E358800)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_EQUIPMENTID_OFFSET UNITYSDK_OFFSET(0x1E362540)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1E358750)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ISPLAYEREQUIPPED_OFFSET UNITYSDK_OFFSET(0x1E362990)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E3625F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ONCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1E3629F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0x1E361990)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E362660)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SKILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E3626B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_STARLEVEL_OFFSET UNITYSDK_OFFSET(0x1E358CA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1E362790)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLEBURN_OFFSET UNITYSDK_OFFSET(0x1E361B00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLEDAMAGE_OFFSET UNITYSDK_OFFSET(0x1E361900)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLESHIELD_OFFSET UNITYSDK_OFFSET(0x1E361A00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ONCLICKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1E362A00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1E3613E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__ONCLICK_OFFSET UNITYSDK_OFFSET(0x1E362410)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__ONGHOSTPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E361B90)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipViewModel_TypeDefinitionIndex = 82042;

	class PixAirEquipViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _OnClickCommand_k__BackingField; // 0x20
		::OBJANKHLNGO* _UIMessenger; // 0x28
		::RPG::Client::PixAir::PixAirEquipmentGhost* _Ghost; // 0x30
		::System::Boolean _EnableDamage; // 0x38
		::System::Boolean _EnableShield; // 0x39
		::System::Boolean _EnableBurn; // 0x3A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirEquipViewModel* Create(::RPG::Client::PixAir::PixAirEquipmentGhost* a1, ::OBJANKHLNGO* a2)
		{
			return ((::RPG::Client::PixAir::PixAirEquipViewModel*(*)(::RPG::Client::PixAir::PixAirEquipmentGhost*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnGhostPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__ONGHOSTPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL__ONCLICK_OFFSET))(this);
		}

		::System::Int32 get_EquipmentID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_EQUIPMENTID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Int32 get_StarLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_STARLEVEL_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::PixAirSlotType get_Size()
		{
			return ((::RPG::GameCore::PixAirSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SIZE_OFFSET))(this);
		}

		::System::String* get_SkillDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SKILLDESCRIPTION_OFFSET))(this);
		}

		::System::Single get_CoolDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_COOLDOWN_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PixAirEquipTag>* get_Tags()
		{
			return ((::Il2CppArray<::RPG::GameCore::PixAirEquipTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_TAGS_OFFSET))(this);
		}

		::System::Int32 get_DamagePower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_DAMAGEPOWER_OFFSET))(this);
		}

		::System::Int32 get_ShieldPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_SHIELDPOWER_OFFSET))(this);
		}

		::System::Int32 get_BurnPower()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_BURNPOWER_OFFSET))(this);
		}

		::System::Single get_CDProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_CDPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_EnableDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLEDAMAGE_OFFSET))(this);
		}

		::System::Void set_EnableDamage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLEDAMAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLESHIELD_OFFSET))(this);
		}

		::System::Void set_EnableShield(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLESHIELD_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableBurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ENABLEBURN_OFFSET))(this);
		}

		::System::Void set_EnableBurn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ENABLEBURN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerEquipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ISPLAYEREQUIPPED_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_OnClickCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_GET_ONCLICKCOMMAND_OFFSET))(this);
		}

		::System::Void set_OnClickCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPVIEWMODEL_SET_ONCLICKCOMMAND_OFFSET))(this, a1);
		}

	};
}
