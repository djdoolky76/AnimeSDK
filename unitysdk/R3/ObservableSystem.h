#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { class FrameProvider; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class TimeProvider; }

#define R3_OBSERVABLESYSTEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C423D40)
#define R3_OBSERVABLESYSTEM_DEFAULTUNHANDLEDEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1C423C50)
#define R3_OBSERVABLESYSTEM_GETUNHANDLEDEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1C423BF0)

namespace R3
{
	inline static constexpr unsigned int ObservableSystem_TypeDefinitionIndex = 35924;

	class ObservableSystem : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_unhandledException()
		{
			return (::System::Action**)UnitySDK::FromName("R3", "ObservableSystem")->GetStaticField(0xA40);
		}

		static ::System::TimeProvider** StaticGet_defaultTimeProvider()
		{
			return (::System::TimeProvider**)UnitySDK::FromName("R3", "ObservableSystem")->GetStaticField(0xA48);
		}

		static ::R3::FrameProvider** StaticGet_defaultFrameProvider()
		{
			return (::R3::FrameProvider**)UnitySDK::FromName("R3", "ObservableSystem")->GetStaticField(0xA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM_CCTOR_OFFSET))();
		}

		static ::System::Action* GetUnhandledExceptionHandler()
		{
			return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM_GETUNHANDLEDEXCEPTIONHANDLER_OFFSET))();
		}

		static ::System::Void DefaultUnhandledExceptionHandler(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM_DEFAULTUNHANDLEDEXCEPTIONHANDLER_OFFSET))(a1);
		}

	};
}
