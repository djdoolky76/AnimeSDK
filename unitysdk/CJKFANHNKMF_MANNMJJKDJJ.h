#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace RPG::Client { class NetPacket; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CJKFANHNKMF_MANNMJJKDJJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD4CF870)
#define CJKFANHNKMF_MANNMJJKDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD4CF760)
#define CJKFANHNKMF_MANNMJJKDJJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD4CF8D0)
#define CJKFANHNKMF_MANNMJJKDJJ_INVOKE_OFFSET UNITYSDK_OFFSET(0xD4CF850)

	class CJKFANHNKMF_MANNMJJKDJJ : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CJKFANHNKMF_MANNMJJKDJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::Client::NetPacket* a1, ::System::Object* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*, ::System::Object*, ::System::UInt32))((::PBYTE)hIl2Cpp + CJKFANHNKMF_MANNMJJKDJJ_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::NetPacket* a1, ::System::Object* a2, ::System::UInt32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::NetPacket*, ::System::Object*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CJKFANHNKMF_MANNMJJKDJJ_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::Object* a1, ::System::UInt32 a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CJKFANHNKMF_MANNMJJKDJJ_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}

	};
