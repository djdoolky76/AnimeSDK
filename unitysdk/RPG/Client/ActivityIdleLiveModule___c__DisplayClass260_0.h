#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
namespace RPG::Client::ActivityIdleLive { class CaptainData; }

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS260_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC52BD60)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS260_0___UPDATECAPTAIN_B__0_OFFSET UNITYSDK_OFFSET(0xC52C700)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c__DisplayClass260_0_TypeDefinitionIndex = 61544;

	class ActivityIdleLiveModule___c__DisplayClass260_0 : public ::System::Object
	{
	public:
		::APAMFCKFHLL* kvp; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS260_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateCaptain_b__0(::RPG::Client::ActivityIdleLive::CaptainData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C__DISPLAYCLASS260_0___UPDATECAPTAIN_B__0_OFFSET))(this, a1);
		}

	};
}
