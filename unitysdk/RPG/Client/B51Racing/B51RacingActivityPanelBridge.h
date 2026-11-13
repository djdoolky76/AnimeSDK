#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PANFFLNPILM;
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE_ENTERLIGHTCONEREWARD_OFFSET UNITYSDK_OFFSET(0x1B102310)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE_ENTERLIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0x1B102130)
#define RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE__RESOLVEMAINPAGESERVICE_OFFSET UNITYSDK_OFFSET(0x1B1021B0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingActivityPanelBridge_TypeDefinitionIndex = 84733;

	class B51RacingActivityPanelBridge : public ::System::Object
	{
	public:
		static ::System::Void EnterLimitedReward()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE_ENTERLIMITEDREWARD_OFFSET))();
		}

		static ::System::Void EnterLightConeReward()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE_ENTERLIGHTCONEREWARD_OFFSET))();
		}

		static ::PANFFLNPILM* _ResolveMainPageService(::System::String* a1)
		{
			return ((::PANFFLNPILM*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGACTIVITYPANELBRIDGE__RESOLVEMAINPAGESERVICE_OFFSET))(a1);
		}

	};
}
