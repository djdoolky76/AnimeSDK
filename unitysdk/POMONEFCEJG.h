#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKOMBDCNEHB.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

namespace UnityEngine { class Transform; }

#define POMONEFCEJG_EJBODIFHFJC_OFFSET UNITYSDK_OFFSET(0x1CB5C080)
#define POMONEFCEJG_OAOOBACHAAD_OFFSET UNITYSDK_OFFSET(0x1CB5C1F0)
#define POMONEFCEJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5C030)

inline static constexpr unsigned int POMONEFCEJG_TypeDefinitionIndex = 58125;

class POMONEFCEJG : public ::CKOMBDCNEHB
{
public:
	::System::Void _ctor(::UnityEngine::Transform* LFJAEIBHLOP, ::UnityEngine::Transform* NCDCDPOBDHF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + POMONEFCEJG__CTOR_OFFSET))(this, LFJAEIBHLOP, NCDCDPOBDHF);
	}

	::System::Void EJBODIFHFJC(::Share::ENotificationBadgeType OMCKIJDHGOF, ::NodeGraph::VariantUnion FKINMDOHGAN)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + POMONEFCEJG_EJBODIFHFJC_OFFSET))(this, OMCKIJDHGOF, FKINMDOHGAN);
	}

	::System::Void OAOOBACHAAD(::Share::ENotificationBadgeType OMCKIJDHGOF)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + POMONEFCEJG_OAOOBACHAAD_OFFSET))(this, OMCKIJDHGOF);
	}
};
