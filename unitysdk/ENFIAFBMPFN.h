#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ENFIAFBMPFN_CFDLHCMPAJK_OFFSET UNITYSDK_OFFSET(0x1712FD60)

inline static constexpr unsigned int ENFIAFBMPFN_TypeDefinitionIndex = 50992;

class ENFIAFBMPFN : public ::System::Object
{
public:
	static ::System::Single CFDLHCMPAJK(::UnityEngine::Vector3 POKOCIIJGGK, ::UnityEngine::Vector3 KMJGHDMJAPH, ::UnityEngine::Vector3 HMHGOFMFIKJ, ::UnityEngine::Vector3 GGLHHPABEHO, ::System::Single FBFFJJNMEPH, ::System::Single DHONHJDJFOD)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENFIAFBMPFN_CFDLHCMPAJK_OFFSET))(POKOCIIJGGK, KMJGHDMJAPH, HMHGOFMFIKJ, GGLHHPABEHO, FBFFJJNMEPH, DHONHJDJFOD);
	}
};
