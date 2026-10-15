#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

namespace System::Threading
{
	template <typename T>
	class ThreadLocal_1 : public ::System::Object
	{
	public:
		::System::Func_1<T>* m_valueFactory; // 0x0
		::System::Int32 m_idComplement; // 0x0
		::System::Boolean m_initialized; // 0x0
		::System::Object* m_linkedSlot; // 0x0
		::System::Boolean m_trackAllValues; // 0x0
		static ::Il2CppArray<::System::Object*>** StaticGet_ts_slotArray()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("System.Threading", "ThreadLocal`1")->GetStaticField(0x0);
		}

		static ::System::Object** StaticGet_ts_finalizationHelper()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading", "ThreadLocal`1")->GetStaticField(0x0);
		}

		static ::System::Object** StaticGet_s_idManager()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading", "ThreadLocal`1")->GetStaticField(0x0);
		}

	};
}
