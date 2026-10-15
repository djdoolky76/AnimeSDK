#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKFGIMIBBHF;
namespace RPG::Client { class RogueTalentUnlockData; }

#define RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDF736A0)
#define RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__UPDATESRVDATA_B__0_OFFSET UNITYSDK_OFFSET(0xDF73FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentDataItem___c__DisplayClass5_0_TypeDefinitionIndex = 67473;

	class RogueTalentDataItem___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::GKFGIMIBBHF* srvData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateSrvData_b__0(::RPG::Client::RogueTalentUnlockData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTalentUnlockData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATAITEM___C__DISPLAYCLASS5_0__UPDATESRVDATA_B__0_OFFSET))(this, a1);
		}

	};
}
