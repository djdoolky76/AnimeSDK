#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMCNBKCEHAF_Reason.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Object.h"
class KMCNBKCEHAF;

#define KMCNBKCEHAF_CLEAR_OFFSET UNITYSDK_OFFSET(0xB539070)
#define KMCNBKCEHAF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5391F0)
#define KMCNBKCEHAF_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0xB5390B0)
#define KMCNBKCEHAF_GLPAKPOEBHL_OFFSET UNITYSDK_OFFSET(0xB5391A0)
#define KMCNBKCEHAF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB539020)
#define KMCNBKCEHAF_ONALLOC_OFFSET UNITYSDK_OFFSET(0xB5390D0)
#define KMCNBKCEHAF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xB539150)
#define KMCNBKCEHAF_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0xB5390C0)

inline static constexpr unsigned int KMCNBKCEHAF_TypeDefinitionIndex = 60505;

	class KMCNBKCEHAF : public ::System::Object
	{
	public:
		::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x10
		::KMCNBKCEHAF_Reason ADBEKHIIGJK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCNBKCEHAF_CTOR_OFFSET))(this);
		}

		::KMCNBKCEHAF* KPJGDHLENIP(::KMCNBKCEHAF_Reason a1)
		{
			return ((::KMCNBKCEHAF*(*)(::PVOID, ::KMCNBKCEHAF_Reason))((::PBYTE)hIl2Cpp + KMCNBKCEHAF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCNBKCEHAF_CLEAR_OFFSET))(this);
		}

		::RPG::AutoReleaseReferenceState get_ReferenceState()
		{
			return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCNBKCEHAF_GET_REFERENCESTATE_OFFSET))(this);
		}

		::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + KMCNBKCEHAF_SET_REFERENCESTATE_OFFSET))(this, a1);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCNBKCEHAF_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCNBKCEHAF_ONRECYCLE_OFFSET))(this);
		}

		::KMCNBKCEHAF* GLPAKPOEBHL()
		{
			return ((::KMCNBKCEHAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCNBKCEHAF_GLPAKPOEBHL_OFFSET))(this);
		}

	};
