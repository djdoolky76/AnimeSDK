#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class UnhandledExceptionEventArgs; }
namespace System { class UnhandledExceptionEventHandler; }

#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F43AEF0)
#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F43AF20)
#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C__REGISTERUECATCHER_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F43AF30)

namespace UnityEngine
{
	inline static constexpr unsigned int UnhandledExceptionHandler___c_TypeDefinitionIndex = 4359;

	class UnhandledExceptionHandler___c : public ::System::Object
	{
	public:
		static ::System::UnhandledExceptionEventHandler** StaticGet___9__0_0()
		{
			return (::System::UnhandledExceptionEventHandler**)UnitySDK::FromName("UnityEngine", "<>c")->GetStaticField(0x16A50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine", "<>c")->GetStaticField(0x16A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C_CTOR_OFFSET))(this);
		}

		::System::Void _RegisterUECatcher_b__0_0(::System::Object* a1, ::System::UnhandledExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::UnhandledExceptionEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C__REGISTERUECATCHER_B__0_0_OFFSET))(this, a1, a2);
		}

	};
}
