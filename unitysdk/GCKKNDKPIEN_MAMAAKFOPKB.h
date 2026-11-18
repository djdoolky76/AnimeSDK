#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define GCKKNDKPIEN_MAMAAKFOPKB_BFOJKLIEDPC_OFFSET UNITYSDK_OFFSET(0x15CD23D0)
#define GCKKNDKPIEN_MAMAAKFOPKB_OBDGDBDMAEN_OFFSET UNITYSDK_OFFSET(0x15CD23C0)
#define GCKKNDKPIEN_MAMAAKFOPKB__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD23B0)

inline static constexpr unsigned int GCKKNDKPIEN_MAMAAKFOPKB_TypeDefinitionIndex = 69794;

class GCKKNDKPIEN_MAMAAKFOPKB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* DJMEFDIHNDO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_MAMAAKFOPKB__CTOR_OFFSET))(this);
	}

	::System::Void OBDGDBDMAEN(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_MAMAAKFOPKB_OBDGDBDMAEN_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void BFOJKLIEDPC(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GCKKNDKPIEN_MAMAAKFOPKB_BFOJKLIEDPC_OFFSET))(this, LIBPKNHDIGP);
	}
};
