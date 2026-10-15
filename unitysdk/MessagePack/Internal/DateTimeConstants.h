#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_DATETIMECONSTANTS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB8B5E0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DateTimeConstants_TypeDefinitionIndex = 7289;

	class DateTimeConstants : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)UnitySDK::FromName("MessagePack.Internal", "DateTimeConstants")->GetStaticField(0x82C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DATETIMECONSTANTS_CCTOR_OFFSET))();
		}

	};
}
