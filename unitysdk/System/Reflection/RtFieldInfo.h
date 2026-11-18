#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/RuntimeFieldInfo.h"
#include "unitysdk/System/TypedReference.h"

namespace System { class Object; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }

#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1C897D80)
#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1C897A70)
#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1C897AB0)
#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1C897C20)
#define SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1C897C50)

namespace System::Reflection
{
	inline static constexpr unsigned int RtFieldInfo_TypeDefinitionIndex = 589;

	class RtFieldInfo : public ::System::Reflection::RuntimeFieldInfo
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_0_OFFSET))(this);
		}

		::System::Object* Method_1_1(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_1_1_OFFSET))(this, obj);
		}

		::System::Void Method_2_2(::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_2_2_OFFSET))(this, target);
		}

		::System::Void Method_3_3(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_3_3_OFFSET))(this, obj, value, invokeAttr, binder, culture);
		}

		::System::Void Method_4_4(::System::TypedReference obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RTFIELDINFO_METHOD_4_4_OFFSET))(this, obj, value);
		}
	};
}
