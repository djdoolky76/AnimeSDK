#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTCLASS_OFFSET UNITYSDK_OFFSET(0x1E29F7B0)
#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTENUM_OFFSET UNITYSDK_OFFSET(0x1E29EA30)
#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E29F740)
#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E29F990)
#define UNREALTYPES_CODEGENPRIVATE_CONSTRUCTSCRIPTSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E29C710)

namespace UnrealTypes
{
	inline static constexpr unsigned int CodeGenPrivate_TypeDefinitionIndex = 27790;

	class CodeGenPrivate : public ::System::Object
	{
	public:
		static ::System::Void ConstructEnum(::UnrealTypes::Enum*& outEnum, ::UnrealTypes::EnumParams* params)
		{
			return ((::System::Void(*)(::UnrealTypes::Enum*&, ::UnrealTypes::EnumParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTENUM_OFFSET))(outEnum, params);
		}

		static ::System::Void ConstructScriptStruct(::UnrealTypes::ScriptStruct*& outScriptStruct, ::UnrealTypes::StructParams* params)
		{
			return ((::System::Void(*)(::UnrealTypes::ScriptStruct*&, ::UnrealTypes::StructParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTSCRIPTSTRUCT_OFFSET))(outScriptStruct, params);
		}

		static ::System::Void ConstructClass(::UnrealTypes::Class*& outClass, ::UnrealTypes::ClassParams* params)
		{
			return ((::System::Void(*)(::UnrealTypes::Class*&, ::UnrealTypes::ClassParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTCLASS_OFFSET))(outClass, params);
		}

		static ::System::Void ConstructProperties(::UnrealTypes::IFieldVariant* outer, ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>* properties)
		{
			return ((::System::Void(*)(::UnrealTypes::IFieldVariant*, ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>*))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTPROPERTIES_OFFSET))(outer, properties);
		}

		static ::System::Void ConstructProperty(::UnrealTypes::IFieldVariant* outer, ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>* properties, ::System::Int32& propertyIndex)
		{
			return ((::System::Void(*)(::UnrealTypes::IFieldVariant*, ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNREALTYPES_CODEGENPRIVATE_CONSTRUCTPROPERTY_OFFSET))(outer, properties, propertyIndex);
		}
	};
}
