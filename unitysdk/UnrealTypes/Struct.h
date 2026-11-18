#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Field.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnrealTypes { class FField; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class Property; }

#define UNREALTYPES_STRUCT_ADDCPPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E2B2970)
#define UNREALTYPES_STRUCT_BIND_OFFSET UNITYSDK_OFFSET(0x1E2B2990)
#define UNREALTYPES_STRUCT_CONSTRUCTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B6D40)
#define UNREALTYPES_STRUCT_DESTROYPROPERTYLINKEDLIST_OFFSET UNITYSDK_OFFSET(0x1E2B6E00)
#define UNREALTYPES_STRUCT_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E29E570)
#define UNREALTYPES_STRUCT_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B7050)
#define UNREALTYPES_STRUCT_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2B71C0)
#define UNREALTYPES_STRUCT_FINDPROPERTYBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2B7010)
#define UNREALTYPES_STRUCT_GET_INHERITANCESUPER_OFFSET UNITYSDK_OFFSET(0x1E2B6D30)
#define UNREALTYPES_STRUCT_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A84F0)
#define UNREALTYPES_STRUCT_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2B7040)
#define UNREALTYPES_STRUCT_ISCHILDOF_1_OFFSET UNITYSDK_OFFSET(0x1E2B6EE0)
#define UNREALTYPES_STRUCT_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x1E2B01B0)
#define UNREALTYPES_STRUCT_LINK_OFFSET UNITYSDK_OFFSET(0x1E2B6890)
#define UNREALTYPES_STRUCT_STATICLINK_OFFSET UNITYSDK_OFFSET(0x1E29F7A0)
#define UNREALTYPES_STRUCT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E29E460)
#define UNREALTYPES_STRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E370)

namespace UnrealTypes
{
	inline static constexpr unsigned int Struct_TypeDefinitionIndex = 27730;

	class Struct : public ::UnrealTypes::Field
	{
	public:
		::System::Type* Type; // 0x38
		::UnrealTypes::Property* PropertyLink; // 0x40
		::UnrealTypes::FField* ChildProperties; // 0x48
		::UnrealTypes::Struct* SuperStruct; // 0x50
		::System::String* NamespaceName; // 0x58
		::System::UInt32 TypeId; // 0x60
		::System::Int32 MinAlignment; // 0x64
		::System::Int32 PropertiesSize; // 0x68

		::System::Void _ctor(::UnrealTypes::Object* outer, ::System::String* name, ::System::UInt32 typeId)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Object*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT__CTOR_OFFSET))(this, outer, name, typeId);
		}

		::System::Void _ctor_1(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT__CTOR_1_OFFSET))(this, initializer);
		}

		::UnrealTypes::Struct* get_InheritanceSuper()
		{
			return ((::UnrealTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_GET_INHERITANCESUPER_OFFSET))(this);
		}

		::System::Int32 get_StructureSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_GET_STRUCTURESIZE_OFFSET))(this);
		}

		static ::System::Void DestroyPropertyLinkedList(::UnrealTypes::FField*& propertiesToDispose)
		{
			return ((::System::Void(*)(::UnrealTypes::FField*&))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_DESTROYPROPERTYLINKEDLIST_OFFSET))(propertiesToDispose);
		}

		::System::Void AddCppProperty(::UnrealTypes::Property* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_ADDCPPPROPERTY_OFFSET))(this, property);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_BIND_OFFSET))(this);
		}

		::System::Void StaticLink(::System::Boolean relinkExistingProperties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_STATICLINK_OFFSET))(this, relinkExistingProperties);
		}

		::System::Void Link(::System::Boolean relinkExistingProperties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_LINK_OFFSET))(this, relinkExistingProperties);
		}

		::System::Boolean IsChildOf(::UnrealTypes::Struct* someBase)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_ISCHILDOF_OFFSET))(this, someBase);
		}

		::System::Boolean IsChildOf_1(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> someBase)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_ISCHILDOF_1_OFFSET))(this, someBase);
		}

		::UnrealTypes::Property* FindPropertyByName(::Foundation::Unreal::FName name)
		{
			return ((::UnrealTypes::Property*(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_FINDPROPERTYBYNAME_OFFSET))(this, name);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void ConstructInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_CONSTRUCTINTERNAL_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}

		::System::Void DisposeInternal(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_DISPOSEINTERNAL_OFFSET))(this, disposing);
		}
	};
}
