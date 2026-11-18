#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeConverter.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class ITypeDescriptorContext; }
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D9213C0)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D921910)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D921430)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D921750)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_FROMSTRINGERROR_OFFSET UNITYSDK_OFFSET(0x1D9211C0)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x1D9211B0)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D921970)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BaseNumberConverter_TypeDefinitionIndex = 3014;

	class BaseNumberConverter : public ::System::ComponentModel::TypeConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowHex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_GET_ALLOWHEX_OFFSET))(this);
		}

		::System::Exception* FromStringError(::System::String* failedText, ::System::Exception* innerException)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_FROMSTRINGERROR_OFFSET))(this, failedText, innerException);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTFROM_OFFSET))(this, context, sourceType);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTFROM_OFFSET))(this, context, culture, value);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTTO_OFFSET))(this, context, culture, value, destinationType);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTTO_OFFSET))(this, context, t);
		}
	};
}
