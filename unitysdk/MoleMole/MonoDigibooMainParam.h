#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONODIGIBOOMAINPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x135B6210)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDigibooMainParam_TypeDefinitionIndex = 67464;

	class MonoDigibooMainParam : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single PropertyDelay; // 0x18
		::System::Single EXPDelay; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOMAINPARAM__CTOR_OFFSET))(this);
		}
	};
}
