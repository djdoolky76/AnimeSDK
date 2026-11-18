#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define SYSTEM_NET_MAIL_SMTPCLIENT_CANCELLATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBA5F90)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpClient_CancellationException_TypeDefinitionIndex = 3594;

	class SmtpClient_CancellationException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_CANCELLATIONEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
