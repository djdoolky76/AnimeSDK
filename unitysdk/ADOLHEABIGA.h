#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMPPLMMMPOA.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEffectPluginLaserLineRenderers; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define ADOLHEABIGA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x154E3F40)
#define ADOLHEABIGA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x154E3260)
#define ADOLHEABIGA_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x154E36A0)
#define ADOLHEABIGA_GLOGAODAKCB_OFFSET UNITYSDK_OFFSET(0x154E3860)
#define ADOLHEABIGA_IKKPMKEKEFN_OFFSET UNITYSDK_OFFSET(0x154E3990)
#define ADOLHEABIGA_IMNBLBOEGHE_OFFSET UNITYSDK_OFFSET(0x154E3100)
#define ADOLHEABIGA_KHNFLEDLOIH_OFFSET UNITYSDK_OFFSET(0x154E3540)
#define ADOLHEABIGA_KLHEDKJKJMG_OFFSET UNITYSDK_OFFSET(0x154E3AE0)
#define ADOLHEABIGA_LMBJEGGABFJ_OFFSET UNITYSDK_OFFSET(0x154E3160)
#define ADOLHEABIGA_OIGHANAJEOP_OFFSET UNITYSDK_OFFSET(0x154E3C40)
#define ADOLHEABIGA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x154E3110)
#define ADOLHEABIGA_POEIOKIDPHC_OFFSET UNITYSDK_OFFSET(0x154E3850)
#define ADOLHEABIGA__CTOR_OFFSET UNITYSDK_OFFSET(0x154E3840)

inline static constexpr unsigned int ADOLHEABIGA_TypeDefinitionIndex = 86499;

class ADOLHEABIGA : public ::System::Object
{
public:
	::UnityEngine::Animation* OBNLBMABFPF; // 0x10
	::MoleMole::EntityHandle BHMLIFIKCEL; // 0x18
	::System::String* INLMEGECHHK; // 0x28
	::UnityEngine::Transform* HAPBINIKPFM; // 0x30
	::UnityEngine::Transform* IFEJGPONGFN; // 0x38
	::MoleMole::MonoEffectPluginLaserLineRenderers* HLEDCPCPNLI; // 0x40
	::MoleMole::EntityHandle KEHECMCDLFC; // 0x48
	::MoleMole::EntityHandle PBJNMLHJDBD; // 0x58
	::System::UInt32 _IGHCJKPIHOJ_k__BackingField; // 0x68
	::System::Boolean ALHAGFDNKHE; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA__CTOR_OFFSET))(this);
	}

	::System::UInt32 IMNBLBOEGHE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA_IMNBLBOEGHE_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void GIAOBHOJCDP(::GMPPLMMMPOA KAMJLKGLFDB)
	{
		return ((::System::Void(*)(::PVOID, ::GMPPLMMMPOA))((::PBYTE)hIl2Cpp + ADOLHEABIGA_GIAOBHOJCDP_OFFSET))(this, KAMJLKGLFDB);
	}

	::System::Void LMBJEGGABFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA_LMBJEGGABFJ_OFFSET))(this);
	}

	::System::Void POEIOKIDPHC(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADOLHEABIGA_POEIOKIDPHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GLOGAODAKCB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA_GLOGAODAKCB_OFFSET))(this);
	}

	::System::Void KHNFLEDLOIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA_KHNFLEDLOIH_OFFSET))(this);
	}

	::System::Void KLHEDKJKJMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA_KLHEDKJKJMG_OFFSET))(this);
	}

	::System::String* IKKPMKEKEFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADOLHEABIGA_IKKPMKEKEFN_OFFSET))(this);
	}

	::System::Void OIGHANAJEOP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ADOLHEABIGA_OIGHANAJEOP_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::EntityHandle KHGFAKJKDGG, ::MoleMole::EntityHandle HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + ADOLHEABIGA_BBOMJDBNHIC_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD);
	}
};
