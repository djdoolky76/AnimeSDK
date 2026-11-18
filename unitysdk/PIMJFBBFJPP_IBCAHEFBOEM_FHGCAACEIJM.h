#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

class IINELABCBHO;
class PIMJFBBFJPP_IBCAHEFBOEM;

#define PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM_BKBOCNLJBLM_OFFSET UNITYSDK_OFFSET(0x1197FF90)
#define PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM_LBJGLCJMHJL_OFFSET UNITYSDK_OFFSET(0x1197FF30)
#define PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM_MDNLCFDNEJN_OFFSET UNITYSDK_OFFSET(0x1197FDA0)
#define PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1197FD90)

inline static constexpr unsigned int PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM_TypeDefinitionIndex = 58951;

class PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM : public ::System::Object
{
public:
	::IINELABCBHO* CKADKPJFAHM; // 0x10
	::PIMJFBBFJPP_IBCAHEFBOEM* KLHPEBKNIFB; // 0x18
	::UnityEngine::Vector3 MEADMKKEONK; // 0x20
	::System::Boolean DEGDDANKPCF; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Single JKODBGHOJAE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM__CTOR_OFFSET))(this);
	}

	::System::Void MDNLCFDNEJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM_MDNLCFDNEJN_OFFSET))(this);
	}

	::System::Void LBJGLCJMHJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM_LBJGLCJMHJL_OFFSET))(this);
	}

	::System::Void BKBOCNLJBLM(::MoleMole::UICameraAtom GKGPIDFHOCN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_FHGCAACEIJM_BKBOCNLJBLM_OFFSET))(this, GKGPIDFHOCN);
	}
};
