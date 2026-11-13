#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/TypeDescriptionProvider.h"
#include "unitysdk/System/Guid.h"
namespace System { class Attribute; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionary; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class ICustomTypeDescriptor; }
namespace System::ComponentModel { class ReflectTypeDescriptionProvider_ReflectedTypeData; }
namespace System::ComponentModel { class TypeConverter; }

#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1854E0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C181EB0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C180960)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C182000)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1C182E60)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1C183460)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C183AD0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCONVERTER_OFFSET UNITYSDK_OFFSET(0x1C183B00)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C183B50)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C183B60)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1C182030)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C183B80)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GET_INTRINSICTYPECONVERTERS_OFFSET UNITYSDK_OFFSET(0x1C180980)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_ISPOPULATED_OFFSET UNITYSDK_OFFSET(0x1C183B90)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C183BD0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C1842C0)
#define SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_SEARCHINTRINSICTABLE_OFFSET UNITYSDK_OFFSET(0x1C184310)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReflectTypeDescriptionProvider_TypeDefinitionIndex = 2621;

	class ReflectTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider
	{
	public:
		::System::Collections::Hashtable* _typeData; // 0x20
		static ::System::Object** StaticGet__intrinsicReferenceKey()
		{
			return (::System::Object**)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0x35870);
		}

		static ::Il2CppArray<::System::Type*>** StaticGet__skipInterfaceAttributeList()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0x35878);
		}

		static ::System::Object** StaticGet__intrinsicNullableKey()
		{
			return (::System::Object**)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0x35880);
		}

		static ::System::Collections::Hashtable** StaticGet__attributeCache()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0x35888);
		}

		static ::System::Object** StaticGet__dictionaryKey()
		{
			return (::System::Object**)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0x35890);
		}

		static ::Il2CppArray<::System::Type*>** StaticGet__typeConstructor()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0x35898);
		}

		static ::System::Collections::Hashtable** StaticGet__intrinsicTypeConverters()
		{
			return (::System::Collections::Hashtable**)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0x358A0);
		}

		static ::System::Object** StaticGet__internalSyncObject()
		{
			return (::System::Object**)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0x358A8);
		}

		static ::System::Guid* StaticGet__extenderProviderPropertiesKey()
		{
			return (::System::Guid*)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0xA7A0);
		}

		static ::System::Guid* StaticGet__extenderProviderKey()
		{
			return (::System::Guid*)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0xA7B0);
		}

		static ::System::Guid* StaticGet__extenderPropertiesKey()
		{
			return (::System::Guid*)UnitySDK::FromName("System.ComponentModel", "ReflectTypeDescriptionProvider")->GetStaticField(0xA7C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CCTOR_OFFSET))();
		}

		static ::System::Collections::Hashtable* get_IntrinsicTypeConverters()
		{
			return ((::System::Collections::Hashtable*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GET_INTRINSICTYPECONVERTERS_OFFSET))();
		}

		static ::System::Object* CreateInstance(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_CREATEINSTANCE_OFFSET))(a1, a2);
		}

		::System::ComponentModel::AttributeCollection* GetAttributes(::System::Type* a1)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Collections::IDictionary* GetCache(::System::Object* a1)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCACHE_OFFSET))(this, a1);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETCONVERTER_OFFSET))(this, a1, a2);
		}

		::System::ComponentModel::AttributeCollection* GetExtendedAttributes(::System::Object* a1)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDATTRIBUTES_OFFSET))(this, a1);
		}

		::System::ComponentModel::TypeConverter* GetExtendedConverter(::System::Object* a1)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDCONVERTER_OFFSET))(this, a1);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object* a1)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETEXTENDEDTYPEDESCRIPTOR_OFFSET))(this, a1);
		}

		::System::Type* GetReflectionType(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETREFLECTIONTYPE_OFFSET))(this, a1, a2);
		}

		::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData* GetTypeData(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::ComponentModel::ReflectTypeDescriptionProvider_ReflectedTypeData*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDATA_OFFSET))(this, a1, a2);
		}

		::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::ComponentModel::ICustomTypeDescriptor*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_GETTYPEDESCRIPTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPopulated(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_ISPOPULATED_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Attribute*>* ReflectGetAttributes(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFLECTGETATTRIBUTES_OFFSET))(a1);
		}

		::System::Void Refresh(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_REFRESH_OFFSET))(this, a1);
		}

		static ::System::Object* SearchIntrinsicTable(::System::Collections::Hashtable* a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::System::Collections::Hashtable*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFLECTTYPEDESCRIPTIONPROVIDER_SEARCHINTRINSICTABLE_OFFSET))(a1, a2);
		}

	};
}
