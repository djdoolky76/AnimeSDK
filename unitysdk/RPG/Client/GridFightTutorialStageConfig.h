#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AOBAIBBHDEL;
namespace RPG::Client { class GridFightTutorialStageConfig; }
namespace RPG::GameCore { class GridFightTutorialStageConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_CANAUTOOPENSHOP_OFFSET UNITYSDK_OFFSET(0x1CA020F0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA01C70)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA019C0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1CA01950)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_DIVISIONID_OFFSET UNITYSDK_OFFSET(0x1CA02270)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_DIVISIONNAME_OFFSET UNITYSDK_OFFSET(0x1CA02290)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENAUTOOPENSHOPNODELIST_OFFSET UNITYSDK_OFFSET(0x1CA02330)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENBATTLEFAILCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1CA02310)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENSELLROLEDICT_OFFSET UNITYSDK_OFFSET(0x1CA02320)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASBOSSTOASTSHOW_OFFSET UNITYSDK_OFFSET(0x1CA022F0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASEQUIPRECOMMENDSHOW_OFFSET UNITYSDK_OFFSET(0x1CA022E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASINITIALSUPPLY_OFFSET UNITYSDK_OFFSET(0x1CA022C0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASMONSTERREVEAL_OFFSET UNITYSDK_OFFSET(0x1CA022A0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASPORTAL_OFFSET UNITYSDK_OFFSET(0x1CA022B0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASROUTESHOW_OFFSET UNITYSDK_OFFSET(0x1CA022D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_REWARDQUEST_OFFSET UNITYSDK_OFFSET(0x1CA02280)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_USETRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x1CA02300)
#define RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_TRYTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1CA01EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTutorialStageConfig_TypeDefinitionIndex = 67430;

	class GridFightTutorialStageConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ForbiddenSellRoleDict_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::AOBAIBBHDEL*>* _ForbiddenAutoOpenShopNodeList_k__BackingField; // 0x18
		::System::UInt32 ForbiddenSellRoleBeforeSectionId; // 0x20
		::System::Boolean _HasInitialSupply_k__BackingField; // 0x24
		::System::Boolean _HasEquipRecommendShow_k__BackingField; // 0x25
		::System::Boolean _UseTrialAvatar_k__BackingField; // 0x26
		::System::Byte _padding0[0x1];
		::System::UInt32 ForbiddenSellRoleBeforeChapterId; // 0x28
		::System::Boolean _HasRouteShow_k__BackingField; // 0x2C
		::System::Boolean _HasPortal_k__BackingField; // 0x2D
		::System::Boolean _HasMonsterReveal_k__BackingField; // 0x2E
		::System::Boolean _HasBossToastShow_k__BackingField; // 0x2F
		::System::UInt32 _RewardQuest_k__BackingField; // 0x30
		::System::UInt32 _ForbiddenBattleFailChapterID_k__BackingField; // 0x34
		::System::UInt32 _DivisionID_k__BackingField; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _DivisionName_k__BackingField; // 0x40
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTutorialStageConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTutorialStageConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightTutorialStageConfig")->GetStaticField(0x17EA0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::GridFightTutorialStageConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTutorialStageConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightTutorialStageConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::Boolean TryTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_TRYTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean CanAutoOpenShop(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_CANAUTOOPENSHOP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_DivisionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_DIVISIONID_OFFSET))(this);
		}

		::System::UInt32 get_RewardQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_REWARDQUEST_OFFSET))(this);
		}

		::RPG::Client::TextID get_DivisionName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_DIVISIONNAME_OFFSET))(this);
		}

		::System::Boolean get_HasMonsterReveal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASMONSTERREVEAL_OFFSET))(this);
		}

		::System::Boolean get_HasPortal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASPORTAL_OFFSET))(this);
		}

		::System::Boolean get_HasInitialSupply()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASINITIALSUPPLY_OFFSET))(this);
		}

		::System::Boolean get_HasRouteShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASROUTESHOW_OFFSET))(this);
		}

		::System::Boolean get_HasEquipRecommendShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASEQUIPRECOMMENDSHOW_OFFSET))(this);
		}

		::System::Boolean get_HasBossToastShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_HASBOSSTOASTSHOW_OFFSET))(this);
		}

		::System::Boolean get_UseTrialAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_USETRIALAVATAR_OFFSET))(this);
		}

		::System::UInt32 get_ForbiddenBattleFailChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENBATTLEFAILCHAPTERID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ForbiddenSellRoleDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENSELLROLEDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AOBAIBBHDEL*>* get_ForbiddenAutoOpenShopNodeList()
		{
			return ((::System::Collections::Generic::List_1<::AOBAIBBHDEL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALSTAGECONFIG_GET_FORBIDDENAUTOOPENSHOPNODELIST_OFFSET))(this);
		}

	};
}
