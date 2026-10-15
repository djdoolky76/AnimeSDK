#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNCHJBMIMAF;
namespace RPG::Client { class MonopolyOptionalEventDisplayData; }

#define RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD8ABAB0)
#define RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD8ABB40)

namespace RPG::Client
{
	class MonopolyOptionalEventDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 EventID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MonopolyOptionalEventDisplayData* Create(::LNCHJBMIMAF* a1)
		{
			return ((::RPG::Client::MonopolyOptionalEventDisplayData*(*)(::LNCHJBMIMAF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYOPTIONALEVENTDISPLAYDATA_CREATE_OFFSET))(a1);
		}

	};
}
