#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/Mono/RuntimeEventHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo_AddEventAdapter; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_EVENTINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1E6CE6C0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1E6CEC70)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1E6CEC80)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1E6CEC90)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1E6CECC0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1E6CECF0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1E6CED60)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1E6CE5A0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1E6CE6B0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1E6CE6D0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1E6CE900)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1E6CE980)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1E6CEA80)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_TypeDefinitionIndex = 576;

	class EventInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Reflection::EventInfo_AddEventAdapter* Field_0; // 0x10

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_0_OFFSET))(this);
		}

		::System::Type* Method_1_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_1_1_OFFSET))(this);
		}

		::System::Reflection::MemberTypes Method_2_2()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_2_OFFSET))(this);
		}

		::System::Void Method_3_3(::System::Object* target, ::System::Delegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_3_3_OFFSET))(this, target, handler);
		}

		::System::Reflection::MethodInfo* Method_4_4()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_4_4_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_7_7()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_7_7_OFFSET))(this);
		}

		::System::Void Method_9_9(::System::Object* target, ::System::Delegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_9_9_OFFSET))(this, target, handler);
		}

		::System::Boolean Method_10_10(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_10_10_OFFSET))(this, obj);
		}

		::System::Int32 Method_11_11()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_11_11_OFFSET))(this);
		}

		static ::System::Boolean Method_12_12(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_12_12_OFFSET))(left, right);
		}

		static ::System::Boolean Method_13_13(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_13_13_OFFSET))(left, right);
		}

		static ::System::Reflection::EventInfo* Method_14_14(::System::IntPtr event_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::EventInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_14_14_OFFSET))(event_handle, type_handle);
		}

		static ::System::Reflection::EventInfo* Method_15_15(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::EventInfo*(*)(::Mono::RuntimeEventHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_15_15_OFFSET))(handle, reflectedType);
		}
	};
}
