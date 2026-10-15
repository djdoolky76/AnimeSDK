#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLNKIGMDODK;
namespace RPG::Client { class AnnounceData; }

#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA14EB0)
#define RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS42_0___ONSERVERANNOUNCENOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0xDA16140)

namespace RPG::Client
{
	class OperationModule___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::NLNKIGMDODK* proto; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnServerAnnounceNotify_b__0(::RPG::Client::AnnounceData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnnounceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___C__DISPLAYCLASS42_0___ONSERVERANNOUNCENOTIFY_B__0_OFFSET))(this, a1);
		}

	};
}
