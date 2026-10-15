#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class OCELNDMELEI;
namespace RPG::Client { class RPGAnimationEvent; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define MIHFMNGIOII_CTOR_OFFSET UNITYSDK_OFFSET(0xB959860)
#define MIHFMNGIOII_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0xB9597C0)
#define MIHFMNGIOII_MGKONMGHOKE_OFFSET UNITYSDK_OFFSET(0xB959820)
#define MIHFMNGIOII_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB9593D0)
#define MIHFMNGIOII__ONBIND_OFFSET UNITYSDK_OFFSET(0xB959330)
#define MIHFMNGIOII__SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0xB959890)

	class MIHFMNGIOII : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::RPG::Client::RPGAnimationEvent* LHMIOEDNCAJ; // 0x70
		::System::Boolean EMHAACACFOM; // 0x78
		::System::Byte _padding0[0x3];
		::System::UInt32 CHDGJKAEJOF; // 0x7C
		// static const ::System::String* PKGOOJBGLEG; // 0x0
		// static const ::System::String* KBDENNHLLOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHFMNGIOII_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHFMNGIOII__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::OCELNDMELEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCELNDMELEI*))((::PBYTE)hIl2Cpp + MIHFMNGIOII_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void FNFEMGIBECE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHFMNGIOII_FNFEMGIBECE_OFFSET))(this);
		}

		::System::UInt32 MGKONMGHOKE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHFMNGIOII_MGKONMGHOKE_OFFSET))(this);
		}

		::System::Void _SetupView_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHFMNGIOII__SETUPVIEW_B__4_0_OFFSET))(this);
		}

	};
