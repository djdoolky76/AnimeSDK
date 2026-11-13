#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightPrayQuestConfig; }
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class GridFightPrayQuestConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF34D10)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF34B50)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1DF33730)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_COSTDESC_OFFSET UNITYSDK_OFFSET(0x1DF34C30)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1DF33CE0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DISPLAYDESC_OFFSET UNITYSDK_OFFSET(0x1DF33C70)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_HASCOST_OFFSET UNITYSDK_OFFSET(0x1DF34CA0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DF22950)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_PRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1DF34210)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x1DF33FF0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1DF34BC0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1DF229F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuestConfig_TypeDefinitionIndex = 66758;

	class GridFightPrayQuestConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::FinishWayRow* _FinishWayRow; // 0x10
		::RPG::GameCore::GridFightPrayQuestConfigRow* _Row; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPrayQuestConfig*>** StaticGet__PrayIDToConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightPrayQuestConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightPrayQuestConfig")->GetStaticField(0x72DB0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightPrayQuestConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPrayQuestConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_QUESTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_DisplayDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_DISPLAYDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_CostDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_COSTDESC_OFFSET))(this);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_HasCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_HASCOST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPrayType get_PrayType()
		{
			return ((::RPG::GameCore::GridFightPrayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_PRAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUESTCONFIG_GET_ISVALID_OFFSET))(this);
		}

	};
}
