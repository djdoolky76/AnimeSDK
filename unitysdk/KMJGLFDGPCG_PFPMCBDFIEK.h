#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KMJGLFDGPCG_PFPMCBDFIEK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB55CC20)
#define KMJGLFDGPCG_PFPMCBDFIEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB55CBA0)
#define KMJGLFDGPCG_PFPMCBDFIEK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB55CC70)
#define KMJGLFDGPCG_PFPMCBDFIEK_INVOKE_OFFSET UNITYSDK_OFFSET(0xB55CC10)

	class KMJGLFDGPCG_PFPMCBDFIEK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_PFPMCBDFIEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_PFPMCBDFIEK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_PFPMCBDFIEK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_PFPMCBDFIEK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
