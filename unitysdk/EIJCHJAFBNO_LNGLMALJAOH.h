#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define EIJCHJAFBNO_LNGLMALJAOH_FOPEDIIMBEJ_OFFSET UNITYSDK_OFFSET(0x148F52C0)
#define EIJCHJAFBNO_LNGLMALJAOH__CTOR_OFFSET UNITYSDK_OFFSET(0x148F52B0)

inline static constexpr unsigned int EIJCHJAFBNO_LNGLMALJAOH_TypeDefinitionIndex = 62213;

class EIJCHJAFBNO_LNGLMALJAOH : public ::System::Object
{
public:
	::UnityEngine::Vector3 HKCKCIHAMFG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_LNGLMALJAOH__CTOR_OFFSET))(this);
	}

	::System::Int32 FOPEDIIMBEJ(::UnityEngine::RaycastHit ABCIAIBKLDO, ::UnityEngine::RaycastHit PLPNOMAKIKL)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + EIJCHJAFBNO_LNGLMALJAOH_FOPEDIIMBEJ_OFFSET))(this, ABCIAIBKLDO, PLPNOMAKIKL);
	}
};
