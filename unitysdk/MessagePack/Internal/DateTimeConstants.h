#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_DATETIMECONSTANTS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD14450)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DateTimeConstants_TypeDefinitionIndex = 7300;

	class DateTimeConstants : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)UnitySDK::FromName("MessagePack.Internal", "DateTimeConstants")->GetStaticField(0xEF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DATETIMECONSTANTS_CCTOR_OFFSET))();
		}

	};
}
