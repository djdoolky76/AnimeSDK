#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class OCELNDMELEI;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define IGEDAGOJCJB_BGEFMOIHGIN_OFFSET UNITYSDK_OFFSET(0x1640A4F0)
#define IGEDAGOJCJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1640A550)
#define IGEDAGOJCJB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1640A1F0)
#define IGEDAGOJCJB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1640A150)

	class IGEDAGOJCJB : public ::FMPCODLIOLG
	{
	public:
		::System::String* ONMIFAAODML; // 0x60
		::UnityEngine::UI::Image* OJKPNKKJADJ; // 0x68
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x70
		::UnityEngine::Animation* KCOAILOHDND; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDAGOJCJB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGEDAGOJCJB__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::OCELNDMELEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCELNDMELEI*))((::PBYTE)hIl2Cpp + IGEDAGOJCJB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void BGEFMOIHGIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IGEDAGOJCJB_BGEFMOIHGIN_OFFSET))(this, a1);
		}

	};
