#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeEventInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_MONOEVENT_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E6CF080)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1E6CEFF0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1E6CF000)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E6CE630)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E6CEE50)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E6CEA00)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E6CEED0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1E6CEF00)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1E6CEF30)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1E6CEF60)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1E6CEFD0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1E6CEFE0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoEvent_TypeDefinitionIndex = 587;

	class MonoEvent : public ::System::Reflection::RuntimeEventInfo
	{
	public:
		::System::IntPtr Field_0; // 0x18
		::System::IntPtr Field_1; // 0x20

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_0_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_1_1(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_1_1_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_2_2(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_2_2_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_3_3(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_3_3_OFFSET))(this, nonPublic);
		}

		::System::Type* Method_4_4()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_4_OFFSET))(this);
		}

		::System::Type* Method_5_5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_5_5_OFFSET))(this);
		}

		::System::String* Method_6_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_6_6_OFFSET))(this);
		}

		::System::String* Method_7_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_7_7_OFFSET))(this);
		}

		::System::Boolean Method_8_8(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_8_8_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_9_9(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_9_9_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_10_10(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_10_10_OFFSET))(this, attributeType, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_11_11()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_11_11_OFFSET))(this);
		}
	};
}
