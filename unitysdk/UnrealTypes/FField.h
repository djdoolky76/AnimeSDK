#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnrealTypes { class FieldClass; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Property; }

#define UNREALTYPES_FFIELD_ADDCPPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E2A1CC0)
#define UNREALTYPES_FFIELD_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2A1CB0)
#define UNREALTYPES_FFIELD_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E2A1CA0)
#define UNREALTYPES_FFIELD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E29D6B0)
#define UNREALTYPES_FFIELD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E2A1C30)
#define UNREALTYPES_FFIELD_GET_FNAME_OFFSET UNITYSDK_OFFSET(0x1E2A1B40)
#define UNREALTYPES_FFIELD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A1BF0)
#define UNREALTYPES_FFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1B50)

namespace UnrealTypes
{
	inline static constexpr unsigned int FField_TypeDefinitionIndex = 27754;

	class FField : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnrealTypes::FieldClass* ClassPrivate; // 0x18
		::UnrealTypes::FField* Next; // 0x20
		::UnrealTypes::IFieldVariant* Owner; // 0x28
		::Foundation::Unreal::FName NamePrivate; // 0x30

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_FFIELD__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::System::String*))((::PBYTE)hIl2Cpp + UNREALTYPES_FFIELD__CTOR_1_OFFSET))(this, owner, name);
		}

		::Foundation::Unreal::FName get_FName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FFIELD_GET_FNAME_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FFIELD_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FFIELD_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_FFIELD_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void DisposeInternal(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_FFIELD_DISPOSEINTERNAL_OFFSET))(this, disposing);
		}

		::System::Void AddCppProperty(::UnrealTypes::Property* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_FFIELD_ADDCPPPROPERTY_OFFSET))(this, property);
		}
	};
}
