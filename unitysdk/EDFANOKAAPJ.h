#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EDFANOKAAPJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13313020)
#define EDFANOKAAPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13312FA0)
#define EDFANOKAAPJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13313070)
#define EDFANOKAAPJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x13313010)

inline static constexpr unsigned int EDFANOKAAPJ_TypeDefinitionIndex = 50056;

	class EDFANOKAAPJ : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EDFANOKAAPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDFANOKAAPJ_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EDFANOKAAPJ_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EDFANOKAAPJ_ENDINVOKE_OFFSET))(this, a1);
		}

	};
