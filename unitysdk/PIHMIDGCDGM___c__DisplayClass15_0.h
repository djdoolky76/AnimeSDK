#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class EnhanceSkillParam; }

#define PIHMIDGCDGM___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC262DC0)
#define PIHMIDGCDGM___C__DISPLAYCLASS15_0___ONSHOWSKILLENHANCE_B__0_OFFSET UNITYSDK_OFFSET(0xC2635C0)

	class PIHMIDGCDGM___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::EnhanceSkillParam* param; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnShowSkillEnhance_b__0(::RPG::Client::EnhanceSkillParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EnhanceSkillParam*))((::PBYTE)hIl2Cpp + PIHMIDGCDGM___C__DISPLAYCLASS15_0___ONSHOWSKILLENHANCE_B__0_OFFSET))(this, a1);
		}

	};
