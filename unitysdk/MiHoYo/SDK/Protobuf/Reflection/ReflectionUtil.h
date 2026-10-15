#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC0E950)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC0E8A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BC0CCC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BBFB190)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	class ReflectionUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_EmptyTypes()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "ReflectionUtil")->GetStaticField(0x50610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CCTOR_OFFSET))();
		}

		static ::System::Func_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>* CreateFuncIMessageObject(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Func_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEOBJECT_OFFSET))(a1);
		}

		static ::System::Action* CreateActionIMessageObject(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Action*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGEOBJECT_OFFSET))(a1);
		}

		static ::System::Action* CreateActionIMessage(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Action*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGE_OFFSET))(a1);
		}

	};
}
