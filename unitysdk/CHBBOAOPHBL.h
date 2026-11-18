#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CHBBOAOPHBL_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1479C960)
#define CHBBOAOPHBL_HDBJAPAOOAP_OFFSET UNITYSDK_OFFSET(0x1479BF80)
#define CHBBOAOPHBL_NEEBILLCOPE_OFFSET UNITYSDK_OFFSET(0x1479C090)
#define CHBBOAOPHBL_NLEKAKLKPMI_OFFSET UNITYSDK_OFFSET(0x1479C830)
#define CHBBOAOPHBL_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1479BDC0)
#define CHBBOAOPHBL_PONLMOGKNJN_OFFSET UNITYSDK_OFFSET(0x1479C460)
#define CHBBOAOPHBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1479BE60)

inline static constexpr unsigned int CHBBOAOPHBL_TypeDefinitionIndex = 84666;

class CHBBOAOPHBL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* PBPGPCHCMOE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBBOAOPHBL__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBBOAOPHBL_ONRECYCLE_OFFSET))(this);
	}

	::System::Void HDBJAPAOOAP(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CHBBOAOPHBL_HDBJAPAOOAP_OFFSET))(this, HPADNAEINPK);
	}

	::System::Void NEEBILLCOPE(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHBBOAOPHBL_NEEBILLCOPE_OFFSET))(this, NJOAJLDJCCJ);
	}

	::System::Void PONLMOGKNJN(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CHBBOAOPHBL_PONLMOGKNJN_OFFSET))(this, NJOAJLDJCCJ, KMOHKCADPNA);
	}

	::System::Void NLEKAKLKPMI(::MoleMole::EntityHandle HPADNAEINPK, ::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CHBBOAOPHBL_NLEKAKLKPMI_OFFSET))(this, HPADNAEINPK, KMOHKCADPNA);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBBOAOPHBL_ANEOCOIFDDJ_OFFSET))(this);
	}
};
