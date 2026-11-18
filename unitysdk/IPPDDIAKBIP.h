#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IPPDDIAKBIP_DAANHDHKCOF_OFFSET UNITYSDK_OFFSET(0x138278A0)
#define IPPDDIAKBIP_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0x13827900)
#define IPPDDIAKBIP_GGDMPEJDKCN_OFFSET UNITYSDK_OFFSET(0x13827800)
#define IPPDDIAKBIP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13827510)
#define IPPDDIAKBIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13827480)

inline static constexpr unsigned int IPPDDIAKBIP_TypeDefinitionIndex = 75121;

class IPPDDIAKBIP : public ::System::Object
{
public:
	// static const ::System::Int32 HHGEFPDGIEB = 0x32; // 0x0
	// static const ::System::Single OFHPPMEMLHB; // 0x0
	::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* NCGGGGLADJE; // 0x10
	::UnityEngine::Vector3 MGBNIOPJDOL; // 0x18
	::UnityEngine::Vector3 PDDEBGACLFE; // 0x24

	::System::Void _ctor(::UnityEngine::Vector3 NCCIIKDCOLF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IPPDDIAKBIP__CTOR_OFFSET))(this, NCCIIKDCOLF);
	}

	::System::Void OKJCHFGIKBH(::UnityEngine::Vector3 HOPHKBAADOA, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IPPDDIAKBIP_OKJCHFGIKBH_OFFSET))(this, HOPHKBAADOA, PBCAAADNEPK);
	}

	::UnityEngine::Vector3 GGDMPEJDKCN(::System::Single PBCAAADNEPK)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPPDDIAKBIP_GGDMPEJDKCN_OFFSET))(this, PBCAAADNEPK);
	}

	::UnityEngine::Vector3 DAANHDHKCOF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPDDIAKBIP_DAANHDHKCOF_OFFSET))(this);
	}

	::System::Void ENADCIEBIBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPDDIAKBIP_ENADCIEBIBL_OFFSET))(this);
	}
};
