#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class CKEIGJNHMDN;
class OIKDLNCBPFM;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BGGDOPNKDLK_MMDPKKPOHOG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5BE260)
#define BGGDOPNKDLK_MMDPKKPOHOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BE170)
#define BGGDOPNKDLK_MMDPKKPOHOG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5BE2E0)
#define BGGDOPNKDLK_MMDPKKPOHOG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5BA710)

inline static constexpr unsigned int BGGDOPNKDLK_MMDPKKPOHOG_TypeDefinitionIndex = 37264;

	class BGGDOPNKDLK_MMDPKKPOHOG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_MMDPKKPOHOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single Invoke(::CKEIGJNHMDN* a1, ::OIKDLNCBPFM* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::CKEIGJNHMDN*, ::OIKDLNCBPFM*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_MMDPKKPOHOG_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::CKEIGJNHMDN* a1, ::OIKDLNCBPFM* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CKEIGJNHMDN*, ::OIKDLNCBPFM*, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_MMDPKKPOHOG_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_MMDPKKPOHOG_ENDINVOKE_OFFSET))(this, a1);
		}

	};
