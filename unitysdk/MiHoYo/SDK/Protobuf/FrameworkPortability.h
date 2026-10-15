#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PROTOBUF_FRAMEWORKPORTABILITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBC36A0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int FrameworkPortability_TypeDefinitionIndex = 35719;

	class FrameworkPortability : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::RegexOptions* StaticGet_CompiledRegexWhereAvailable()
		{
			return (::System::Text::RegularExpressions::RegexOptions*)UnitySDK::FromName("MiHoYo.SDK.Protobuf", "FrameworkPortability")->GetStaticField(0x13FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_FRAMEWORKPORTABILITY_CCTOR_OFFSET))();
		}

	};
}
