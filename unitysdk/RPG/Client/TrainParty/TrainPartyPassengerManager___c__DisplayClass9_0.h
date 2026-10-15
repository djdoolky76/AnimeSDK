#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMKECAPDMAC;
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE2F73E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__DISPLAYCLASS9_0__UPDATESKILLINFO_B__0_OFFSET UNITYSDK_OFFSET(0xE2F9450)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerManager___c__DisplayClass9_0_TypeDefinitionIndex = 74348;

	class TrainPartyPassengerManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::LMKECAPDMAC* skillInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateSkillInfo_b__0(::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER___C__DISPLAYCLASS9_0__UPDATESKILLINFO_B__0_OFFSET))(this, a1);
		}

	};
}
