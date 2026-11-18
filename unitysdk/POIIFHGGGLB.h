#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssMapIconBaseController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define POIIFHGGGLB_MCNADLFHADK_OFFSET UNITYSDK_OFFSET(0x1A8052F0)
#define POIIFHGGGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8052E0)

inline static constexpr unsigned int POIIFHGGGLB_TypeDefinitionIndex = 71285;

class POIIFHGGGLB : public ::System::Object
{
public:
	::UnityEngine::GameObject* LNFCNHNJLEF; // 0x10
	::MoleMole::UIAbyssMapIconBaseController* ENDIMADAPJK; // 0x18
	::MoleMole::Vector2Int ILOJFPNKJII; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIFHGGGLB__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* MCNADLFHADK()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + POIIFHGGGLB_MCNADLFHADK_OFFSET))(this);
	}
};
