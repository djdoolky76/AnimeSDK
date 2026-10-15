#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CKFEAPMJFCI_ACLJLDJNBFH_OFFSET UNITYSDK_OFFSET(0xD759A30)
#define CKFEAPMJFCI_BMJBEHCBNFF_OFFSET UNITYSDK_OFFSET(0xD759970)
#define CKFEAPMJFCI_CTOR_OFFSET UNITYSDK_OFFSET(0xD759C90)
#define CKFEAPMJFCI_ECDKPMOJHHN_OFFSET UNITYSDK_OFFSET(0xD759C30)
#define CKFEAPMJFCI_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xD759750)
#define CKFEAPMJFCI_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD759850)
#define CKFEAPMJFCI_KOMKENFFFDG_OFFSET UNITYSDK_OFFSET(0xD759800)
#define CKFEAPMJFCI_NEDKFFOPPPC_OFFSET UNITYSDK_OFFSET(0xD759BA0)
#define CKFEAPMJFCI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xD7598A0)
#define CKFEAPMJFCI__ONBIND_OFFSET UNITYSDK_OFFSET(0xD7596E0)

	class CKFEAPMJFCI : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIStateCtrl* JINLLOBAGML; // 0x60
		::UnityEngine::Animation* KCOAILOHDND; // 0x68
		::System::Boolean CHMLELPHHIO; // 0x70
		::System::Byte _padding0[0x3];
		::RPG::GameCore::StageInvasionMonsterState DLNIGFGLPLJ; // 0x74
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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::StageInvasionMonsterState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterState))((::PBYTE)hIl2Cpp + CKFEAPMJFCI_NKPPGDENJAE_OFFSET))(this, a1);
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
