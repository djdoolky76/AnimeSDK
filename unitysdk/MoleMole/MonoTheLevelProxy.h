#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOTHELEVELPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x12499950)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTheLevelProxy_TypeDefinitionIndex = 60469;

	class MonoTheLevelProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTHELEVELPROXY__CTOR_OFFSET))(this);
		}
	};
}
