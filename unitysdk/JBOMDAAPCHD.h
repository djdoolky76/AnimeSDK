#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define JBOMDAAPCHD_CTOR_OFFSET UNITYSDK_OFFSET(0x16576CE0)
#define JBOMDAAPCHD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16576C10)
#define JBOMDAAPCHD__ONBIND_OFFSET UNITYSDK_OFFSET(0x16576B90)

	class JBOMDAAPCHD : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOMDAAPCHD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOMDAAPCHD__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JBOMDAAPCHD_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};
