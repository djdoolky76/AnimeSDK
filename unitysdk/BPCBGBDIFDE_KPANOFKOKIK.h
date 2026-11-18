#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE;
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect_DecalAreaData; }

#define BPCBGBDIFDE_KPANOFKOKIK_ALLOJACEMFH_OFFSET UNITYSDK_OFFSET(0x18DB14D0)
#define BPCBGBDIFDE_KPANOFKOKIK__CTOR_OFFSET UNITYSDK_OFFSET(0x18DB14C0)

inline static constexpr unsigned int BPCBGBDIFDE_KPANOFKOKIK_TypeDefinitionIndex = 78659;

class BPCBGBDIFDE_KPANOFKOKIK : public ::System::Object
{
public:
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x10
	::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* OFIGCGFLFHK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KPANOFKOKIK__CTOR_OFFSET))(this);
	}

	::System::Void ALLOJACEMFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_KPANOFKOKIK_ALLOJACEMFH_OFFSET))(this);
	}
};
