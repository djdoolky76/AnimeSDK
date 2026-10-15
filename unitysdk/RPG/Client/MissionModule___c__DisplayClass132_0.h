#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class MissionCondition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS132_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6E7C90)
#define RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS132_0___GETFAILUREMISSIONCONDITIONWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xD708300)

namespace RPG::Client
{
	class MissionModule___c__DisplayClass132_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* resultPromise; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* param; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS132_0_CTOR_OFFSET))(this);
		}

		::System::Void __GetFailureMissionConditionWithPromise_b__0(::System::Collections::Generic::List_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONMODULE___C__DISPLAYCLASS132_0___GETFAILUREMISSIONCONDITIONWITHPROMISE_B__0_OFFSET))(this, a1);
		}

	};
}
