#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICINHDDLEHO_IPIKDCHMHIA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16DFB560)
#define ICINHDDLEHO_IPIKDCHMHIA_CTOR_OFFSET UNITYSDK_OFFSET(0x16DFB4F0)
#define ICINHDDLEHO_IPIKDCHMHIA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16DFB5B0)
#define ICINHDDLEHO_IPIKDCHMHIA_INVOKE_OFFSET UNITYSDK_OFFSET(0x16DFB1A0)

inline static constexpr unsigned int ICINHDDLEHO_IPIKDCHMHIA_TypeDefinitionIndex = 71378;

	class ICINHDDLEHO_IPIKDCHMHIA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ICINHDDLEHO_IPIKDCHMHIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICINHDDLEHO_IPIKDCHMHIA_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICINHDDLEHO_IPIKDCHMHIA_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ICINHDDLEHO_IPIKDCHMHIA_ENDINVOKE_OFFSET))(this, a1);
		}

	};
