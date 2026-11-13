#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BANDDFEHONE;
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define EEGFDJCDDAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3155A0)
#define EEGFDJCDDAA_ENJOBBFNEFE_OFFSET UNITYSDK_OFFSET(0x1A315390)
#define EEGFDJCDDAA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A3154C0)
#define EEGFDJCDDAA_NENHDNAJMPM_OFFSET UNITYSDK_OFFSET(0x1A315550)
#define EEGFDJCDDAA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1A315110)
#define EEGFDJCDDAA__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A314DD0)
#define EEGFDJCDDAA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A315010)

inline static constexpr unsigned int EEGFDJCDDAA_TypeDefinitionIndex = 74222;

	class EEGFDJCDDAA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x68
		::UnityEngine::UI::Image* LPMHMLOGPPN; // 0x70
		::UnityEngine::UI::Image* OJKPNKKJADJ; // 0x78
		::BANDDFEHONE* EEHODNKAAMH; // 0x80
		// static const ::System::String* KKNLLHMIHEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGFDJCDDAA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGFDJCDDAA__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGFDJCDDAA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::BANDDFEHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BANDDFEHONE*))((::PBYTE)hIl2Cpp + EEGFDJCDDAA_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGFDJCDDAA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void NENHDNAJMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGFDJCDDAA_NENHDNAJMPM_OFFSET))(this);
		}

		::System::String* ENJOBBFNEFE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEGFDJCDDAA_ENJOBBFNEFE_OFFSET))(this);
		}

	};
