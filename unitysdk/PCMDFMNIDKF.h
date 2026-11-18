#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CMANOPENPAJ;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define PCMDFMNIDKF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15FFFA20)
#define PCMDFMNIDKF_FKDPMFKCCOI_OFFSET UNITYSDK_OFFSET(0x15FFFFE0)
#define PCMDFMNIDKF_GBIGECMKDCG_OFFSET UNITYSDK_OFFSET(0x16000600)
#define PCMDFMNIDKF_JBMJHFGBDMP_OFFSET UNITYSDK_OFFSET(0x16000200)
#define PCMDFMNIDKF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x15FFFC80)
#define PCMDFMNIDKF_PADCDEJIMFE_OFFSET UNITYSDK_OFFSET(0x16000C20)
#define PCMDFMNIDKF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFF900)

inline static constexpr unsigned int PCMDFMNIDKF_TypeDefinitionIndex = 74197;

class PCMDFMNIDKF : public ::System::Object
{
public:
	::CMANOPENPAJ* ABPNANPGGFM; // 0x10
	::MoleMole::MonoConfigurableCollider* GCHEPBAGOBO; // 0x18
	::CMANOPENPAJ* FDMMEFBDFFL; // 0x20
	::UnityEngine::Vector3 MEKAFGFKKJD; // 0x28
	::System::Boolean DGGENNIJLNP; // 0x34
	::System::Boolean IDLEGCJFOJM; // 0x35
	::System::Byte _padding0[0x2];
	::ABLJDBEJNNI JJPEDAMOOLA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMDFMNIDKF__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::MonoConfigurableCollider* EHHHMFKHNAI, ::ABLJDBEJNNI OKAGHANMBPG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoConfigurableCollider*, ::ABLJDBEJNNI))((::PBYTE)hIl2Cpp + PCMDFMNIDKF_BBOMJDBNHIC_OFFSET))(this, EHHHMFKHNAI, OKAGHANMBPG);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMDFMNIDKF_NPOLNFDBOOD_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* FKDPMFKCCOI(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + PCMDFMNIDKF_FKDPMFKCCOI_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void JBMJHFGBDMP(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + PCMDFMNIDKF_JBMJHFGBDMP_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean GBIGECMKDCG(::UnityEngine::GameObject* NJOAJLDJCCJ, ::ABLJDBEJNNI GEJCKFFFKCL)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::ABLJDBEJNNI))((::PBYTE)hIl2Cpp + PCMDFMNIDKF_GBIGECMKDCG_OFFSET))(this, NJOAJLDJCCJ, GEJCKFFFKCL);
	}

	::System::Void PADCDEJIMFE(::UnityEngine::Collider* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + PCMDFMNIDKF_PADCDEJIMFE_OFFSET))(this, LIBPKNHDIGP);
	}
};
