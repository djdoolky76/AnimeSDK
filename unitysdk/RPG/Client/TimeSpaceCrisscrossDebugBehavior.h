#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class TimeSpaceCrisscrossDebugMonoPlugin; }

#define RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE28E9D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE28E950)
#define RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE28D930)
#define RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE28DA50)
#define RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE28D9D0)
#define RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE28DAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeSpaceCrisscrossDebugBehavior_TypeDefinitionIndex = 70199;

	class TimeSpaceCrisscrossDebugBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::TimeSpaceCrisscrossDebugMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossDebugMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMESPACECRISSCROSSDEBUGBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
