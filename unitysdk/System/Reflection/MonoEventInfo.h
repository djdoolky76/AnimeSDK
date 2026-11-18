#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/EventAttributes.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoEvent; }

#define SYSTEM_REFLECTION_MONOEVENTINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DB59950)
#define SYSTEM_REFLECTION_MONOEVENTINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1DB59960)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoEventInfo_TypeDefinitionIndex = 585;

	struct alignas(8) MonoEventInfo
	{
		::System::Type* Field_0; // 0x10
		::System::Type* Field_1; // 0x18
		::System::String* Field_2; // 0x20
		::System::Reflection::MethodInfo* Field_3; // 0x28
		::System::Reflection::MethodInfo* Field_4; // 0x30
		::System::Reflection::MethodInfo* Field_5; // 0x38
		::System::Reflection::EventAttributes Field_6; // 0x40
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Reflection::MethodInfo*>* Field_7; // 0x48

		/*
		static ::System::Void Method_0(::System::Reflection::MonoEvent* ev, ::System::Reflection::MonoEventInfo& info)
		{
			return ((::System::Void(*)(::System::Reflection::MonoEvent*, ::System::Reflection::MonoEventInfo&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENTINFO_METHOD_0_OFFSET))(ev, info);
		}
		*/

		/*
		static ::System::Reflection::MonoEventInfo Method_1_1(::System::Reflection::MonoEvent* ev)
		{
			return ((::System::Reflection::MonoEventInfo(*)(::System::Reflection::MonoEvent*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENTINFO_METHOD_1_1_OFFSET))(ev);
		}
		*/
	};
}
