#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEC0E6D302F81A77.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Tilemaps { class Tilemap; }

#define B731D5C2F9CCC74F_E11AB29C2438052E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B731D5C2F9CCC74F_E11AB29C2438052E_TypeDefinitionIndex = 18138;

class B731D5C2F9CCC74F_E11AB29C2438052E : public ::FEC0E6D302F81A77
{
public:
	::UnityEngine::Tilemaps::Tilemap* FEB976A76AA4247B; // 0x18
	::UnityEngine::Transform* B2A0B12783A9A3A2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B731D5C2F9CCC74F_E11AB29C2438052E__CTOR_OFFSET))(this);
	}
};
