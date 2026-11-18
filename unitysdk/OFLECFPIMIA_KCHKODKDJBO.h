#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define OFLECFPIMIA_KCHKODKDJBO_EFHEJAKENMA_OFFSET UNITYSDK_OFFSET(0x1B77E3D0)
#define OFLECFPIMIA_KCHKODKDJBO_JAABKCBLGIO_OFFSET UNITYSDK_OFFSET(0x1B77E320)
#define OFLECFPIMIA_KCHKODKDJBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77E310)

inline static constexpr unsigned int OFLECFPIMIA_KCHKODKDJBO_TypeDefinitionIndex = 88016;

class OFLECFPIMIA_KCHKODKDJBO : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KCHKODKDJBO__CTOR_OFFSET))(this);
	}

	::System::Void JAABKCBLGIO(::System::Boolean DECIDLELLCP, ::MoleMole::Battle::Entity* PPEFBJILAKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KCHKODKDJBO_JAABKCBLGIO_OFFSET))(this, DECIDLELLCP, PPEFBJILAKI);
	}

	::System::Void EFHEJAKENMA(::MoleMole::Battle::Entity* PPEFBJILAKI, ::UnityEngine::Collider* GACDOMHGKFG, ::System::Boolean DECIDLELLCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KCHKODKDJBO_EFHEJAKENMA_OFFSET))(this, PPEFBJILAKI, GACDOMHGKFG, DECIDLELLCP);
	}
};
