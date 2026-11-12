#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CKFEAPMJFCI_ACLJLDJNBFH_OFFSET UNITYSDK_OFFSET(0xE093E40)
#define CKFEAPMJFCI_BMJBEHCBNFF_OFFSET UNITYSDK_OFFSET(0xE093CE0)
#define CKFEAPMJFCI_CTOR_OFFSET UNITYSDK_OFFSET(0xE0940F0)
#define CKFEAPMJFCI_ECDKPMOJHHN_OFFSET UNITYSDK_OFFSET(0xE094090)
#define CKFEAPMJFCI_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xE093B70)
#define CKFEAPMJFCI_KOMKENFFFDG_OFFSET UNITYSDK_OFFSET(0xE093AE0)
#define CKFEAPMJFCI_NEDKFFOPPPC_OFFSET UNITYSDK_OFFSET(0xE093FB0)
#define CKFEAPMJFCI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xE093BC0)
#define CKFEAPMJFCI__ONBIND_OFFSET UNITYSDK_OFFSET(0xE0938D0)
#define CKFEAPMJFCI__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xE0939D0)

inline static constexpr unsigned int CKFEAPMJFCI_TypeDefinitionIndex = 73809;

	class CKFEAPMJFCI : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* JINLLOBAGML; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::RPG::GameCore::StageInvasionMonsterUIData APPIHABBCGK; // 0x70
		::System::Boolean CHMLELPHHIO; // 0xA8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* PENODFJKLGN; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		// static const ::System::String* PECBECKJLJA; // 0x0
		// static const ::System::String* PNKIHIGMFON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void BMJBEHCBNFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_BMJBEHCBNFF_OFFSET))(this);
		}

		::System::Void NEDKFFOPPPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_NEDKFFOPPPC_OFFSET))(this);
		}

		::System::Void ACLJLDJNBFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_ACLJLDJNBFH_OFFSET))(this);
		}

		::System::String* ECDKPMOJHHN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_ECDKPMOJHHN_OFFSET))(this);
		}

		::System::Boolean KOMKENFFFDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_KOMKENFFFDG_OFFSET))(this);
		}

	};
