#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapPageController; }
namespace UnityEngine { class RectTransform; }

#define IIFDFDJDGOK_PFKDAFFKFAG_GIBDJDDKCJB_OFFSET UNITYSDK_OFFSET(0x153AB0B0)
#define IIFDFDJDGOK_PFKDAFFKFAG_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x153AB190)
#define IIFDFDJDGOK_PFKDAFFKFAG__CTOR_OFFSET UNITYSDK_OFFSET(0x153AB0A0)

inline static constexpr unsigned int IIFDFDJDGOK_PFKDAFFKFAG_TypeDefinitionIndex = 58100;

class IIFDFDJDGOK_PFKDAFFKFAG : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapPageController* LGBHOFGBGHC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_PFKDAFFKFAG__CTOR_OFFSET))(this);
	}

	::System::Boolean GIBDJDDKCJB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_PFKDAFFKFAG_GIBDJDDKCJB_OFFSET))(this);
	}

	::UnityEngine::RectTransform* LJHDGNAEDIC()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFDFDJDGOK_PFKDAFFKFAG_LJHDGNAEDIC_OFFSET))(this);
	}
};
