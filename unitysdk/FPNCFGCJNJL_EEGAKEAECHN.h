#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class DFCDIIJKIJC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Component; }

#define FPNCFGCJNJL_EEGAKEAECHN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x159219F0)
#define FPNCFGCJNJL_EEGAKEAECHN_CTOR_OFFSET UNITYSDK_OFFSET(0x159218F0)
#define FPNCFGCJNJL_EEGAKEAECHN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15921A20)
#define FPNCFGCJNJL_EEGAKEAECHN_INVOKE_OFFSET UNITYSDK_OFFSET(0x159219E0)

inline static constexpr unsigned int FPNCFGCJNJL_EEGAKEAECHN_TypeDefinitionIndex = 49083;

	class FPNCFGCJNJL_EEGAKEAECHN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_EEGAKEAECHN_CTOR_OFFSET))(this, a1, a2);
		}

		::DFCDIIJKIJC* Invoke(::UnityEngine::Component* a1)
		{
			return ((::DFCDIIJKIJC*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_EEGAKEAECHN_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Component* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Component*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_EEGAKEAECHN_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::DFCDIIJKIJC* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::DFCDIIJKIJC*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FPNCFGCJNJL_EEGAKEAECHN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
