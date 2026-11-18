#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOMINIMAPSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x14B014A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMinimapSnapShot_TypeDefinitionIndex = 72649;

	class MonoMinimapSnapShot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINIMAPSNAPSHOT__CTOR_OFFSET))(this);
		}
	};
}
