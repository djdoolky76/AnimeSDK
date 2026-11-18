#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKBHDDBGCEF.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define IBFIFAMCCBC_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x181A49E0)
#define IBFIFAMCCBC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x181A4560)
#define IBFIFAMCCBC_GMCACBFOFID_OFFSET UNITYSDK_OFFSET(0x181A46F0)
#define IBFIFAMCCBC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x181A4BB0)
#define IBFIFAMCCBC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x181A4660)
#define IBFIFAMCCBC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x181A4430)
#define IBFIFAMCCBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x181A45B0)
#define IBFIFAMCCBC__CTOR_OFFSET UNITYSDK_OFFSET(0x181A4630)

inline static constexpr unsigned int IBFIFAMCCBC_TypeDefinitionIndex = 69297;

class IBFIFAMCCBC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x12; // 0x0
	::UnityEngine::Rigidbody* CFCDGNIJMNL; // 0x48
	::System::Single NEEFGDDBHJF; // 0x50
	::System::Boolean PFKBDEMGDIK; // 0x54
	::System::Boolean JBLDPEIFOMD; // 0x55
	::System::Boolean EHBNDLLCFGO; // 0x56
	::System::Byte _padding0[0x1];
	::MoleMole::Vector2Int ACFABJEOHEP; // 0x58
	::System::Single GDPANKNOKEN; // 0x60
	::UnityEngine::Vector3 FCNPOKNKMOD; // 0x64
	::System::Single HHOONOOMBFC; // 0x70
	::UnityEngine::Vector3 BAKJLBDKEOI; // 0x74
	::System::Single PMGFPCFPAAK; // 0x80
	::FKBHDDBGCEF ECBKPABPBIP; // 0x84
	::UnityEngine::Vector3 BENCDOBOJOG; // 0x88
	::UnityEngine::Vector3 CAIJGHEKAKA; // 0x94

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBFIFAMCCBC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIFAMCCBC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIFAMCCBC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIFAMCCBC_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIFAMCCBC_MEFBHFEOKGH_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* GMCACBFOFID()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFIFAMCCBC_GMCACBFOFID_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::FKBHDDBGCEF OINOPLGMNDE, ::System::Single FLEOHOGKELL, ::UnityEngine::Vector3 GLOKEJFPOGB, ::UnityEngine::Vector3 JEMOEFBOHAO, ::System::Single PMGFPCFPAAK, ::System::Single NEEFGDDBHJF, ::System::Boolean JBLDPEIFOMD, ::System::Boolean EHBNDLLCFGO, ::System::Boolean PFKBDEMGDIK, ::UnityEngine::Vector3 IACKHFCLPJI, ::System::Single CJEBJHCBCFM)
	{
		return ((::System::Void(*)(::PVOID, ::FKBHDDBGCEF, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IBFIFAMCCBC_GALGFCPKMGC_OFFSET))(this, OINOPLGMNDE, FLEOHOGKELL, GLOKEJFPOGB, JEMOEFBOHAO, PMGFPCFPAAK, NEEFGDDBHJF, JBLDPEIFOMD, EHBNDLLCFGO, PFKBDEMGDIK, IACKHFCLPJI, CJEBJHCBCFM);
	}

	static ::IBFIFAMCCBC* JFDOOELFAOA()
	{
		return ((::IBFIFAMCCBC*(*)())((::PBYTE)hIl2Cpp + IBFIFAMCCBC_JFDOOELFAOA_OFFSET))();
	}
};
