#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class NodeUIData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCE34550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCE4DA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GETFULLNODEPROGRESSTEXT_OFFSET UNITYSDK_OFFSET(0xCE4DBA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GETNODEROMANNUMBER_OFFSET UNITYSDK_OFFSET(0xCE4DA90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0xCE4DA50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_SET_SUGGESTPOWER_OFFSET UNITYSDK_OFFSET(0xCE4DA70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_SHOWRECOMMENDPOWER_OFFSET UNITYSDK_OFFSET(0xCE4DC60)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int NodeUIData_TypeDefinitionIndex = 77756;

	class NodeUIData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _SuggestPower_k__BackingField; // 0x18
		::RPG::Client::TextID _ChapterRomanNumber; // 0x30
		::System::Boolean IsFinished; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 NodeType; // 0x44
		::System::UInt32 _Index; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _ChapterTitle; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal get_SuggestPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GET_SUGGESTPOWER_OFFSET))(this);
		}

		::System::Void set_SuggestPower(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_SET_SUGGESTPOWER_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityIdleLive::NodeUIData* Create(::RPG::Client::ActivityIdleLive::IdleLiveNode* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::NodeUIData*(*)(::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_CREATE_OFFSET))(a1);
		}

		::System::String* GetNodeRomanNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GETNODEROMANNUMBER_OFFSET))(this);
		}

		::System::String* GetFullNodeProgressText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_GETFULLNODEPROGRESSTEXT_OFFSET))(this);
		}

		::System::Boolean ShowRecommendPower()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_NODEUIDATA_SHOWRECOMMENDPOWER_OFFSET))(this);
		}

	};
}
