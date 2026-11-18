#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

#define AAEMKJBMJAB_HPMPKGALCDE_BJDAPHCBGJC_OFFSET UNITYSDK_OFFSET(0x12622990)
#define AAEMKJBMJAB_HPMPKGALCDE__CTOR_OFFSET UNITYSDK_OFFSET(0x12622980)

inline static constexpr unsigned int AAEMKJBMJAB_HPMPKGALCDE_TypeDefinitionIndex = 75784;

class AAEMKJBMJAB_HPMPKGALCDE : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEMKJBMJAB_HPMPKGALCDE__CTOR_OFFSET))(this);
	}

	::System::Void BJDAPHCBGJC(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AAEMKJBMJAB_HPMPKGALCDE_BJDAPHCBGJC_OFFSET))(this, NJOAJLDJCCJ);
	}
};
