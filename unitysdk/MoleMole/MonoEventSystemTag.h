#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGMDGMCJOBC.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOEVENTSYSTEMTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A917F40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEventSystemTag_TypeDefinitionIndex = 85246;

	class MonoEventSystemTag : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IGMDGMCJOBC Tag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTSYSTEMTAG__CTOR_OFFSET))(this);
		}
	};
}
