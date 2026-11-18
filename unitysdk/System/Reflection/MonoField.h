#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/RtFieldInfo.h"
#include "unitysdk/System/RuntimeFieldHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_REFLECTION_MONOFIELD_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E48E930)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1E48E300)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1E48E310)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1E48E320)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1E48E350)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1E48E390)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1E48E5A0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1E48E610)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1E48E620)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1E48E8A0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1E48E8B0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E48E240)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1E48E510)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E48E250)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E48E260)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E48E270)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1E48E280)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1E48E2B0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1E48E2C0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1E48E2E0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1E48E2F0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoField_TypeDefinitionIndex = 590;

	class MonoField : public ::System::Reflection::RtFieldInfo
	{
	public:
		::System::IntPtr Field_0; // 0x10
		::System::RuntimeFieldHandle Field_1; // 0x18
		::System::String* Field_2; // 0x20
		::System::Type* Field_3; // 0x28
		::System::Reflection::FieldAttributes Field_4; // 0x30

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::FieldAttributes Method_1_1()
		{
			return ((::System::Reflection::FieldAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_1_1_OFFSET))(this);
		}

		::System::RuntimeFieldHandle Method_2_2()
		{
			return ((::System::RuntimeFieldHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_2_2_OFFSET))(this);
		}

		::System::Type* Method_3_3()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_3_3_OFFSET))(this);
		}

		::System::Type* Method_4_4()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_4_4_OFFSET))(this);
		}

		::System::Type* Method_5_5(::System::Boolean declaring)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5_OFFSET))(this, declaring);
		}

		::System::Type* Method_6_6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_6_6_OFFSET))(this);
		}

		::System::Type* Method_7_7()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_7_7_OFFSET))(this);
		}

		::System::String* Method_8_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_8_8_OFFSET))(this);
		}

		::System::Boolean Method_9_9(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_9_9_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_10_10(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_10_10_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_11_11(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_11_11_OFFSET))(this, attributeType, inherit);
		}

		::System::Int32 Method_12_12()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_12_12_OFFSET))(this);
		}

		::System::Object* Method_13_13(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_13_13_OFFSET))(this, obj);
		}

		::System::Object* Method_14_14(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_14_14_OFFSET))(this, obj);
		}

		::System::String* Method_15_15()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_15_15_OFFSET))(this);
		}

		static ::System::Void Method_16_16(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_16_16_OFFSET))(fi, obj, value);
		}

		::System::Void Method_17_17(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_17_17_OFFSET))(this, obj, val, invokeAttr, binder, culture);
		}

		::System::Object* Method_18_18()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_18_18_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_19_19()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_19_19_OFFSET))(this);
		}

		::System::Void Method_20_20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_20_20_OFFSET))(this);
		}
	};
}
