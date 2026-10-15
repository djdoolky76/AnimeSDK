#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBNKDHCIJPH;
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaResultItemData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC4D5070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0xC4D5D90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaResult___c__DisplayClass0_0_TypeDefinitionIndex = 75257;

	class IdleLiveGachaResult___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::EBNKDHCIJPH* item; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__1(::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveGachaResultItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHARESULT___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET))(this, a1);
		}

	};
}
