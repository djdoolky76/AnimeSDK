#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define EAEOPOJCHOA_CKFODMOAFMG_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x132AC950)

inline static constexpr unsigned int EAEOPOJCHOA_CKFODMOAFMG_TypeDefinitionIndex = 93199;

struct alignas(4) EAEOPOJCHOA_CKFODMOAFMG
{
	::System::Boolean OFLHPPDJLNL; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 OPMPKFEHOBM; // 0x14
	::System::Single BDEDDEGJFKL; // 0x20

	/*
	static ::EAEOPOJCHOA_CKFODMOAFMG JPPEEOLOGGP(::UnityEngine::RaycastHit& PHFFCNAJLOG)
	{
		return ((::EAEOPOJCHOA_CKFODMOAFMG(*)(::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + EAEOPOJCHOA_CKFODMOAFMG_JPPEEOLOGGP_OFFSET))(PHFFCNAJLOG);
	}
	*/
};
