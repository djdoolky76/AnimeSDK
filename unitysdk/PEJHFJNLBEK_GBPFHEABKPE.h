#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PEJHFJNLBEK_GBPFHEABKPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC1EA170)
#define PEJHFJNLBEK_GBPFHEABKPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EA0F0)
#define PEJHFJNLBEK_GBPFHEABKPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC1EA1A0)
#define PEJHFJNLBEK_GBPFHEABKPE_INVOKE_OFFSET UNITYSDK_OFFSET(0xC1EA160)

inline static constexpr unsigned int PEJHFJNLBEK_GBPFHEABKPE_TypeDefinitionIndex = 50319;

	class PEJHFJNLBEK_GBPFHEABKPE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PEJHFJNLBEK_GBPFHEABKPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJHFJNLBEK_GBPFHEABKPE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PEJHFJNLBEK_GBPFHEABKPE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PEJHFJNLBEK_GBPFHEABKPE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
