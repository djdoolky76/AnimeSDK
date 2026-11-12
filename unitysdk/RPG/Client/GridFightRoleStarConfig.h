#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OFAKEFLLHNP;
namespace RPG::Client { class GridFightFrontSpecialSPConfig; }
namespace RPG::Client { class GridFightRoleSkillConfig; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightRoleServantStarConfigRow; }
namespace RPG::GameCore { class GridFightRoleStarConfigRow; }

#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDC512A0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GETORIGINALAVATARSKILLID_OFFSET UNITYSDK_OFFSET(0xDC61630)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GETORIGINALSERVANTSKILLID_OFFSET UNITYSDK_OFFSET(0xDC61750)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKPOWERBASE_OFFSET UNITYSDK_OFFSET(0xDC41880)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSHOWSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xDC60020)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xDC61140)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0xDC64920)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSPMODIFIER_OFFSET UNITYSDK_OFFSET(0xDC64930)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_DEFAULTSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xDC647C0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_ENERGYBAR_OFFSET UNITYSDK_OFFSET(0xDC41A50)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTPOWERBASE_OFFSET UNITYSDK_OFFSET(0xDC41820)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSHOWSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xDC5FB50)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xDC61070)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSPECIALSPCONFIG_OFFSET UNITYSDK_OFFSET(0xDC64860)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_GENERALPROPERTYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xDC648D0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HASFRONTSPECIALSPCONFIG_OFFSET UNITYSDK_OFFSET(0xDC64880)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HEALBASE_OFFSET UNITYSDK_OFFSET(0xDC419A0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HPADDEDRATIO2_OFFSET UNITYSDK_OFFSET(0xDC41B40)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_INITIALENERGYBAR_OFFSET UNITYSDK_OFFSET(0xDC41EB0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_INITIALSPECIALSP_OFFSET UNITYSDK_OFFSET(0xDC40BA0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_LUCKCHANCE_OFFSET UNITYSDK_OFFSET(0xDC418E0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_LUCKDAMAGE_OFFSET UNITYSDK_OFFSET(0xDC41940)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SERVANTSHOWSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xDC5FE50)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SHIELDBASE_OFFSET UNITYSDK_OFFSET(0xDC419F0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SPECIALMAXSP_OFFSET UNITYSDK_OFFSET(0xDC41AB0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_SET_FRONTSPECIALSPCONFIG_OFFSET UNITYSDK_OFFSET(0xDC64870)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleStarConfig_TypeDefinitionIndex = 66803;

	class GridFightRoleStarConfig : public ::System::Object
	{
	public:
		::OFAKEFLLHNP* _BackSpeedModifier_k__BackingField; // 0x10
		::RPG::GameCore::GridFightRoleServantStarConfigRow* _ServantStarRow; // 0x18
		::RPG::Client::GridFightRoleSkillConfig* _FrontSkillConfig; // 0x20
		::OFAKEFLLHNP* _BackSPModifier_k__BackingField; // 0x28
		::RPG::Client::GridFightRoleSkillConfig* _BackSkillConfig; // 0x30
		::RPG::Client::GridFightFrontSpecialSPConfig* _FrontSpecialSPConfig_k__BackingField; // 0x38
		::RPG::GameCore::GridFightRoleStarConfigRow* _Row; // 0x40
		::System::Void _ctor(::RPG::GameCore::GridFightRoleStarConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleStarConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetOriginalAvatarSkillID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GETORIGINALAVATARSKILLID_OFFSET))(this, a1);
		}

		::System::UInt32 GetOriginalServantSkillID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GETORIGINALSERVANTSKILLID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleSkillConfig* get_DefaultSkillConfig()
		{
			return ((::RPG::Client::GridFightRoleSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_DEFAULTSKILLCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillConfig* get_FrontSkillConfig()
		{
			return ((::RPG::Client::GridFightRoleSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSKILLCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillConfig* get_BackSkillConfig()
		{
			return ((::RPG::Client::GridFightRoleSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSKILLCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightFrontSpecialSPConfig* get_FrontSpecialSPConfig()
		{
			return ((::RPG::Client::GridFightFrontSpecialSPConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSPECIALSPCONFIG_OFFSET))(this);
		}

		::System::Void set_FrontSpecialSPConfig(::RPG::Client::GridFightFrontSpecialSPConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFrontSpecialSPConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_SET_FRONTSPECIALSPCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_HasFrontSpecialSPConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HASFRONTSPECIALSPCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_FrontPowerBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTPOWERBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BackPowerBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKPOWERBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_LuckChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_LUCKCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_LuckDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_LUCKDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_HealBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HEALBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_ShieldBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SHIELDBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitialEnergyBar()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_INITIALENERGYBAR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_EnergyBar()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_ENERGYBAR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_HPAddedRatio2()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HPADDEDRATIO2_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SpecialMaxSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SPECIALMAXSP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitialSpecialSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_INITIALSPECIALSP_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FrontShowSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSHOWSKILLIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BackShowSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSHOWSKILLIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ServantShowSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SERVANTSHOWSKILLIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_GeneralPropertyModifiers()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_GENERALPROPERTYMODIFIERS_OFFSET))(this);
		}

		::OFAKEFLLHNP* get_BackSpeedModifier()
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSPEEDMODIFIER_OFFSET))(this);
		}

		::OFAKEFLLHNP* get_BackSPModifier()
		{
			return ((::OFAKEFLLHNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSPMODIFIER_OFFSET))(this);
		}

	};
}
