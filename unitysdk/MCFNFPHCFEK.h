#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MCFNFPHCFEK_DBFAPHAAEIH_OFFSET UNITYSDK_OFFSET(0x75E870)
#define MCFNFPHCFEK_EMLDIHEBNBO_OFFSET UNITYSDK_OFFSET(0x75E850)
#define MCFNFPHCFEK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x75E840)
#define MCFNFPHCFEK_PJDODFDBJAB_OFFSET UNITYSDK_OFFSET(0x75E860)
#define MCFNFPHCFEK__CCTOR_OFFSET UNITYSDK_OFFSET(0x156940D0)
#define MCFNFPHCFEK__CTOR_OFFSET UNITYSDK_OFFSET(0x75E7D0)

inline static constexpr unsigned int MCFNFPHCFEK_TypeDefinitionIndex = 66715;

struct alignas(8) MCFNFPHCFEK
{
	static ::System::Int32* StaticGet_MEKAFGFKKJD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MCFNFPHCFEK_TypeDefinitionIndex)->GetStaticField(0x13830);
	}
	// static const ::System::String* ACLDNEPOAOH; // 0x0
	::UnityEngine::Vector4 DFKMFKIIALO; // 0x10
	::UnityEngine::MaterialPropertyBlock* HGDFLAEBCGA; // 0x20

	::System::Void _ctor(::UnityEngine::Vector4 JPOHIDLDKEN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MCFNFPHCFEK__CTOR_OFFSET))(this, JPOHIDLDKEN);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCFNFPHCFEK__CCTOR_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFNFPHCFEK_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void EMLDIHEBNBO(::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MCFNFPHCFEK_EMLDIHEBNBO_OFFSET))(this, OCFHGOGFGPE);
	}

	::System::Void PJDODFDBJAB(::System::Single MHBEIGINBBB, ::System::Single AFIDLDJAEOH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MCFNFPHCFEK_PJDODFDBJAB_OFFSET))(this, MHBEIGINBBB, AFIDLDJAEOH, PMNLNNGEIFM);
	}

	::System::Void DBFAPHAAEIH(::UnityEngine::Renderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MCFNFPHCFEK_DBFAPHAAEIH_OFFSET))(this, OCFHGOGFGPE);
	}
};
