#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RootMotionHandler.h"

#define RPG_CLIENT_PLATFORMROOTMOTIONHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE676C70)
#define RPG_CLIENT_PLATFORMROOTMOTIONHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE676D50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlatformRootMotionHandler_TypeDefinitionIndex = 70585;

	class PlatformRootMotionHandler : public ::RPG::Client::RootMotionHandler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLATFORMROOTMOTIONHANDLER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLATFORMROOTMOTIONHANDLER_AWAKE_OFFSET))(this);
		}

	};
}
