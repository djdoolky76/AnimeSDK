#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config { class ConfigPatrolPointSet; }
namespace MoleMole::Config { class StreamingGamePatrolMoveTrait; }
namespace System { class String; }

#define HPIHEMJEJEM_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16559010)
#define HPIHEMJEJEM_ILFKFNDIMDH_OFFSET UNITYSDK_OFFSET(0x16558F80)
#define HPIHEMJEJEM_MACNMGKNMCD_OFFSET UNITYSDK_OFFSET(0x16559030)
#define HPIHEMJEJEM_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16558EF0)
#define HPIHEMJEJEM_PEFOIAHFMFO_OFFSET UNITYSDK_OFFSET(0x16559020)
#define HPIHEMJEJEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16558F40)

inline static constexpr unsigned int HPIHEMJEJEM_TypeDefinitionIndex = 79696;

class HPIHEMJEJEM
{
public:
	::MoleMole::Config::StreamingGamePatrolMoveTrait* _GGJOMONAEMK_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIHEMJEJEM__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIHEMJEJEM_ONRECYCLE_OFFSET))(this);
	}

	::MoleMole::Config::ConfigPatrolPointSet* ILFKFNDIMDH(::System::String* GNMEMKLPMCA)
	{
		return ((::MoleMole::Config::ConfigPatrolPointSet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPIHEMJEJEM_ILFKFNDIMDH_OFFSET))(this, GNMEMKLPMCA);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIHEMJEJEM_ANEOCOIFDDJ_OFFSET))(this);
	}

	::MoleMole::Config::StreamingGamePatrolMoveTrait* PEFOIAHFMFO()
	{
		return ((::MoleMole::Config::StreamingGamePatrolMoveTrait*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIHEMJEJEM_PEFOIAHFMFO_OFFSET))(this);
	}

	::System::Void MACNMGKNMCD(::MoleMole::Config::StreamingGamePatrolMoveTrait* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StreamingGamePatrolMoveTrait*))((::PBYTE)hIl2Cpp + HPIHEMJEJEM_MACNMGKNMCD_OFFSET))(this, EGEGIMGMJHN);
	}
};
