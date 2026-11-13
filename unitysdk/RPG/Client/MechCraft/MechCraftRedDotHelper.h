#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MECHCRAFT_MECHCRAFTREDDOTHELPER_HASNEWNORMALMECHATRON_OFFSET UNITYSDK_OFFSET(0x1C6B4530)
#define RPG_CLIENT_MECHCRAFT_MECHCRAFTREDDOTHELPER_HASNEWSPECIALMECHATRON_OFFSET UNITYSDK_OFFSET(0x1C6B3F60)

namespace RPG::Client::MechCraft
{
	inline static constexpr unsigned int MechCraftRedDotHelper_TypeDefinitionIndex = 82188;

	class MechCraftRedDotHelper : public ::System::Object
	{
	public:
		static ::System::Boolean HasNewSpecialMechatron()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_MECHCRAFTREDDOTHELPER_HASNEWSPECIALMECHATRON_OFFSET))();
		}

		static ::System::Boolean HasNewNormalMechatron()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_MECHCRAFTREDDOTHELPER_HASNEWNORMALMECHATRON_OFFSET))();
		}

	};
}
