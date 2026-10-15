#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class BKPEADLKFGJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KOAOAKKCCPK_AHOLCAKHGMC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB58FC70)
#define KOAOAKKCCPK_AHOLCAKHGMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB58FC00)
#define KOAOAKKCCPK_AHOLCAKHGMC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB58FCA0)
#define KOAOAKKCCPK_AHOLCAKHGMC_INVOKE_OFFSET UNITYSDK_OFFSET(0xB58FBF0)

	class KOAOAKKCCPK_AHOLCAKHGMC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KOAOAKKCCPK_AHOLCAKHGMC_CTOR_OFFSET))(this, a1, a2);
		}

		::BKPEADLKFGJ* Invoke()
		{
			return ((::BKPEADLKFGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAOAKKCCPK_AHOLCAKHGMC_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KOAOAKKCCPK_AHOLCAKHGMC_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::BKPEADLKFGJ* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::BKPEADLKFGJ*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KOAOAKKCCPK_AHOLCAKHGMC_ENDINVOKE_OFFSET))(this, a1);
		}

	};
