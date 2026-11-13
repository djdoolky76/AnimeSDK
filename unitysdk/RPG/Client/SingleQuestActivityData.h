#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ActivityPanelSingleRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B419FC0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B419710)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GETQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1B419C60)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1B419F00)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x1B419F60)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x1B4199C0)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1B419790)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1B419A40)
#define RPG_CLIENT_SINGLEQUESTACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x1B419720)

namespace RPG::Client
{
	inline static constexpr unsigned int SingleQuestActivityData_TypeDefinitionIndex = 63069;

	class SingleQuestActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::GameCore::ActivityPanelSingleRewardRow* _SingleRewardRow; // 0xA0
		static ::Il2CppArray<::System::UInt32>** StaticGet__Empty()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "SingleQuestActivityData")->GetStaticField(0x738E0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_CCTOR_OFFSET))();
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetQuestList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GETQUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_GOTOID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SINGLEQUESTACTIVITYDATA_GET_QUESTLIST_OFFSET))(this);
		}

	};
}
