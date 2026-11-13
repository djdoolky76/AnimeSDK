#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
namespace RPG::GameCore { class ActivityFarmMultipleDropRow; }

#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A196540)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_GET_MULTIPLEDROPID_OFFSET UNITYSDK_OFFSET(0x1A196710)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_GET_MULTIPLEDROPTYPES_OFFSET UNITYSDK_OFFSET(0x1A196730)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A196ED0)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x1A196930)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x1A196990)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1A196790)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_SET_MULTIPLEDROPID_OFFSET UNITYSDK_OFFSET(0x1A196720)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x1A196F90)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET UNITYSDK_OFFSET(0x1A196CB0)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__ISMULTIPLEDROPVAILD_OFFSET UNITYSDK_OFFSET(0x1A196880)
#define RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0x1A196550)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropActivityData_TypeDefinitionIndex = 63040;

	class MultipleDropActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::RPG::GameCore::ActivityFarmMultipleDropRow* MultipleDropRow; // 0xA0
		::System::UInt32 _MultipleDropID_k__BackingField; // 0xA8
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__ONINIT_OFFSET))(this);
		}

		::System::UInt32 get_MultipleDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_GET_MULTIPLEDROPID_OFFSET))(this);
		}

		::System::Void set_MultipleDropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_SET_MULTIPLEDROPID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::MultipleDropTypeConfig>* get_MultipleDropTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::MultipleDropTypeConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_GET_MULTIPLEDROPTYPES_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsMultipleDropVaild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA__ISMULTIPLEDROPVAILD_OFFSET))(this);
		}

		::System::Void UpdateRedDotStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_UPDATEREDDOTSTATUS_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

	};
}
