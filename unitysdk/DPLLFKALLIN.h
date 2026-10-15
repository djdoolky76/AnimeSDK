#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DPLLFKALLIN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1265A5B0)
#define DPLLFKALLIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1265A530)
#define DPLLFKALLIN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1265A5E0)
#define DPLLFKALLIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1265A5A0)

inline static constexpr unsigned int DPLLFKALLIN_TypeDefinitionIndex = 78623;

	class DPLLFKALLIN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DPLLFKALLIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLLFKALLIN_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DPLLFKALLIN_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DPLLFKALLIN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
