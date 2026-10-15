#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMMIDDEFOAA.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"

#define FICDDBLAGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1579BDF0)
#define FICDDBLAGFJ_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0x1579BBB0)
#define FICDDBLAGFJ_IMNDAPABBAG_OFFSET UNITYSDK_OFFSET(0x1579BC90)
#define FICDDBLAGFJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1579BA60)
#define FICDDBLAGFJ_JMLPOIKJBFM_OFFSET UNITYSDK_OFFSET(0x1579BAF0)
#define FICDDBLAGFJ_MNKMIOIJPCH_OFFSET UNITYSDK_OFFSET(0x1579BCE0)
#define FICDDBLAGFJ_PLHDKAPNBCG_OFFSET UNITYSDK_OFFSET(0x1579BD70)

	class FICDDBLAGFJ : public ::LMMIDDEFOAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICDDBLAGFJ_CTOR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICDDBLAGFJ_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void IJEPAJIMDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICDDBLAGFJ_IJEPAJIMDPA_OFFSET))(this);
		}

		::System::Void IMNDAPABBAG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FICDDBLAGFJ_IMNDAPABBAG_OFFSET))(this, a1);
		}

		::System::Void MNKMIOIJPCH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FICDDBLAGFJ_MNKMIOIJPCH_OFFSET))(this, a1);
		}

		::System::Void PLHDKAPNBCG(::RPG::GameCore::TimeRewindState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState, ::System::Boolean))((::PBYTE)hIl2Cpp + FICDDBLAGFJ_PLHDKAPNBCG_OFFSET))(this, a1, a2);
		}

		::System::Void JMLPOIKJBFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICDDBLAGFJ_JMLPOIKJBFM_OFFSET))(this);
		}

	};
