#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class EBHIPAOMDOF;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define OCKEFINEJCD_CTOR_OFFSET UNITYSDK_OFFSET(0xBD6F530)
#define OCKEFINEJCD_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBD6F160)
#define OCKEFINEJCD_MDOFPEBJCKA_OFFSET UNITYSDK_OFFSET(0xBD6F440)
#define OCKEFINEJCD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBD6F250)
#define OCKEFINEJCD__ONBIND_OFFSET UNITYSDK_OFFSET(0xBD6F0A0)

	class OCKEFINEJCD : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::UIValueChangeAnimation* CGJKPIEFBKB; // 0x60
		::RPG::Client::LocalizedText* PKANBKHJHNP; // 0x68
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x70
		::System::Boolean IDBEBIDMHME; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKEFINEJCD_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKEFINEJCD__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKEFINEJCD_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::EBHIPAOMDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBHIPAOMDOF*))((::PBYTE)hIl2Cpp + OCKEFINEJCD_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MDOFPEBJCKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCKEFINEJCD_MDOFPEBJCKA_OFFSET))(this, a1);
		}

	};
