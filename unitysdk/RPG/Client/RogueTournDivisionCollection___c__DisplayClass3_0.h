#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournDivisionData; }

#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE3B00)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__DISPLAYCLASS3_0__GETDIVISIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0xDFE4810)

namespace RPG::Client
{
	class RogueTournDivisionCollection___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 divisionLevel; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDivisionData_b__0(::RPG::Client::RogueTournDivisionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournDivisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C__DISPLAYCLASS3_0__GETDIVISIONDATA_B__0_OFFSET))(this, a1);
		}

	};
}
