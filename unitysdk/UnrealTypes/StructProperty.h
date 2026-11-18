#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/Property.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructPropertyParams; }

#define UNREALTYPES_STRUCTPROPERTY_COPYVALUESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B73F0)
#define UNREALTYPES_STRUCTPROPERTY_DESTROYVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B7390)
#define UNREALTYPES_STRUCTPROPERTY_GET_MINALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1E2B72D0)
#define UNREALTYPES_STRUCTPROPERTY_GET_STRUCTHANDLE_OFFSET UNITYSDK_OFFSET(0x1E2B7230)
#define UNREALTYPES_STRUCTPROPERTY_INITIALIZEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B7360)
#define UNREALTYPES_STRUCTPROPERTY_ISSAMETYPE_OFFSET UNITYSDK_OFFSET(0x1E2B7410)
#define UNREALTYPES_STRUCTPROPERTY_LINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B7300)
#define UNREALTYPES_STRUCTPROPERTY_RESETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B73C0)
#define UNREALTYPES_STRUCTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A08F0)
#define UNREALTYPES_STRUCTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B72F0)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructProperty_TypeDefinitionIndex = 27825;

	class StructProperty : public ::UnrealTypes::Property
	{
	public:
		::UnrealTypes::ScriptStruct* Struct; // 0x58

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::StructPropertyParams* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::StructPropertyParams*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_StructHandle()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_GET_STRUCTHANDLE_OFFSET))(this);
		}

		::System::Int32 get_MinAlignment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_GET_MINALIGNMENT_OFFSET))(this);
		}

		::System::Void LinkInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_LINKINTERNAL_OFFSET))(this);
		}

		::System::Void InitializeValueInternal(::PVOID dest, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_INITIALIZEVALUEINTERNAL_OFFSET))(this, dest, allocator);
		}

		::System::Void DestroyValueInternal(::PVOID dest)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_DESTROYVALUEINTERNAL_OFFSET))(this, dest);
		}

		::System::Void ResetValueInternal(::PVOID dest)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_RESETVALUEINTERNAL_OFFSET))(this, dest);
		}

		::System::Void CopyValuesInternal(::PVOID dest, ::PVOID src, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_COPYVALUESINTERNAL_OFFSET))(this, dest, src, count);
		}

		::System::Boolean IsSameType(::UnrealTypes::Property* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTY_ISSAMETYPE_OFFSET))(this, other);
		}
	};
}
