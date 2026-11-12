#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD977B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGEOBJECT_OFFSET UNITYSDK_OFFSET(0x1CD97700)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CD95B20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEOBJECT_OFFSET UNITYSDK_OFFSET(0x1CD84040)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ReflectionUtil_TypeDefinitionIndex = 36775;

	class ReflectionUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_EmptyTypes()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "ReflectionUtil")->GetStaticField(0x5E2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CCTOR_OFFSET))();
		}

		static ::System::Func_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>* CreateFuncIMessageObject(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Func_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEFUNCIMESSAGEOBJECT_OFFSET))(a1);
		}

		static ::System::Action_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>* CreateActionIMessageObject(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Action_2<::MiHoYo::SDK::Protobuf::IMessage*, ::System::Object*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGEOBJECT_OFFSET))(a1);
		}

		static ::System::Action_1<::MiHoYo::SDK::Protobuf::IMessage*>* CreateActionIMessage(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Action_1<::MiHoYo::SDK::Protobuf::IMessage*>*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_REFLECTIONUTIL_CREATEACTIONIMESSAGE_OFFSET))(a1);
		}

	};
}
