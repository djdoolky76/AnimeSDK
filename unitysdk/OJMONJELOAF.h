#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAIBehaviorState.h"
#include "unitysdk/RPG/GameCore/RtAIBehaviorStopReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DIBPAJHLFIF;
namespace System { class Action; }

#define OJMONJELOAF_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBECBAD0)
#define OJMONJELOAF_ABLHOKMABJJ_OFFSET UNITYSDK_OFFSET(0xBECBE70)
#define OJMONJELOAF_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xBECBDD0)
#define OJMONJELOAF_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xBECBE60)
#define OJMONJELOAF_CKGABGLKGAF_OFFSET UNITYSDK_OFFSET(0xBECB950)
#define OJMONJELOAF_CLEAR_OFFSET UNITYSDK_OFFSET(0xBECBC30)
#define OJMONJELOAF_CTOR_OFFSET UNITYSDK_OFFSET(0xBECBE80)
#define OJMONJELOAF_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBECB9B0)
#define OJMONJELOAF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBECBC80)
#define OJMONJELOAF_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xBECBE10)
#define OJMONJELOAF_LNNLMNBOPCB_OFFSET UNITYSDK_OFFSET(0xBECBD90)
#define OJMONJELOAF_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBECBD50)
#define OJMONJELOAF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBECB850)

	class OJMONJELOAF : public ::System::Object
	{
	public:
		::System::Action* HFNCIGJGPFM; // 0x10
		::RPG::GameCore::RtAIBehaviorStopReason AINIOFKHNKO; // 0x18
		::RPG::GameCore::RtAIBehaviorState DLNIGFGLPLJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON(::RPG::GameCore::RtAIBehaviorStopReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtAIBehaviorStopReason))((::PBYTE)hIl2Cpp + OJMONJELOAF_HFKFNFKIEON_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_CLEAR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OJMONJELOAF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LNNLMNBOPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_LNNLMNBOPCB_OFFSET))(this);
		}

		::System::Void BEMHFPJIJME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_BEMHFPJIJME_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OJMONJELOAF_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void CKGABGLKGAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_CKGABGLKGAF_OFFSET))(this);
		}

		::RPG::GameCore::RtAIBehaviorState BGDKFHEBDFJ()
		{
			return ((::RPG::GameCore::RtAIBehaviorState(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_BGDKFHEBDFJ_OFFSET))(this);
		}

		::RPG::GameCore::RtAIBehaviorStopReason ABLHOKMABJJ()
		{
			return ((::RPG::GameCore::RtAIBehaviorStopReason(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMONJELOAF_ABLHOKMABJJ_OFFSET))(this);
		}

	};
