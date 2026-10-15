#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace System::Threading::Tasks
{
	template <typename T>
	class TaskFactory_1_FromAsyncTrimPromise_1
	{
	public:
		T m_thisRef; // 0x0
		::System::Func_3<T, ::System::IAsyncResult*, T>* m_endMethod; // 0x0
		static ::System::AsyncCallback** StaticGet_s_completeFromAsyncResult()
		{
			return (::System::AsyncCallback**)UnitySDK::FromName("System.Threading.Tasks", "FromAsyncTrimPromise`1")->GetStaticField(0x0);
		}

	};
}
