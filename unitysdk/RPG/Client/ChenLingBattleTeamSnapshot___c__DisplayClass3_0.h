#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKEFAMNAFAK;
namespace RPG::Client::ChenLingBattle { class Policy; }

#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26E180)
#define RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS3_0__ATTACHPOLICYSKILLS_B__0_OFFSET UNITYSDK_OFFSET(0x1E26F8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleTeamSnapshot___c__DisplayClass3_0_TypeDefinitionIndex = 62820;

	class ChenLingBattleTeamSnapshot___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::Policy* policy; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _AttachPolicySkills_b__0(::DKEFAMNAFAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKEFAMNAFAK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLETEAMSNAPSHOT___C__DISPLAYCLASS3_0__ATTACHPOLICYSKILLS_B__0_OFFSET))(this, a1);
		}

	};
}
