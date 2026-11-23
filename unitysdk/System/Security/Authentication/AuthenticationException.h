#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3ED0E70)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3ED0ED0)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3ED0E80)
#define SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B5EFC0)

namespace System::Security::Authentication
{
	inline static constexpr unsigned int AuthenticationException_TypeDefinitionIndex = 15183;

	class AuthenticationException : public ::System::SystemException
	{
	public:
		::System::Void _ctor(::E519989062D53DE5* EE8EA789BF8D394F, ::B6564CAC678AC465 B2E673F362AA060E)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_OFFSET))(this, EE8EA789BF8D394F, B2E673F362AA060E);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4, ::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4, FA644E43CA202E59);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_AUTHENTICATION_AUTHENTICATIONEXCEPTION__CTOR_3_OFFSET))(this);
		}
	};
}
