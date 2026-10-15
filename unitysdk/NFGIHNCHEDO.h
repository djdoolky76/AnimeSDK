#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NFGIHNCHEDO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBB92810)
#define NFGIHNCHEDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB92790)
#define NFGIHNCHEDO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBB92880)
#define NFGIHNCHEDO_INVOKE_OFFSET UNITYSDK_OFFSET(0xBB92800)

	class NFGIHNCHEDO : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NFGIHNCHEDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + NFGIHNCHEDO_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::AdvNavigationFailReason a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NFGIHNCHEDO_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NFGIHNCHEDO_ENDINVOKE_OFFSET))(this, a1);
		}

	};
