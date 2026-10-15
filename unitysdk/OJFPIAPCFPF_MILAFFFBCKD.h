#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OJFPIAPCFPF_MILAFFFBCKD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBEACFD0)
#define OJFPIAPCFPF_MILAFFFBCKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBEACF60)
#define OJFPIAPCFPF_MILAFFFBCKD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBEAD020)
#define OJFPIAPCFPF_MILAFFFBCKD_INVOKE_OFFSET UNITYSDK_OFFSET(0xBEAC370)

inline static constexpr unsigned int OJFPIAPCFPF_MILAFFFBCKD_TypeDefinitionIndex = 66425;

	class OJFPIAPCFPF_MILAFFFBCKD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MILAFFFBCKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MILAFFFBCKD_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MILAFFFBCKD_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OJFPIAPCFPF_MILAFFFBCKD_ENDINVOKE_OFFSET))(this, a1);
		}

	};
