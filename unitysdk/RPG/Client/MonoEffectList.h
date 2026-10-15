#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
namespace RPG::Client { class MonoEffectList; }

#define RPG_CLIENT_MONOEFFECTLIST_CTOR_OFFSET UNITYSDK_OFFSET(0xD7AA780)
#define RPG_CLIENT_MONOEFFECTLIST_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0xD7AA640)
#define RPG_CLIENT_MONOEFFECTLIST_MARKMANUALRELEASE_OFFSET UNITYSDK_OFFSET(0xD7AA730)
#define RPG_CLIENT_MONOEFFECTLIST_ONALLOC_OFFSET UNITYSDK_OFFSET(0xD7AA660)
#define RPG_CLIENT_MONOEFFECTLIST_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xD7AA6E0)
#define RPG_CLIENT_MONOEFFECTLIST_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0xD7AA650)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectList_TypeDefinitionIndex = 69923;

	class MonoEffectList
	{
	public:
		::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLIST_CTOR_OFFSET))(this);
		}

		::RPG::AutoReleaseReferenceState get_ReferenceState()
		{
			return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLIST_GET_REFERENCESTATE_OFFSET))(this);
		}

		::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLIST_SET_REFERENCESTATE_OFFSET))(this, a1);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLIST_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLIST_ONRECYCLE_OFFSET))(this);
		}

		::RPG::Client::MonoEffectList* MarkManualRelease()
		{
			return ((::RPG::Client::MonoEffectList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLIST_MARKMANUALRELEASE_OFFSET))(this);
		}

	};
}
