#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PROTOBUF_FRAMEWORKPORTABILITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBE3E80)

namespace MiHoYo::SDK::Protobuf
{
	class FrameworkPortability : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::RegexOptions* StaticGet_CompiledRegexWhereAvailable()
		{
			return (::System::Text::RegularExpressions::RegexOptions*)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "FrameworkPortability")->GetStaticField(0x11AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FRAMEWORKPORTABILITY_CCTOR_OFFSET))();
		}

	};
}
