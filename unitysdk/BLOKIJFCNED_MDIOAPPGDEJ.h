#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BLOKIJFCNED_MDIOAPPGDEJ_DNLNGONAMMI_OFFSET UNITYSDK_OFFSET(0x1151B150)
#define BLOKIJFCNED_MDIOAPPGDEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1151B140)

inline static constexpr unsigned int BLOKIJFCNED_MDIOAPPGDEJ_TypeDefinitionIndex = 46667;

class BLOKIJFCNED_MDIOAPPGDEJ : public ::System::Object
{
public:
	::MoleMole::EntityHandle KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOKIJFCNED_MDIOAPPGDEJ__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 DNLNGONAMMI()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOKIJFCNED_MDIOAPPGDEJ_DNLNGONAMMI_OFFSET))(this);
	}
};
