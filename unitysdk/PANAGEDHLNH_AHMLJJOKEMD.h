#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define PANAGEDHLNH_AHMLJJOKEMD_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1AFCDD40)
#define PANAGEDHLNH_AHMLJJOKEMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCDE90)

inline static constexpr unsigned int PANAGEDHLNH_AHMLJJOKEMD_TypeDefinitionIndex = 51614;

class PANAGEDHLNH_AHMLJJOKEMD : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KOIJDEHLKCO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGEDHLNH_AHMLJJOKEMD__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PANAGEDHLNH_AHMLJJOKEMD_LBJEOHBBBPN_OFFSET))(this);
	}
};
