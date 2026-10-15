#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/Object.h"

#define GOOGLE_PROTOBUF_FRAMEWORKPORTABILITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B836190)

namespace Google::Protobuf
{
	inline static constexpr unsigned int FrameworkPortability_TypeDefinitionIndex = 5393;

	class FrameworkPortability : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::RegexOptions* StaticGet_CompiledRegexWhereAvailable()
		{
			return (::System::Text::RegularExpressions::RegexOptions*)UnitySDK::FromName("Google.Protobuf", "FrameworkPortability")->GetStaticField(0x6DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FRAMEWORKPORTABILITY_CCTOR_OFFSET))();
		}

	};
}
