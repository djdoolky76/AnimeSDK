#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class BKABEBEPPJK;
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleTaskConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NADCKIGKIIJ_OJNNNDDDGHP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C934940)
#define NADCKIGKIIJ_OJNNNDDDGHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C934850)
#define NADCKIGKIIJ_OJNNNDDDGHP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C934980)
#define NADCKIGKIIJ_OJNNNDDDGHP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C92E960)

	class NADCKIGKIIJ_OJNNNDDDGHP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NADCKIGKIIJ_OJNNNDDDGHP_CTOR_OFFSET))(this, a1, a2);
		}

		::BKABEBEPPJK* Invoke(::RPG::GameCore::MarbleTaskConfig* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::BKABEBEPPJK*(*)(::PVOID, ::RPG::GameCore::MarbleTaskConfig*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + NADCKIGKIIJ_OJNNNDDDGHP_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::MarbleTaskConfig* a1, ::JMOHKKCNCMA* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::MarbleTaskConfig*, ::JMOHKKCNCMA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NADCKIGKIIJ_OJNNNDDDGHP_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::BKABEBEPPJK* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::BKABEBEPPJK*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NADCKIGKIIJ_OJNNNDDDGHP_ENDINVOKE_OFFSET))(this, a1);
		}

	};
