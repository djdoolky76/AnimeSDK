#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PACKAGESTYLECHECK_CHECKISVIETNAMPACKAGE_OFFSET UNITYSDK_OFFSET(0xDA6B570)

namespace RPG::Client
{
	class PackageStyleCheck : public ::System::Object
	{
	public:
		// static const ::System::String* _VietnamChannelLiveName; // 0x0
		// static const ::System::String* _VietnamChannelTestName; // 0x0
		static ::System::Boolean CheckIsVietnamPackage()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PACKAGESTYLECHECK_CHECKISVIETNAMPACKAGE_OFFSET))();
		}

	};
}
