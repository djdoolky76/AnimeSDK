#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKOMBDCNEHB.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

namespace UnityEngine { class Transform; }

#define HBJOCDFJNCI_EJBODIFHFJC_OFFSET UNITYSDK_OFFSET(0x14D0B4F0)
#define HBJOCDFJNCI_OAOOBACHAAD_OFFSET UNITYSDK_OFFSET(0x14D0B3D0)
#define HBJOCDFJNCI__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0B380)

inline static constexpr unsigned int HBJOCDFJNCI_TypeDefinitionIndex = 45658;

class HBJOCDFJNCI : public ::CKOMBDCNEHB
{
public:
	::System::Void _ctor(::UnityEngine::Transform* LFJAEIBHLOP, ::UnityEngine::Transform* NCDCDPOBDHF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HBJOCDFJNCI__CTOR_OFFSET))(this, LFJAEIBHLOP, NCDCDPOBDHF);
	}

	::System::Void OAOOBACHAAD(::Share::ENotificationBadgeType OMCKIJDHGOF)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + HBJOCDFJNCI_OAOOBACHAAD_OFFSET))(this, OMCKIJDHGOF);
	}

	::System::Void EJBODIFHFJC(::Share::ENotificationBadgeType OMCKIJDHGOF, ::NodeGraph::VariantUnion FKINMDOHGAN)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + HBJOCDFJNCI_EJBODIFHFJC_OFFSET))(this, OMCKIJDHGOF, FKINMDOHGAN);
	}
};
