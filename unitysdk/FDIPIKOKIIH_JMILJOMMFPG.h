#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }

#define FDIPIKOKIIH_JMILJOMMFPG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C445310)
#define FDIPIKOKIIH_JMILJOMMFPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C445290)
#define FDIPIKOKIIH_JMILJOMMFPG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C445340)
#define FDIPIKOKIIH_JMILJOMMFPG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C445300)

inline static constexpr unsigned int FDIPIKOKIIH_JMILJOMMFPG_TypeDefinitionIndex = 41440;

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
