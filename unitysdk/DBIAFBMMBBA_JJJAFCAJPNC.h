#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/MulticastDelegate.h"
class IAJGGEMFOMB;
namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DBIAFBMMBBA_JJJAFCAJPNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xDFE3470)
#define DBIAFBMMBBA_JJJAFCAJPNC_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE3400)
#define DBIAFBMMBBA_JJJAFCAJPNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xDFE34F0)
#define DBIAFBMMBBA_JJJAFCAJPNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xDFE2FE0)

	class DBIAFBMMBBA_JJJAFCAJPNC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_JJJAFCAJPNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Action* Invoke(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::IAJGGEMFOMB* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_JJJAFCAJPNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::IAJGGEMFOMB* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::IAJGGEMFOMB*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_JJJAFCAJPNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Action* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_JJJAFCAJPNC_ENDINVOKE_OFFSET))(this, a1);
		}

	};
