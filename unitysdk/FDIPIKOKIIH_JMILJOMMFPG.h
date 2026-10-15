#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }

#define FDIPIKOKIIH_JMILJOMMFPG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C473980)
#define FDIPIKOKIIH_JMILJOMMFPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C473900)
#define FDIPIKOKIIH_JMILJOMMFPG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C4739B0)
#define FDIPIKOKIIH_JMILJOMMFPG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C473970)

	class FDIPIKOKIIH_JMILJOMMFPG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FDIPIKOKIIH_JMILJOMMFPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerable* Invoke()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIPIKOKIIH_JMILJOMMFPG_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FDIPIKOKIIH_JMILJOMMFPG_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerable* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FDIPIKOKIIH_JMILJOMMFPG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
