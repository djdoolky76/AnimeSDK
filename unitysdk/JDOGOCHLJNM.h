#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define JDOGOCHLJNM_CTOR_OFFSET UNITYSDK_OFFSET(0x16611130)
#define JDOGOCHLJNM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x16611080)
#define JDOGOCHLJNM__ONBIND_OFFSET UNITYSDK_OFFSET(0x16610FE0)

	class JDOGOCHLJNM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x60
		::UnityEngine::UI::Text* CALNLFBNMPM; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOGOCHLJNM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDOGOCHLJNM__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JDOGOCHLJNM_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

	};
