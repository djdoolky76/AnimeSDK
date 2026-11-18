#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class ExporterFunc; }
namespace LitJson { class IJsonWrapper; }
namespace LitJson { class ImporterFunc; }
namespace LitJson { class JsonWriter; }
namespace LitJson { class WrapperFactory; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LITJSON_JSONMAPPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D753EF0)
#define LITJSON_JSONMAPPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D753F30)
#define LITJSON_JSONMAPPER___C__READSKIP_B__27_0_OFFSET UNITYSDK_OFFSET(0x1D753FB0)
#define LITJSON_JSONMAPPER___C__READVALUE_B__25_0_OFFSET UNITYSDK_OFFSET(0x1D753F40)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_0_OFFSET UNITYSDK_OFFSET(0x1D754000)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_1_OFFSET UNITYSDK_OFFSET(0x1D7540B0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_2_OFFSET UNITYSDK_OFFSET(0x1D7541D0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_3_OFFSET UNITYSDK_OFFSET(0x1D754350)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_4_OFFSET UNITYSDK_OFFSET(0x1D754420)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_5_OFFSET UNITYSDK_OFFSET(0x1D7544D0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_6_OFFSET UNITYSDK_OFFSET(0x1D754580)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_7_OFFSET UNITYSDK_OFFSET(0x1D754630)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_8_OFFSET UNITYSDK_OFFSET(0x1D7546E0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_9_OFFSET UNITYSDK_OFFSET(0x1D7547A0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_0_OFFSET UNITYSDK_OFFSET(0x1D7548A0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_10_OFFSET UNITYSDK_OFFSET(0x1D755260)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_11_OFFSET UNITYSDK_OFFSET(0x1D755320)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_12_OFFSET UNITYSDK_OFFSET(0x1D755440)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_13_OFFSET UNITYSDK_OFFSET(0x1D755480)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_14_OFFSET UNITYSDK_OFFSET(0x1D755530)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_1_OFFSET UNITYSDK_OFFSET(0x1D7549B0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_2_OFFSET UNITYSDK_OFFSET(0x1D754AC0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_3_OFFSET UNITYSDK_OFFSET(0x1D754B70)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_4_OFFSET UNITYSDK_OFFSET(0x1D754C80)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_5_OFFSET UNITYSDK_OFFSET(0x1D754D90)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_6_OFFSET UNITYSDK_OFFSET(0x1D754EA0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_7_OFFSET UNITYSDK_OFFSET(0x1D754FB0)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_8_OFFSET UNITYSDK_OFFSET(0x1D755070)
#define LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_9_OFFSET UNITYSDK_OFFSET(0x1D755130)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__35_0_OFFSET UNITYSDK_OFFSET(0x1D755660)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__36_0_OFFSET UNITYSDK_OFFSET(0x1D7556A0)
#define LITJSON_JSONMAPPER___C__TOOBJECT_B__37_0_OFFSET UNITYSDK_OFFSET(0x1D7556E0)

namespace LitJson
{
	inline static constexpr unsigned int JsonMapper___c_TypeDefinitionIndex = 7934;

	class JsonMapper___c : public ::System::Object
	{
	public:
		static ::LitJson::ExporterFunc** StaticGet___9__28_7()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C90);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__35_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6C98);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_13()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CA0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_5()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CA8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_6()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CB0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_1()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CB8);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_0()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CC0);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__36_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CC8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_4()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CD0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_7()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CD8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_11()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CE0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CE8);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_8()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CF0);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_2()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6CF8);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_3()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D00);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_4()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D08);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_0()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D10);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_6()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D18);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_3()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D20);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_1()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D28);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_14()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D30);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_8()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D38);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__27_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D40);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_5()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D48);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_9()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D50);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_10()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D58);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_9()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D60);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D68);
		}
		static ::LitJson::ExporterFunc** StaticGet___9__28_2()
		{
			return (::LitJson::ExporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D70);
		}
		static ::LitJson::WrapperFactory** StaticGet___9__37_0()
		{
			return (::LitJson::WrapperFactory**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D78);
		}
		static ::LitJson::ImporterFunc** StaticGet___9__29_12()
		{
			return (::LitJson::ImporterFunc**)Il2CppClass::FromTypeDefinitionIndex(JsonMapper___c_TypeDefinitionIndex)->GetStaticField(0x6D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReadValue_b__25_0(::System::Type* interfaceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__READVALUE_B__25_0_OFFSET))(this, interfaceType);
		}

		::LitJson::IJsonWrapper* _ReadSkip_b__27_0()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__READSKIP_B__27_0_OFFSET))(this);
		}

		::System::Void _RegisterBaseExporters_b__28_0(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_0_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_1(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_1_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_2(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_2_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_3(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_3_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_4(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_4_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_5(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_5_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_6(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_6_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_7(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_7_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_8(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_8_OFFSET))(this, obj, writer);
		}

		::System::Void _RegisterBaseExporters_b__28_9(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEEXPORTERS_B__28_9_OFFSET))(this, obj, writer);
		}

		::System::Object* _RegisterBaseImporters_b__29_0(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_0_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_1(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_1_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_2(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_2_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_3(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_3_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_4(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_4_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_5(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_5_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_6(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_6_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_7(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_7_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_8(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_8_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_9(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_9_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_10(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_10_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_11(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_11_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_12(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_12_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_13(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_13_OFFSET))(this, input);
		}

		::System::Object* _RegisterBaseImporters_b__29_14(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__REGISTERBASEIMPORTERS_B__29_14_OFFSET))(this, input);
		}

		::LitJson::IJsonWrapper* _ToObject_b__35_0()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__TOOBJECT_B__35_0_OFFSET))(this);
		}

		::LitJson::IJsonWrapper* _ToObject_b__36_0()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__TOOBJECT_B__36_0_OFFSET))(this);
		}

		::LitJson::IJsonWrapper* _ToObject_b__37_0()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMAPPER___C__TOOBJECT_B__37_0_OFFSET))(this);
		}
	};
}
