#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/ArrayMetadata.h"
#include "unitysdk/LitJson/ObjectMetadata.h"
#include "unitysdk/LitJson/PropertyMetadata.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class ExporterFunc; }
namespace LitJson { class IJsonWrapper; }
namespace LitJson { class ImporterFunc; }
namespace LitJson { class JsonData; }
namespace LitJson { class JsonReader; }
namespace LitJson { class JsonWriter; }
namespace LitJson { class WrapperFactory; }
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class TextReader; }
namespace System::Reflection { class MethodInfo; }

#define LITJSON_JSONMAPPER_ADDARRAYMETADATA_OFFSET UNITYSDK_OFFSET(0x1EE9C940)
#define LITJSON_JSONMAPPER_ADDOBJECTMETADATA_OFFSET UNITYSDK_OFFSET(0x1EE9CE40)
#define LITJSON_JSONMAPPER_ADDTYPEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EE9DA20)
#define LITJSON_JSONMAPPER_CHECKSTATIC_OFFSET UNITYSDK_OFFSET(0x1EEA1D10)
#define LITJSON_JSONMAPPER_CONVERTKEYTOSTRING_OFFSET UNITYSDK_OFFSET(0x1EEA42D0)
#define LITJSON_JSONMAPPER_GETCONVOP_OFFSET UNITYSDK_OFFSET(0x1EE9E070)
#define LITJSON_JSONMAPPER_ISATTRIBUTEEXPORT_OFFSET UNITYSDK_OFFSET(0x1EEA1E20)
#define LITJSON_JSONMAPPER_PARSEKEY_OFFSET UNITYSDK_OFFSET(0x1EE9EC20)
#define LITJSON_JSONMAPPER_READDICKEY_OFFSET UNITYSDK_OFFSET(0x1EE9EBB0)
#define LITJSON_JSONMAPPER_READSKIP_OFFSET UNITYSDK_OFFSET(0x1EEA1EF0)
#define LITJSON_JSONMAPPER_READVALUE_1_OFFSET UNITYSDK_OFFSET(0x1EEA2060)
#define LITJSON_JSONMAPPER_READVALUE_OFFSET UNITYSDK_OFFSET(0x1EE9EC40)
#define LITJSON_JSONMAPPER_REGISTERASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1EEA4C90)
#define LITJSON_JSONMAPPER_REGISTERBASEEXPORTERS_OFFSET UNITYSDK_OFFSET(0x1EE9A590)
#define LITJSON_JSONMAPPER_REGISTERBASEIMPORTERS_OFFSET UNITYSDK_OFFSET(0x1EE9B640)
#define LITJSON_JSONMAPPER_REGISTERGENERICCONVERTTYPE_OFFSET UNITYSDK_OFFSET(0x1EEA4D80)
#define LITJSON_JSONMAPPER_REGISTERIMPORTER_OFFSET UNITYSDK_OFFSET(0x1EEA2D10)
#define LITJSON_JSONMAPPER_SAFECREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EE9EA80)
#define LITJSON_JSONMAPPER_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x1EEA4490)
#define LITJSON_JSONMAPPER_TOJSON_2_OFFSET UNITYSDK_OFFSET(0x1EEA45C0)
#define LITJSON_JSONMAPPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x1EEA42F0)
#define LITJSON_JSONMAPPER_TOOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1EEA4810)
#define LITJSON_JSONMAPPER_TOOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1EEA49E0)
#define LITJSON_JSONMAPPER_TOOBJECT_6_OFFSET UNITYSDK_OFFSET(0x1EEA4C20)
#define LITJSON_JSONMAPPER_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x1EEA4650)
#define LITJSON_JSONMAPPER_TOWRAPPER_1_OFFSET UNITYSDK_OFFSET(0x1EEA4BB0)
#define LITJSON_JSONMAPPER_TOWRAPPER_OFFSET UNITYSDK_OFFSET(0x1EEA2CB0)
#define LITJSON_JSONMAPPER_UNREGISTEREXPORTERS_OFFSET UNITYSDK_OFFSET(0x1EEA4E70)
#define LITJSON_JSONMAPPER_UNREGISTERIMPORTERS_OFFSET UNITYSDK_OFFSET(0x1EEA4F90)
#define LITJSON_JSONMAPPER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1EEA3020)
#define LITJSON_JSONMAPPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE9A000)
#define LITJSON_JSONMAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA50B0)

