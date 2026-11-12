#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAIBehaviorState.h"
#include "unitysdk/RPG/GameCore/RtAIBehaviorStopReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DIBPAJHLFIF;
namespace System { template <typename T> class Action_1; }

#define OJMONJELOAF_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC7C30D0)
#define OJMONJELOAF_ABLHOKMABJJ_OFFSET UNITYSDK_OFFSET(0xC7C3470)
#define OJMONJELOAF_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xC7C33D0)
#define OJMONJELOAF_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xC7C3460)
#define OJMONJELOAF_CKGABGLKGAF_OFFSET UNITYSDK_OFFSET(0xC7C2F50)
#define OJMONJELOAF_CLEAR_OFFSET UNITYSDK_OFFSET(0xC7C3230)
#define OJMONJELOAF_CTOR_OFFSET UNITYSDK_OFFSET(0xC7C3480)
#define OJMONJELOAF_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xC7C2FB0)
#define OJMONJELOAF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC7C3280)
#define OJMONJELOAF_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xC7C3410)
#define OJMONJELOAF_LNNLMNBOPCB_OFFSET UNITYSDK_OFFSET(0xC7C3390)
#define OJMONJELOAF_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xC7C3350)
#define OJMONJELOAF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC7C2E50)

inline static constexpr unsigned int OJMONJELOAF_TypeDefinitionIndex = 55256;

	class OJMONJELOAF : public ::System::Object
	{
	public:
		::System::Action_1<::DIBPAJHLFIF*>* HFNCIGJGPFM; // 0x10
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
