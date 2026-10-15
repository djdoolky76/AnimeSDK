#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JFJCIGJIPBP_AADEMJOJEEG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x166500B0)
#define JFJCIGJIPBP_AADEMJOJEEG_CTOR_OFFSET UNITYSDK_OFFSET(0x16650040)
#define JFJCIGJIPBP_AADEMJOJEEG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x166500E0)
#define JFJCIGJIPBP_AADEMJOJEEG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1664FCD0)

inline static constexpr unsigned int JFJCIGJIPBP_AADEMJOJEEG_TypeDefinitionIndex = 61550;

	class JFJCIGJIPBP_AADEMJOJEEG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_AADEMJOJEEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_AADEMJOJEEG_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_AADEMJOJEEG_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JFJCIGJIPBP_AADEMJOJEEG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
