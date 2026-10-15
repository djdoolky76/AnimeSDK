#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class OIJOKMHJKLJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD4914C0)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_CTOR_OFFSET UNITYSDK_OFFSET(0xD491450)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD4914F0)
#define RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_INVOKE_OFFSET UNITYSDK_OFFSET(0xD490EB0)

namespace RPG::Client
{
	class LoadingManager_WorkDefCounter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::List_1<::OIJOKMHJKLJ*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGMANAGER_WORKDEFCOUNTER_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
