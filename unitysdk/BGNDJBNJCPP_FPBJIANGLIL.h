#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define BGNDJBNJCPP_FPBJIANGLIL_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x115C5520)
#define BGNDJBNJCPP_FPBJIANGLIL__CTOR_OFFSET UNITYSDK_OFFSET(0x115C5670)

inline static constexpr unsigned int BGNDJBNJCPP_FPBJIANGLIL_TypeDefinitionIndex = 87029;

class BGNDJBNJCPP_FPBJIANGLIL : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* JGDKPOLOAMF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNDJBNJCPP_FPBJIANGLIL__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNDJBNJCPP_FPBJIANGLIL_LBJEOHBBBPN_OFFSET))(this);
	}
};
