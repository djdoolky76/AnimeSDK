#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGIFJCAJCPA;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6D60F0)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__COLLECTUNLOCKCONDITIONS_B__0_OFFSET UNITYSDK_OFFSET(0xD6D6650)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__COLLECTUNLOCKCONDITIONS_B__1_OFFSET UNITYSDK_OFFSET(0xD6D6900)

namespace RPG::Client
{
	class MissionChroniclePathUnlockConditionHelper___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::HGIFJCAJCPA*>* collectors; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CollectUnlockConditions_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__COLLECTUNLOCKCONDITIONS_B__0_OFFSET))(this);
		}

		::System::Void _CollectUnlockConditions_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER___C__DISPLAYCLASS0_0__COLLECTUNLOCKCONDITIONS_B__1_OFFSET))(this);
		}

	};
}
