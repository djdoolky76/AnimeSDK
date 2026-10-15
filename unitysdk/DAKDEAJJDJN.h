#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class OEGDBPLMIAE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DAKDEAJJDJN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5D8140)
#define DAKDEAJJDJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D80C0)
#define DAKDEAJJDJN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5D81A0)
#define DAKDEAJJDJN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5D8130)

inline static constexpr unsigned int DAKDEAJJDJN_TypeDefinitionIndex = 36245;

	class DAKDEAJJDJN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DAKDEAJJDJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32 a1, ::OEGDBPLMIAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::OEGDBPLMIAE*))((::PBYTE)hIl2Cpp + DAKDEAJJDJN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::OEGDBPLMIAE* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::OEGDBPLMIAE*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DAKDEAJJDJN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DAKDEAJJDJN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
