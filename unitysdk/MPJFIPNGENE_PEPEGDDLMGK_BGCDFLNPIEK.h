#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPJFIPNGENE_ThreadState.h"
#include "unitysdk/System/MulticastDelegate.h"
class MPJFIPNGENE_PEPEGDDLMGK;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EC52F10)
#define MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC52E20)
#define MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EC52F90)
#define MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EC52E10)

	class MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MPJFIPNGENE_PEPEGDDLMGK* a1, ::MPJFIPNGENE_ThreadState a2)
		{
			return ((::System::Void(*)(::PVOID, ::MPJFIPNGENE_PEPEGDDLMGK*, ::MPJFIPNGENE_ThreadState))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MPJFIPNGENE_PEPEGDDLMGK* a1, ::MPJFIPNGENE_ThreadState a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MPJFIPNGENE_PEPEGDDLMGK*, ::MPJFIPNGENE_ThreadState, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MPJFIPNGENE_PEPEGDDLMGK_BGCDFLNPIEK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
