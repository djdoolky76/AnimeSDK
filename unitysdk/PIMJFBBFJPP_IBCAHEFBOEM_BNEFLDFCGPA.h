#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class IINELABCBHO;
class PIMJFBBFJPP_IBCAHEFBOEM;

#define PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA_FLIIGNOPILN_OFFSET UNITYSDK_OFFSET(0x1556ABB0)
#define PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA_GJBKJBIPGDN_OFFSET UNITYSDK_OFFSET(0x1556A9A0)
#define PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA_HKFADIAJFDG_OFFSET UNITYSDK_OFFSET(0x1556A940)
#define PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1556A930)

inline static constexpr unsigned int PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA_TypeDefinitionIndex = 58941;

class PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA : public ::System::Object
{
public:
	::PIMJFBBFJPP_IBCAHEFBOEM* KLHPEBKNIFB; // 0x10
	::IINELABCBHO* CKADKPJFAHM; // 0x18
	::System::Single JKODBGHOJAE; // 0x20
	::System::Boolean DEGDDANKPCF; // 0x24
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 AKAGDEFAGJA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA__CTOR_OFFSET))(this);
	}

	::System::Void HKFADIAJFDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA_HKFADIAJFDG_OFFSET))(this);
	}

	::System::Void GJBKJBIPGDN(::MoleMole::UICameraAtom GKGPIDFHOCN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA_GJBKJBIPGDN_OFFSET))(this, GKGPIDFHOCN);
	}

	::System::Void FLIIGNOPILN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_BNEFLDFCGPA_FLIIGNOPILN_OFFSET))(this);
	}
};
