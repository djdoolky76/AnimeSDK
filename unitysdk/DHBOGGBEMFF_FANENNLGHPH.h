#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DHBOGGBEMFF_FANENNLGHPH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xEBC77C0)
#define DHBOGGBEMFF_FANENNLGHPH_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC7740)
#define DHBOGGBEMFF_FANENNLGHPH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xEBC77F0)
#define DHBOGGBEMFF_FANENNLGHPH_INVOKE_OFFSET UNITYSDK_OFFSET(0xEBC77B0)

inline static constexpr unsigned int DHBOGGBEMFF_FANENNLGHPH_TypeDefinitionIndex = 49126;

	class DHBOGGBEMFF_FANENNLGHPH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FANENNLGHPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FANENNLGHPH_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FANENNLGHPH_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FANENNLGHPH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
