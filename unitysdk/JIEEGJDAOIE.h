#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNAKIBHJLFN.h"
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define JIEEGJDAOIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB1EF180)
#define JIEEGJDAOIE_DMJOKNMPLHJ_OFFSET UNITYSDK_OFFSET(0xB1EF6D0)
#define JIEEGJDAOIE_HGAMLCFBAHL_OFFSET UNITYSDK_OFFSET(0xB1EF530)
#define JIEEGJDAOIE_JALNEMBGHEF_OFFSET UNITYSDK_OFFSET(0xB1EF670)
#define JIEEGJDAOIE_KBPBMDFLFHP_OFFSET UNITYSDK_OFFSET(0xB1EF610)
#define JIEEGJDAOIE_KGDLMPEABGG_OFFSET UNITYSDK_OFFSET(0xB1EF1D0)
#define JIEEGJDAOIE__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0xB1EF8C0)

	class JIEEGJDAOIE : public ::KNAKIBHJLFN
	{
	public:
		::RPG::Client::Promises::Promise* OBLMKODKNCA; // 0x28
		::RPG::Client::Promises::Promise* NFEBMNGKADJ; // 0x30
		::RPG::Client::UIController* IBLBKLNHKLL; // 0x38
		::RPG::Client::Promises::Promise* ECDCAFKFIFJ; // 0x40
		::RPG::Client::UIController* HKJLKMCDMGB; // 0x48
		::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + JIEEGJDAOIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KGDLMPEABGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEEGJDAOIE_KGDLMPEABGG_OFFSET))(this);
		}

		::System::Boolean HGAMLCFBAHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEEGJDAOIE_HGAMLCFBAHL_OFFSET))(this);
		}

		::System::Void DMJOKNMPLHJ(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + JIEEGJDAOIE_DMJOKNMPLHJ_OFFSET))(this, a1);
		}

		::System::Void JALNEMBGHEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEEGJDAOIE_JALNEMBGHEF_OFFSET))(this);
		}

		::System::Void KBPBMDFLFHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEEGJDAOIE_KBPBMDFLFHP_OFFSET))(this);
		}

		::System::Void _PlayTransition_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIEEGJDAOIE__PLAYTRANSITION_B__1_0_OFFSET))(this);
		}

	};
