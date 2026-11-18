#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1CFBD6C0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GET_HELPTOPIC_OFFSET UNITYSDK_OFFSET(0x1CFBD6B0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GET_HELPURL_OFFSET UNITYSDK_OFFSET(0x1CFBD6A0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFBD370)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CFBD410)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1CFBD4B0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1CFBD2C0)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1CFBD540)
#define SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBD230)

namespace System::ComponentModel
{
	inline static constexpr unsigned int WarningException_TypeDefinitionIndex = 3012;

	class WarningException : public ::System::SystemException
	{
	public:
		::System::String* helpUrl; // 0x88
		::System::String* helpTopic; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::String* helpUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_2_OFFSET))(this, message, helpUrl);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_4(::System::String* message, ::System::String* helpUrl, ::System::String* helpTopic)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_4_OFFSET))(this, message, helpUrl, helpTopic);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION__CTOR_5_OFFSET))(this, info, context);
		}

		::System::String* get_HelpUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GET_HELPURL_OFFSET))(this);
		}

		::System::String* get_HelpTopic()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GET_HELPTOPIC_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WARNINGEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
