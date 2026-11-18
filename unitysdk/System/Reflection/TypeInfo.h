#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Type.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_TYPEINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E694B60)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1E694EA0)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1E694EC0)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E694B70)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E694B80)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E694B90)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E694D30)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1E694D50)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1E694DB0)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1E694E40)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1E694E60)
#define SYSTEM_REFLECTION_TYPEINFO_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1E694E80)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 564;

	class TypeInfo : public ::System::Type
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::TypeInfo* Method_1_1()
		{
			return ((::System::Reflection::TypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_1_1_OFFSET))(this);
		}

		::System::Type* Method_2_2()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_2_2_OFFSET))(this);
		}

		::System::Boolean Method_3_3(::System::Reflection::TypeInfo* typeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_3_3_OFFSET))(this, typeInfo);
		}

		::System::Reflection::FieldInfo* Method_4_4(::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_4_4_OFFSET))(this, name);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* Method_5_5(::System::String* name)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_5_5_OFFSET))(this, name);
		}

		::System::Reflection::PropertyInfo* Method_6_6(::System::String* name)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_6_6_OFFSET))(this, name);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* Method_7_7()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_7_7_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* Method_8_8()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_8_8_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* Method_9_9()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_9_9_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* Method_10_10()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_10_10_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* Method_11_11()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_METHOD_11_11_OFFSET))(this);
		}
	};
}
