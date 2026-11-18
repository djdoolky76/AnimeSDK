#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define ECKNPANIODE_NLHKIMKOCLN_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1548F9E0)
#define ECKNPANIODE_NLHKIMKOCLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1548FB30)

inline static constexpr unsigned int ECKNPANIODE_NLHKIMKOCLN_TypeDefinitionIndex = 57110;

class ECKNPANIODE_NLHKIMKOCLN : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* PMCNDKMMFDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKNPANIODE_NLHKIMKOCLN__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECKNPANIODE_NLHKIMKOCLN_LBJEOHBBBPN_OFFSET))(this);
	}
};
