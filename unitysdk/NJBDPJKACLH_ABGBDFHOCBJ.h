#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define NJBDPJKACLH_ABGBDFHOCBJ_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x11F81E60)
#define NJBDPJKACLH_ABGBDFHOCBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F81FB0)

inline static constexpr unsigned int NJBDPJKACLH_ABGBDFHOCBJ_TypeDefinitionIndex = 89097;

class NJBDPJKACLH_ABGBDFHOCBJ : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* CKKPDPGNKFK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBDPJKACLH_ABGBDFHOCBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBDPJKACLH_ABGBDFHOCBJ_LBJEOHBBBPN_OFFSET))(this);
	}
};
