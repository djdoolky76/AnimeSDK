#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCBBA7A0)
#define RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS19_0__DOCHECKWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xCBBA7F0)

namespace RPG::Client
{
	class ConditionChecker___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::ConditionChecker* __4__this; // 0x10
		::RPG::Client::Promises::Promise* checkResultPromise; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void _DoCheckWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS19_0__DOCHECKWITHPROMISE_B__0_OFFSET))(this);
		}

	};
}
