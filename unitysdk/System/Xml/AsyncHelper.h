#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_XML_ASYNCHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE91E50)

namespace System::Xml
{
	class AsyncHelper : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Task** StaticGet_DoneTask()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Xml", "AsyncHelper")->GetStaticField(0x1F950);
		}

		static ::System::Threading::Tasks::Task** StaticGet_DoneTaskFalse()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Xml", "AsyncHelper")->GetStaticField(0x1F958);
		}

		static ::System::Threading::Tasks::Task** StaticGet_DoneTaskTrue()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Xml", "AsyncHelper")->GetStaticField(0x1F960);
		}

		static ::System::Threading::Tasks::Task** StaticGet_DoneTaskZero()
		{
			return (::System::Threading::Tasks::Task**)UnitySDK::FromName("System.Xml", "AsyncHelper")->GetStaticField(0x1F968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_ASYNCHELPER_CCTOR_OFFSET))();
		}

	};
}
