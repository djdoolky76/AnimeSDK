#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CUSTOMRP_CAPTURECB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CBE0450)
#define RPG_CUSTOMRP_CAPTURECB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE03D0)
#define RPG_CUSTOMRP_CAPTURECB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CBE04C0)
#define RPG_CUSTOMRP_CAPTURECB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CBE0440)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureCb_TypeDefinitionIndex = 37610;

	class CaptureCb : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::Object* a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURECB_ENDINVOKE_OFFSET))(this, a1, a2);
		}

	};
}
