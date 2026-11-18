#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsMetaProperty; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsMetaType_ObjectGenerator; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_CANSERIALIZEFIELD_OFFSET UNITYSDK_OFFSET(0x1EDD27A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_COLLECTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EDD2390)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EDD1C80)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_FLUSHMEM_OFFSET UNITYSDK_OFFSET(0x1EDD1E70)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EDD2C50)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GETGENERATOR_OFFSET UNITYSDK_OFFSET(0x1EDD2010)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GET_DESERIALIZEOVERWRITEREQUEST_OFFSET UNITYSDK_OFFSET(0x1EDD1FF0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GET_OFFSET UNITYSDK_OFFSET(0x1EDD1AC0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EDD1FD0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1EDD1FB0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_HASDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1EDD2BC0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_SET_DESERIALIZEOVERWRITEREQUEST_OFFSET UNITYSDK_OFFSET(0x1EDD2000)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EDD1FE0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_SET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1EDD1FC0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDD2E70)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD1D10)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsMetaType_TypeDefinitionIndex = 29423;

	class fsMetaType : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet__defaultInstances()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(fsMetaType_TypeDefinitionIndex)->GetStaticField(0x27480);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ParadoxNotion::Serialization::FullSerializer::fsMetaType*>** StaticGet__metaTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::ParadoxNotion::Serialization::FullSerializer::fsMetaType*>**)Il2CppClass::FromTypeDefinitionIndex(fsMetaType_TypeDefinitionIndex)->GetStaticField(0x27488);
		}
		::ParadoxNotion::Serialization::FullSerializer::fsMetaType_ObjectGenerator* generator; // 0x10
		::Il2CppArray<::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*>* _Properties_k__BackingField; // 0x18
		::System::Type* _reflectedType_k__BackingField; // 0x20
		::System::Boolean _DeserializeOverwriteRequest_k__BackingField; // 0x28

		::System::Void _ctor(::System::Type* reflectedType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE__CTOR_OFFSET))(this, reflectedType);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE__CCTOR_OFFSET))();
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsMetaType* Get(::System::Type* type)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsMetaType*(*)(::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GET_OFFSET))(type);
		}

		static ::System::Void FlushMem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_FLUSHMEM_OFFSET))();
		}

		::System::Type* get_reflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Void set_reflectedType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_SET_REFLECTEDTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*>* get_Properties()
		{
			return ((::Il2CppArray<::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GET_PROPERTIES_OFFSET))(this);
		}

		::System::Void set_Properties(::Il2CppArray<::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_SET_PROPERTIES_OFFSET))(this, value);
		}

		::System::Boolean get_DeserializeOverwriteRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GET_DESERIALIZEOVERWRITEREQUEST_OFFSET))(this);
		}

		::System::Void set_DeserializeOverwriteRequest(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_SET_DESERIALIZEOVERWRITEREQUEST_OFFSET))(this, value);
		}

		static ::System::Void CollectProperties(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*>* properties, ::System::Type* reflectedType)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*>*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_COLLECTPROPERTIES_OFFSET))(properties, reflectedType);
		}

		static ::System::Boolean CanSerializeField(::System::Reflection::FieldInfo* field)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_CANSERIALIZEFIELD_OFFSET))(field);
		}

		static ::ParadoxNotion::Serialization::FullSerializer::fsMetaType_ObjectGenerator* GetGenerator(::System::Type* reflectedType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsMetaType_ObjectGenerator*(*)(::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GETGENERATOR_OFFSET))(reflectedType);
		}

		static ::System::Boolean HasDefaultConstructor(::System::Type* reflectedType)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_HASDEFAULTCONSTRUCTOR_OFFSET))(reflectedType);
		}

		::System::Object* GetDefaultInstance()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_GETDEFAULTINSTANCE_OFFSET))(this);
		}

		::System::Object* CreateInstance()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSMETATYPE_CREATEINSTANCE_OFFSET))(this);
		}
	};
}
