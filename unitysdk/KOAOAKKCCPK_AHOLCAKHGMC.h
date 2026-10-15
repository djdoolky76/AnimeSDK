#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class BKPEADLKFGJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KOAOAKKCCPK_AHOLCAKHGMC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB5893A0)
#define KOAOAKKCCPK_AHOLCAKHGMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB589330)
#define KOAOAKKCCPK_AHOLCAKHGMC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB5893D0)
#define KOAOAKKCCPK_AHOLCAKHGMC_INVOKE_OFFSET UNITYSDK_OFFSET(0xB589320)

inline static constexpr unsigned int KOAOAKKCCPK_AHOLCAKHGMC_TypeDefinitionIndex = 72344;

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
