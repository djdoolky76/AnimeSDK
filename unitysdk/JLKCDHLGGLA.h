#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHFDHMBEGJE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class GEIHCPAOKKK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define JLKCDHLGGLA_CHMPFBGIIOH_OFFSET UNITYSDK_OFFSET(0x1A47C790)
#define JLKCDHLGGLA_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1A47CC80)
#define JLKCDHLGGLA_DNOINMOMLIP_OFFSET UNITYSDK_OFFSET(0x1A47C500)
#define JLKCDHLGGLA_EEJAPBJPIEI_OFFSET UNITYSDK_OFFSET(0x1A47CBF0)
#define JLKCDHLGGLA_LBCBMNCKDPG_OFFSET UNITYSDK_OFFSET(0x1A47CE00)
#define JLKCDHLGGLA_MMGMBDMNCLF_OFFSET UNITYSDK_OFFSET(0x1A47C440)
#define JLKCDHLGGLA_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x1A47CD60)
#define JLKCDHLGGLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47C3F0)

inline static constexpr unsigned int JLKCDHLGGLA_TypeDefinitionIndex = 41698;

class JLKCDHLGGLA : public ::CHFDHMBEGJE
{
public:
	::UnityEngine::Transform* FPBNHPCLHMI; // 0x50
	::System::String* IDHPNLMLCIM; // 0x58
	::GEIHCPAOKKK* KNMGIKPJMDF; // 0x60
	::MoleMole::Battle::Entity* DAPAPADOHFJ; // 0x68
	::UnityEngine::Vector3 CHEDDEKPKNF; // 0x70
	::UnityEngine::Vector4 NEFLELAEECL; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCDHLGGLA__CTOR_OFFSET))(this);
	}

	::System::Void MMGMBDMNCLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCDHLGGLA_MMGMBDMNCLF_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLKCDHLGGLA_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLKCDHLGGLA_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void EEJAPBJPIEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCDHLGGLA_EEJAPBJPIEI_OFFSET))(this);
	}

	::System::Void DNOINMOMLIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCDHLGGLA_DNOINMOMLIP_OFFSET))(this);
	}

	::System::Void LBCBMNCKDPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCDHLGGLA_LBCBMNCKDPG_OFFSET))(this);
	}

	::System::Boolean CHMPFBGIIOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCDHLGGLA_CHMPFBGIIOH_OFFSET))(this);
	}
};
