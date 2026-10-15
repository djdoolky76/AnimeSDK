#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
class HPDIGIKALDD;

#define HPDIGIKALDD_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC2470)
#define HPDIGIKALDD_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x15DC2350)
#define HPDIGIKALDD_GLPAKPOEBHL_OFFSET UNITYSDK_OFFSET(0x15DC2420)
#define HPDIGIKALDD_ONALLOC_OFFSET UNITYSDK_OFFSET(0x15DC2370)
#define HPDIGIKALDD_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15DC23D0)
#define HPDIGIKALDD_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x15DC2360)

inline static constexpr unsigned int HPDIGIKALDD_TypeDefinitionIndex = 57665;

	class HPDIGIKALDD
	{
	public:
		::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDIGIKALDD_CTOR_OFFSET))(this);
		}

		::RPG::AutoReleaseReferenceState get_ReferenceState()
		{
			return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDIGIKALDD_GET_REFERENCESTATE_OFFSET))(this);
		}

		::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + HPDIGIKALDD_SET_REFERENCESTATE_OFFSET))(this, a1);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDIGIKALDD_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDIGIKALDD_ONRECYCLE_OFFSET))(this);
		}

		::HPDIGIKALDD* GLPAKPOEBHL()
		{
			return ((::HPDIGIKALDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPDIGIKALDD_GLPAKPOEBHL_OFFSET))(this);
		}

	};
