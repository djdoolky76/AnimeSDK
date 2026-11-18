#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/EnumFlags.h"
#include "unitysdk/UnrealTypes/Field.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_ENUM_CONSTRUCTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2A0AE0)
#define UNREALTYPES_ENUM_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E2A0CB0)
#define UNREALTYPES_ENUM_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2A0D40)
#define UNREALTYPES_ENUM_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2A0DD0)
#define UNREALTYPES_ENUM_GET_ENUMHANDLE_OFFSET UNITYSDK_OFFSET(0x1E2A0A80)
#define UNREALTYPES_ENUM_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2A0CA0)
#define UNREALTYPES_ENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0DF0)
#define UNREALTYPES_ENUM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A0BB0)
#define UNREALTYPES_ENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29EC50)

namespace UnrealTypes
{
	inline static constexpr unsigned int Enum_TypeDefinitionIndex = 27728;

	class Enum : public ::UnrealTypes::Field
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_EnumUnderlyingTypeNameMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Enum_TypeDefinitionIndex)->GetStaticField(0x24F70);
		}
		::System::Type* UnderlyingType; // 0x38
		::System::Type* EnumType; // 0x40
		::System::String* NamespaceName; // 0x48
		::UnrealTypes::EnumFlags Flags; // 0x50
		::System::UInt32 TypeId; // 0x54

		::System::Void _ctor(::UnrealTypes::Object* outer, ::System::String* name, ::System::UInt32 typeId)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Object*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM__CTOR_OFFSET))(this, outer, name, typeId);
		}

		::System::Void _ctor_1(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM__CTOR_1_OFFSET))(this, initializer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM__CCTOR_OFFSET))();
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Enum*> get_EnumHandle()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Enum*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM_GET_ENUMHANDLE_OFFSET))(this);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void ConstructInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM_CONSTRUCTINTERNAL_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}

		::System::Void DisposeInternal(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM_DISPOSEINTERNAL_OFFSET))(this, disposing);
		}
	};
}
