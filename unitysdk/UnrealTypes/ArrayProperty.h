#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/PropertyFlags.h"
#include "unitysdk/Foundation/Unreal/FName.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Property; }

#define UNREALTYPES_ARRAYPROPERTY_ADDCPPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E29D770)
#define UNREALTYPES_ARRAYPROPERTY_COPYVALUESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E29DB90)
#define UNREALTYPES_ARRAYPROPERTY_DESTROYVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E29D920)
#define UNREALTYPES_ARRAYPROPERTY_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E29D5E0)
#define UNREALTYPES_ARRAYPROPERTY_GETCOMPUTEDFLAGSPROPERTYFLAGS_OFFSET UNITYSDK_OFFSET(0x1E29D780)
#define UNREALTYPES_ARRAYPROPERTY_INITIALIZEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E29D8F0)
#define UNREALTYPES_ARRAYPROPERTY_ISSAMETYPE_OFFSET UNITYSDK_OFFSET(0x1E29E0E0)
#define UNREALTYPES_ARRAYPROPERTY_LINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E29D790)
#define UNREALTYPES_ARRAYPROPERTY_RESETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E29DA90)
#define UNREALTYPES_ARRAYPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E29D570)
#define UNREALTYPES_ARRAYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29D500)

namespace UnrealTypes
{
	inline static constexpr unsigned int ArrayProperty_TypeDefinitionIndex = 27823;

	class ArrayProperty
	{
	public:
		::UnrealTypes::Property* Inner; // 0x58

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::ArrayPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::ArrayPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::System::Void DisposeInternal(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_DISPOSEINTERNAL_OFFSET))(this, disposing);
		}

		::System::Void AddCppProperty(::UnrealTypes::Property* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_ADDCPPPROPERTY_OFFSET))(this, property);
		}

		::UnrealTypes::PropertyFlags GetComputedFlagsPropertyFlags()
		{
			return ((::UnrealTypes::PropertyFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_GETCOMPUTEDFLAGSPROPERTYFLAGS_OFFSET))(this);
		}

		::System::Void LinkInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_LINKINTERNAL_OFFSET))(this);
		}

		::System::Void InitializeValueInternal(::PVOID dest, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_INITIALIZEVALUEINTERNAL_OFFSET))(this, dest, allocator);
		}

		::System::Void DestroyValueInternal(::PVOID dest)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_DESTROYVALUEINTERNAL_OFFSET))(this, dest);
		}

		::System::Void ResetValueInternal(::PVOID dest)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_RESETVALUEINTERNAL_OFFSET))(this, dest);
		}

		::System::Void CopyValuesInternal(::PVOID dest, ::PVOID src, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_COPYVALUESINTERNAL_OFFSET))(this, dest, src, count);
		}

		::System::Boolean IsSameType(::UnrealTypes::Property* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_ARRAYPROPERTY_ISSAMETYPE_OFFSET))(this, other);
		}
	};
}
