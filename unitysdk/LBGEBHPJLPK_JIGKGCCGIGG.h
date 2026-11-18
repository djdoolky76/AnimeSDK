#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LBGEBHPJLPK_JIGKGCCGIGG_DFGGIFNBLJA_OFFSET UNITYSDK_OFFSET(0xD417B70)
#define LBGEBHPJLPK_JIGKGCCGIGG__CTOR_OFFSET UNITYSDK_OFFSET(0xD417B60)

inline static constexpr unsigned int LBGEBHPJLPK_JIGKGCCGIGG_TypeDefinitionIndex = 48043;

class LBGEBHPJLPK_JIGKGCCGIGG : public ::System::Object
{
public:
	::UnityEngine::Vector3 BOGPAHGJOJK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_JIGKGCCGIGG__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 DFGGIFNBLJA(::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LBGEBHPJLPK_JIGKGCCGIGG_DFGGIFNBLJA_OFFSET))(this, OPMPKFEHOBM);
	}
};
