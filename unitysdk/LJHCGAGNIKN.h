#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class KMDMCCENAPE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LJHCGAGNIKN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CC934A0)
#define LJHCGAGNIKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC933A0)
#define LJHCGAGNIKN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CC934E0)
#define LJHCGAGNIKN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CC93490)

inline static constexpr unsigned int LJHCGAGNIKN_TypeDefinitionIndex = 43882;

	class LJHCGAGNIKN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LJHCGAGNIKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::KMDMCCENAPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::KMDMCCENAPE*))((::PBYTE)hIl2Cpp + LJHCGAGNIKN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::KMDMCCENAPE* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::KMDMCCENAPE*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LJHCGAGNIKN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LJHCGAGNIKN_ENDINVOKE_OFFSET))(this, a1);
		}

	};
