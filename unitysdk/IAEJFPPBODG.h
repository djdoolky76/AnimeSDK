#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IANAIPMNOBC;
class JOAIDKJJNNC;

#define IAEJFPPBODG_CKKKCMECCNA_OFFSET UNITYSDK_OFFSET(0x16A8C460)
#define IAEJFPPBODG_GDDOCNPMBDO_OFFSET UNITYSDK_OFFSET(0x16A8C400)
#define IAEJFPPBODG_IGGNMANJPHA_OFFSET UNITYSDK_OFFSET(0x16A8C450)
#define IAEJFPPBODG_LNJPJDGINFD_OFFSET UNITYSDK_OFFSET(0x16A8C630)
#define IAEJFPPBODG_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x16A8C940)
#define IAEJFPPBODG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16A8C740)
#define IAEJFPPBODG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8C2A0)

inline static constexpr unsigned int IAEJFPPBODG_TypeDefinitionIndex = 75649;

class IAEJFPPBODG : public ::System::Object
{
public:
	::IANAIPMNOBC* OKKDDHJEDGJ; // 0x10
	::MoleMole::EntityHandle FEFFFPGCIIO; // 0x18
	::JOAIDKJJNNC* EFHOFEEGHKC; // 0x28
	::System::UInt32 _MPMFPODFDNK_k__BackingField; // 0x30

	::System::Void _ctor(::IANAIPMNOBC* HODAIDNDKHD, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::IANAIPMNOBC*, ::System::UInt32))((::PBYTE)hIl2Cpp + IAEJFPPBODG__CTOR_OFFSET))(this, HODAIDNDKHD, BKLGNCBNEGM);
	}

	::System::Void IGGNMANJPHA(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAEJFPPBODG_IGGNMANJPHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GDDOCNPMBDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEJFPPBODG_GDDOCNPMBDO_OFFSET))(this);
	}

	::System::Void CKKKCMECCNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEJFPPBODG_CKKKCMECCNA_OFFSET))(this);
	}

	::UnityEngine::Vector3 LNJPJDGINFD(::System::Single FNIOPKPHDEH)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAEJFPPBODG_LNJPJDGINFD_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void OKJCHFGIKBH(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAEJFPPBODG_OKJCHFGIKBH_OFFSET))(this, PBCAAADNEPK);
	}

	::System::UInt32 MEKEHBEEBPO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAEJFPPBODG_MEKEHBEEBPO_OFFSET))(this);
	}
};
