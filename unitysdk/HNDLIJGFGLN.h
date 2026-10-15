#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
class HNDLIJGFGLN;

#define HNDLIJGFGLN_CTOR_OFFSET UNITYSDK_OFFSET(0x15D91970)
#define HNDLIJGFGLN_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x15D91850)
#define HNDLIJGFGLN_GLPAKPOEBHL_OFFSET UNITYSDK_OFFSET(0x15D91920)
#define HNDLIJGFGLN_ONALLOC_OFFSET UNITYSDK_OFFSET(0x15D91870)
#define HNDLIJGFGLN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x15D918D0)
#define HNDLIJGFGLN_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0x15D91860)

	class HNDLIJGFGLN
	{
	public:
		::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLIJGFGLN_CTOR_OFFSET))(this);
		}

		::RPG::AutoReleaseReferenceState get_ReferenceState()
		{
			return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLIJGFGLN_GET_REFERENCESTATE_OFFSET))(this);
		}

		::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + HNDLIJGFGLN_SET_REFERENCESTATE_OFFSET))(this, a1);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLIJGFGLN_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLIJGFGLN_ONRECYCLE_OFFSET))(this);
		}

		::HNDLIJGFGLN* GLPAKPOEBHL()
		{
			return ((::HNDLIJGFGLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDLIJGFGLN_GLPAKPOEBHL_OFFSET))(this);
		}

	};
