#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskFactory_1_FromAsyncTrimPromise_1_TypeDefinitionIndex = 876;

	template <typename T>
	class TaskFactory_1_FromAsyncTrimPromise_1
	{
	public:
		static ::System::AsyncCallback** StaticGet_s_completeFromAsyncResult()
		{
			return (::System::AsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(TaskFactory_1_FromAsyncTrimPromise_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		T m_thisRef; // 0x0
		::System::Func_3<T, ::System::IAsyncResult*, T>* m_endMethod; // 0x0
	};
}
