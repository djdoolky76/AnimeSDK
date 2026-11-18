#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }
namespace UnrealTypes { class Object; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1FFF4ED0)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FFF5FD0)
#define STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFF4F20)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Class_StateTree_TypeDefinitionIndex = 30956;

	class RegistrationInfo_Class_StateTree : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27750);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27758);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksNum()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27760);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ContextDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27768);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasGlobalTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27770);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Nodes()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27778);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_States()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27780);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parameters()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27788);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_States_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27790);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x27798);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumContextData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277A0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_DefaultInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277A8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyBindings()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277B0);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277B8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_Transitions()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277C0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Transitions_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277C8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ExternalDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277D0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumGlobalInstanceData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277D8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SharedInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277E0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ExternalDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277E8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ContextDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_StateTree_TypeDefinitionIndex)->GetStaticField(0x277F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* Constructor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::UnrealTypes::Object*(*)(::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE_CONSTRUCTOR_OFFSET))(initializer);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_CLASS_STATETREE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