namespace LitJson
{
	inline static constexpr unsigned int JsonMapper_TypeDefinitionIndex = 7932;

	class JsonMapper : public ::System::Object
	{
	public:
		static ::LitJson::JsonWriter** StaticGet_static_writer()
		{
			return (::LitJson::JsonWriter**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C00);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>** StaticGet_custom_importers_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C08);
		}
		static ::System::IFormatProvider** StaticGet_datetime_format()
		{
			return (::System::IFormatProvider**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C10);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ExporterFunc*>** StaticGet_custom_exporters_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ExporterFunc*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C18);
		}
		static ::System::Object** StaticGet_static_writer_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C20);
		}
		static ::System::Object** StaticGet_object_metadata_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C28);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ObjectMetadata>** StaticGet_object_metadata()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ObjectMetadata>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C30);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ArrayMetadata>** StaticGet_array_metadata()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ArrayMetadata>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C38);
		}
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_customGenericConvertList()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C40);
		}
		static ::System::Object** StaticGet_conv_ops_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C48);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>** StaticGet_conv_ops()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C50);
		}
		static ::System::Object** StaticGet_type_properties_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C58);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>** StaticGet_base_importers_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C60);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_assemblyNames()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C68);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>** StaticGet_type_properties()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C70);
		}
		static ::System::Object** StaticGet_array_metadata_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C78);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ExporterFunc*>** StaticGet_base_exporters_table()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ExporterFunc*>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x6C80);
		}
		static ::System::Int32* StaticGet_max_nesting_depth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(JsonMapper_TypeDefinitionIndex)->GetStaticField(0x3670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER__CTOR_OFFSET))(this);
		}

		static ::System::Void AddArrayMetadata(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_ADDARRAYMETADATA_OFFSET))(type);
		}

		static ::System::Void AddObjectMetadata(::System::Type*& type, ::LitJson::JsonReader* reader)
		{
			return ((::System::Void(*)(::System::Type*&, ::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_ADDOBJECTMETADATA_OFFSET))(type, reader);
		}

		static ::System::Void AddTypeProperties(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_ADDTYPEPROPERTIES_OFFSET))(type);
		}

		static ::System::Reflection::MethodInfo* GetConvOp(::System::Type* t1, ::System::Type* t2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_GETCONVOP_OFFSET))(t1, t2);
		}

		static ::System::Object* SafeCreateInstance(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_SAFECREATEINSTANCE_OFFSET))(type);
		}

		static ::System::Object* ReadDicKey(::System::Type* inst_type, ::System::String* keyObj)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_READDICKEY_OFFSET))(inst_type, keyObj);
		}

		static ::System::Object* ReadValue(::System::Type* inst_type, ::LitJson::JsonReader* reader, ::System::Boolean gridMapConvert)
		{
			return ((::System::Object*(*)(::System::Type*, ::LitJson::JsonReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_READVALUE_OFFSET))(inst_type, reader, gridMapConvert);
		}

		static ::LitJson::IJsonWrapper* ReadValue_1(::LitJson::WrapperFactory* factory, ::LitJson::JsonReader* reader)
		{
			return ((::LitJson::IJsonWrapper*(*)(::LitJson::WrapperFactory*, ::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_READVALUE_1_OFFSET))(factory, reader);
		}

		static ::System::Void ReadSkip(::LitJson::JsonReader* reader)
		{
			return ((::System::Void(*)(::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_READSKIP_OFFSET))(reader);
		}

		static ::System::Void RegisterBaseExporters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERBASEEXPORTERS_OFFSET))();
		}

		static ::System::Void RegisterBaseImporters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERBASEIMPORTERS_OFFSET))();
		}

		static ::System::Void RegisterImporter(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>* table, ::System::Type* json_type, ::System::Type* value_type, ::LitJson::ImporterFunc* importer)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Collections::Generic::IDictionary_2<::System::Type*, ::LitJson::ImporterFunc*>*>*, ::System::Type*, ::System::Type*, ::LitJson::ImporterFunc*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERIMPORTER_OFFSET))(table, json_type, value_type, importer);
		}

		static ::System::Void WriteValue(::System::Object* obj, ::LitJson::JsonWriter* writer, ::System::Boolean writer_is_private, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::System::Object*, ::LitJson::JsonWriter*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_WRITEVALUE_OFFSET))(obj, writer, writer_is_private, depth);
		}

		static ::System::String* ToJson(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOJSON_OFFSET))(obj);
		}

		static ::System::String* ToJson_1(::System::Object* obj, ::System::Int32 indent, ::System::Boolean prettify)
		{
			return ((::System::String*(*)(::System::Object*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOJSON_1_OFFSET))(obj, indent, prettify);
		}

		static ::System::String* ToJson_2(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::String*(*)(::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOJSON_2_OFFSET))(obj, writer);
		}

		static ::LitJson::JsonData* ToObject(::LitJson::JsonReader* reader)
		{
			return ((::LitJson::JsonData*(*)(::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOOBJECT_OFFSET))(reader);
		}

		static ::LitJson::JsonData* ToObject_1(::System::IO::TextReader* reader)
		{
			return ((::LitJson::JsonData*(*)(::System::IO::TextReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOOBJECT_1_OFFSET))(reader);
		}

		static ::LitJson::JsonData* ToObject_2(::System::String* json)
		{
			return ((::LitJson::JsonData*(*)(::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOOBJECT_2_OFFSET))(json);
		}

		static ::System::Object* ToObject_6(::System::String* json, ::System::Type* ConvertType)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOOBJECT_6_OFFSET))(json, ConvertType);
		}

		static ::LitJson::IJsonWrapper* ToWrapper(::LitJson::WrapperFactory* factory, ::LitJson::JsonReader* reader)
		{
			return ((::LitJson::IJsonWrapper*(*)(::LitJson::WrapperFactory*, ::LitJson::JsonReader*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOWRAPPER_OFFSET))(factory, reader);
		}

		static ::LitJson::IJsonWrapper* ToWrapper_1(::LitJson::WrapperFactory* factory, ::System::String* json)
		{
			return ((::LitJson::IJsonWrapper*(*)(::LitJson::WrapperFactory*, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_TOWRAPPER_1_OFFSET))(factory, json);
		}

		static ::System::Void RegisterAssemblyName(::System::String* assemblyName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERASSEMBLYNAME_OFFSET))(assemblyName);
		}

		static ::System::Void RegisterGenericConvertType(::System::Type* genericType)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_REGISTERGENERICCONVERTTYPE_OFFSET))(genericType);
		}

		static ::System::Void UnregisterExporters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_UNREGISTEREXPORTERS_OFFSET))();
		}

		static ::System::Void UnregisterImporters()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_UNREGISTERIMPORTERS_OFFSET))();
		}

		static ::System::Boolean CheckStatic(::LitJson::PropertyMetadata prop_data)
		{
			return ((::System::Boolean(*)(::LitJson::PropertyMetadata))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_CHECKSTATIC_OFFSET))(prop_data);
		}

		static ::System::Boolean isAttributeExport(::LitJson::PropertyMetadata prop_data)
		{
			return ((::System::Boolean(*)(::LitJson::PropertyMetadata))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_ISATTRIBUTEEXPORT_OFFSET))(prop_data);
		}

		static ::System::String* ConvertKeyToString(::System::Object* keyStr)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_CONVERTKEYTOSTRING_OFFSET))(keyStr);
		}

		static ::System::Object* ParseKey(::System::String* keyStr, ::System::Type* keyType)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER_PARSEKEY_OFFSET))(keyStr, keyType);
		}
	};
}
