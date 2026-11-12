#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { class FrameProvider; }
namespace System { class Exception; }
namespace System { class TimeProvider; }
namespace System { template <typename T> class Action_1; }

#define R3_OBSERVABLESYSTEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA530)
#define R3_OBSERVABLESYSTEM_DEFAULTUNHANDLEDEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1D5AA440)
#define R3_OBSERVABLESYSTEM_GETUNHANDLEDEXCEPTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1D5AA3E0)

namespace R3
{
	inline static constexpr unsigned int ObservableSystem_TypeDefinitionIndex = 36852;

	class ObservableSystem : public ::System::Object
	{
	public:
		static ::System::TimeProvider** StaticGet_defaultTimeProvider()
		{
			return (::System::TimeProvider**)UnitySDK::FromName("R3", "ObservableSystem")->GetStaticField(0x9F0);
		}

		static ::R3::FrameProvider** StaticGet_defaultFrameProvider()
		{
			return (::R3::FrameProvider**)UnitySDK::FromName("R3", "ObservableSystem")->GetStaticField(0x9F8);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet_unhandledException()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("R3", "ObservableSystem")->GetStaticField(0xA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM_CCTOR_OFFSET))();
		}

		static ::System::Action_1<::System::Exception*>* GetUnhandledExceptionHandler()
		{
			return ((::System::Action_1<::System::Exception*>*(*)())((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM_GETUNHANDLEDEXCEPTIONHANDLER_OFFSET))();
		}

		static ::System::Void DefaultUnhandledExceptionHandler(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + R3_OBSERVABLESYSTEM_DEFAULTUNHANDLEDEXCEPTIONHANDLER_OFFSET))(a1);
		}

	};
}
