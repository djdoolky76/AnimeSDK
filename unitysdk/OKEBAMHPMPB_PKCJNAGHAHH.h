#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define OKEBAMHPMPB_PKCJNAGHAHH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x172D10C0)
#define OKEBAMHPMPB_PKCJNAGHAHH__CTOR_OFFSET UNITYSDK_OFFSET(0x172D1210)

inline static constexpr unsigned int OKEBAMHPMPB_PKCJNAGHAHH_TypeDefinitionIndex = 55051;

class OKEBAMHPMPB_PKCJNAGHAHH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* IEJDJIHMHMC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBAMHPMPB_PKCJNAGHAHH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBAMHPMPB_PKCJNAGHAHH_LBJEOHBBBPN_OFFSET))(this);
	}
};
