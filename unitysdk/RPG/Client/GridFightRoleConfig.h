#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/GameCore/GridFightRoleRemarkParamSource.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackExRankConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace RPG::Client { class GridFightCyreneModifyConfig; }
namespace RPG::Client { class GridFightRankSkillModifyConfig; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace RPG::Client { class GridFightSpecialModifyConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class AvatarRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DB2E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIGBYRANK_OFFSET UNITYSDK_OFFSET(0x1D4DCEB0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1D4DCDB0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEXRANKCONFIG_OFFSET UNITYSDK_OFFSET(0x1D4DCD40)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKRANKCONFIG_OFFSET UNITYSDK_OFFSET(0x1D4DCC50)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETEXPERTUNLOCKCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1D4DCFA0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETEXPERTUNLOCKSECTIONID_OFFSET UNITYSDK_OFFSET(0x1D4DD160)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETSTARCONFIG_OFFSET UNITYSDK_OFFSET(0x1D4D85D0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ALLRANKBACKEQUIPMENTDESC_OFFSET UNITYSDK_OFFSET(0x1D4DE8A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1D4DD2C0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_BACKEXRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DE820)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_BACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DE760)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_CHARGETYPECOUNT_OFFSET UNITYSDK_OFFSET(0x1D4DDC20)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_FRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x1D4DD480)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DDEC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D4D7520)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBACK_OFFSET UNITYSDK_OFFSET(0x1D4DD590)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBOTH_OFFSET UNITYSDK_OFFSET(0x1D4DD630)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYENERGYBAR_OFFSET UNITYSDK_OFFSET(0x1D4DDA10)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYHP_OFFSET UNITYSDK_OFFSET(0x1D4DDB70)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSPEED_OFFSET UNITYSDK_OFFSET(0x1D4DD940)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSP_OFFSET UNITYSDK_OFFSET(0x1D4DDAC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0x1D4DD100)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x1D4DD420)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISFRONT_OFFSET UNITYSDK_OFFSET(0x1D4DD4F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISHEALER_OFFSET UNITYSDK_OFFSET(0x1D4DD6F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0x1D4DD3D0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISSHIELD_OFFSET UNITYSDK_OFFSET(0x1D4DD750)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSPICON_OFFSET UNITYSDK_OFFSET(0x1D4DDC80)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSTAR_OFFSET UNITYSDK_OFFSET(0x1D4DD380)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DDCD0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DE860)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1D4DD310)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1D4DD7B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_RANKSKILLMODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DE7A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1D4D8980)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D4DF920)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARKSOURCE_OFFSET UNITYSDK_OFFSET(0x1D4DF900)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x1D4DF8E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DE0B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROWPRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1D4D7340)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DE2A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x1D4DE710)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SPECIALMODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DE7E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DE520)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4D9880)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITIDS_OFFSET UNITYSDK_OFFSET(0x1D4D2FC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_SET_REMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D4DF930)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_SET_REMARKSOURCE_OFFSET UNITYSDK_OFFSET(0x1D4DF910)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_SET_REMARK_OFFSET UNITYSDK_OFFSET(0x1D4DF8F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETALLRANKBACKEQUIPMENTDESC_OFFSET UNITYSDK_OFFSET(0x1D4DE8F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DDF10)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETMINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DDD20)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DE100)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETSHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DE2F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4DE570)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKEQUIPMENTCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DC640)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKEXRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DC290)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DB9B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITCYRENEMODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DC8D0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITRANKSKILLMODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DBD20)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITREMARKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DCB70)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITSPECIALMODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DBFC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITSTARCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DB4B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1D4DB750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig_TypeDefinitionIndex = 66798;

	class GridFightRoleConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>* _ModifyConfigs; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleStarConfig*>* _StarConfigs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRankSkillModifyConfig*>* _RankSkillModifyConfigs; // 0x20
		::Il2CppArray<::System::UInt32>* _RemarkParamList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* _TraitConfigs; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpecialModifyConfig*>* _SpecialModifyConfigs; // 0x38
		::RPG::GameCore::AvatarRow* _AvatarRow; // 0x40
		::RPG::GameCore::GridFightRoleConfigRow* _Row; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackEquipmentConfig*>* _BackEquipmentConfigs; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackExRankConfig*>* _BackExRankConfigs; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>* _BackRankConfigs; // 0x60
		::RPG::Client::TextID _Remark_k__BackingField; // 0x68
		::RPG::GameCore::GridFightRoleRemarkParamSource _RemarkSource_k__BackingField; // 0x78
		::System::Void _ctor(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRoleStarConfig* GetStarConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRoleStarConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETSTARCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBackRankConfig* GetBackRankConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightBackRankConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKRANKCONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightBackExRankConfig* GetBackExRankConfig()
		{
			return ((::RPG::Client::GridFightBackExRankConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEXRANKCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfig(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfigByRank(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIGBYRANK_OFFSET))(this, a1);
		}

		::System::UInt32 GetExpertUnlockChapterID(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETEXPERTUNLOCKCHAPTERID_OFFSET))(this, a1);
		}

		::System::UInt32 GetExpertUnlockSectionID(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETEXPERTUNLOCKSECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::UInt32 get_MaxStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSTAR_OFFSET))(this);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISEXPERT_OFFSET))(this);
		}

		::System::Boolean get_IsInBook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISINBOOK_OFFSET))(this);
		}

		::System::Boolean get_IsFakeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISFAKEAVATAR_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_FrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_FRONTBACKTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_RowPresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROWPRESETTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBACK_OFFSET))(this);
		}

		::System::Boolean get_IsBoth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBOTH_OFFSET))(this);
		}

		::System::Boolean get_IsHealer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISHEALER_OFFSET))(this);
		}

		::System::Boolean get_IsShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISSHIELD_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_PRICE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* get_TraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITCONFIGS_OFFSET))(this);
		}

		::System::Boolean get_IsChargeBySpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSPEED_OFFSET))(this);
		}

		::System::Boolean get_IsChargeByEnergyBar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYENERGYBAR_OFFSET))(this);
		}

		::System::Boolean get_IsChargeBySP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSP_OFFSET))(this);
		}

		::System::Boolean get_IsChargeByHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYHP_OFFSET))(this);
		}

		::System::Int32 get_ChargeTypeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_CHARGETYPECOUNT_OFFSET))(this);
		}

		::System::String* get_MaxSPIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSPICON_OFFSET))(this);
		}

		::System::String* get_MiniRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MINIROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::String* get_TeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TEAMICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_SpecialAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SPECIALAVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>* get_BackRankConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_BACKRANKCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRankSkillModifyConfig*>* get_RankSkillModifyConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRankSkillModifyConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_RANKSKILLMODIFYCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpecialModifyConfig*>* get_SpecialModifyConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpecialModifyConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SPECIALMODIFYCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackExRankConfig*>* get_BackExRankConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBackExRankConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_BACKEXRANKCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>* get_ModifyConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MODIFYCONFIGS_OFFSET))(this);
		}

		::System::String* get_AllRankBackEquipmentDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ALLRANKBACKEQUIPMENTDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_Remark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARK_OFFSET))(this);
		}

		::System::Void set_Remark(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_SET_REMARK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightRoleRemarkParamSource get_RemarkSource()
		{
			return ((::RPG::GameCore::GridFightRoleRemarkParamSource(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARKSOURCE_OFFSET))(this);
		}

		::System::Void set_RemarkSource(::RPG::GameCore::GridFightRoleRemarkParamSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleRemarkParamSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_SET_REMARKSOURCE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_RemarkParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARKPARAMLIST_OFFSET))(this);
		}

		::System::Void set_RemarkParamList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_SET_REMARKPARAMLIST_OFFSET))(this, a1);
		}

		::System::String* _GetMiniRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETMINIROUNDICONPATH_OFFSET))(this);
		}

		::System::String* _GetHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETHEADICONPATH_OFFSET))(this);
		}

		::System::String* _GetRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETROUNDICONPATH_OFFSET))(this);
		}

		::System::String* _GetShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETSHOPICONPATH_OFFSET))(this);
		}

		::System::String* _GetTeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETTEAMICONPATH_OFFSET))(this);
		}

		::System::String* _GetAllRankBackEquipmentDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETALLRANKBACKEQUIPMENTDESC_OFFSET))(this);
		}

		::System::Void _InitStarConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITSTARCONFIGS_OFFSET))(this);
		}

		::System::Void _InitTraitConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITTRAITCONFIGS_OFFSET))(this);
		}

		::System::Void _InitBackRankConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKRANKCONFIGS_OFFSET))(this);
		}

		::System::Void _InitRankSkillModifyConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITRANKSKILLMODIFYCONFIGS_OFFSET))(this);
		}

		::System::Void _InitSpecialModifyConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITSPECIALMODIFYCONFIGS_OFFSET))(this);
		}

		::System::Void _InitBackExRankConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKEXRANKCONFIGS_OFFSET))(this);
		}

		::System::Void _InitCyreneModifyConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITCYRENEMODIFYCONFIGS_OFFSET))(this);
		}

		::System::Void _InitBackEquipmentConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKEQUIPMENTCONFIGS_OFFSET))(this);
		}

		::System::Void _InitRemarkConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITREMARKCONFIGS_OFFSET))(this);
		}

	};
}
