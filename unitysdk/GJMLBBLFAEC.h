#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PJBCFAALBFG;

#define GJMLBBLFAEC_ABFKJPJHABJ_OFFSET UNITYSDK_OFFSET(0x13DDD700)

inline static constexpr unsigned int GJMLBBLFAEC_TypeDefinitionIndex = 45253;

class GJMLBBLFAEC : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 ABFKJPJHABJ(::PJBCFAALBFG* IEFBHIDIPPL)
	{
		return ((::UnityEngine::Vector3(*)(::PJBCFAALBFG*))((::PBYTE)hIl2Cpp + GJMLBBLFAEC_ABFKJPJHABJ_OFFSET))(IEFBHIDIPPL);
	}
};
