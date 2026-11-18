#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/InfoMessageType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE_GET_CONTINIOUSVALIDATIONCHECK_OFFSET UNITYSDK_OFFSET(0x1FB82F30)
#define SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE_SET_CONTINIOUSVALIDATIONCHECK_OFFSET UNITYSDK_OFFSET(0x1FB82F40)
#define SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB82F70)
#define SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB82F50)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ValidateInputAttribute_TypeDefinitionIndex = 7389;

	class ValidateInputAttribute : public ::System::Attribute
	{
	public:
		::System::String* MemberName; // 0x10
		::System::String* Condition; // 0x18
		::System::String* DefaultMessage; // 0x20
		::Sirenix::OdinInspector::InfoMessageType MessageType; // 0x28
		::System::Boolean ContinuousValidationCheck; // 0x2C
		::System::Boolean IncludeChildren; // 0x2D

		::System::Void _ctor(::System::String* condition, ::System::String* defaultMessage, ::Sirenix::OdinInspector::InfoMessageType messageType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::InfoMessageType))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE__CTOR_OFFSET))(this, condition, defaultMessage, messageType);
		}

		::System::Void _ctor_1(::System::String* condition, ::System::String* message, ::Sirenix::OdinInspector::InfoMessageType messageType, ::System::Boolean rejectedInvalidInput)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::InfoMessageType, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE__CTOR_1_OFFSET))(this, condition, message, messageType, rejectedInvalidInput);
		}

		::System::Boolean get_ContiniousValidationCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE_GET_CONTINIOUSVALIDATIONCHECK_OFFSET))(this);
		}

		::System::Void set_ContiniousValidationCheck(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALIDATEINPUTATTRIBUTE_SET_CONTINIOUSVALIDATIONCHECK_OFFSET))(this, value);
		}
	};
}
