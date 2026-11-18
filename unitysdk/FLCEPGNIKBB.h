#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKCKBEGCCM.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define FLCEPGNIKBB_DBFAPHAAEIH_OFFSET UNITYSDK_OFFSET(0x7B0450)
#define FLCEPGNIKBB_EMLDIHEBNBO_OFFSET UNITYSDK_OFFSET(0x7B0460)
#define FLCEPGNIKBB_GFJCMBCKBCM_OFFSET UNITYSDK_OFFSET(0x179B37F0)
#define FLCEPGNIKBB_PJDODFDBJAB_OFFSET UNITYSDK_OFFSET(0x7B0470)
#define FLCEPGNIKBB__CCTOR_OFFSET UNITYSDK_OFFSET(0x179B3370)

inline static constexpr unsigned int FLCEPGNIKBB_TypeDefinitionIndex = 67017;

struct alignas(4) FLCEPGNIKBB
{
	static ::System::Int32* StaticGet_NKPCKALFOGG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FLCEPGNIKBB_TypeDefinitionIndex)->GetStaticField(0xE280);
	}
	// static const ::System::String* ACLDNEPOAOH; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0xEB; // 0x0
	::MCKCKBEGCCM LFOEBECIIGM; // 0x10
	::UnityEngine::Vector4 DFKMFKIIALO; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLCEPGNIKBB__CCTOR_OFFSET))();
	}

	::System::Void DBFAPHAAEIH(::UnityEngine::Renderer* OCFHGOGFGPE, ::UnityEngine::MaterialPropertyBlock* GDHJCAIOBHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + FLCEPGNIKBB_DBFAPHAAEIH_OFFSET))(this, OCFHGOGFGPE, GDHJCAIOBHN);
	}

	::System::Void EMLDIHEBNBO(::UnityEngine::Renderer* OCFHGOGFGPE, ::UnityEngine::MaterialPropertyBlock* GDHJCAIOBHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + FLCEPGNIKBB_EMLDIHEBNBO_OFFSET))(this, OCFHGOGFGPE, GDHJCAIOBHN);
	}

	::System::Void PJDODFDBJAB(::System::Single MHBEIGINBBB, ::System::Single AFIDLDJAEOH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLCEPGNIKBB_PJDODFDBJAB_OFFSET))(this, MHBEIGINBBB, AFIDLDJAEOH, PMNLNNGEIFM);
	}

	static ::MCKCKBEGCCM GFJCMBCKBCM(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA)
	{
		return ((::MCKCKBEGCCM(*)(::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + FLCEPGNIKBB_GFJCMBCKBCM_OFFSET))(AEPONOJONAA);
	}
};
