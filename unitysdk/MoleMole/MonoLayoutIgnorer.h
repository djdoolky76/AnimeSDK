#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOLAYOUTIGNORER_GET_IGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1193BD00)
#define MOLEMOLE_MONOLAYOUTIGNORER_GET_SUPERIGNORELAYOUT_OFFSET UNITYSDK_OFFSET(0x1193BD10)
#define MOLEMOLE_MONOLAYOUTIGNORER__CTOR_OFFSET UNITYSDK_OFFSET(0x1193BD20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutIgnorer_TypeDefinitionIndex = 68725;

	class MonoLayoutIgnorer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IgnoreLayout; // 0x18
		::System::Boolean SuperIgnoreLayout; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTIGNORER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ignoreLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTIGNORER_GET_IGNORELAYOUT_OFFSET))(this);
		}

		::System::Boolean get_superIgnoreLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTIGNORER_GET_SUPERIGNORELAYOUT_OFFSET))(this);
		}
	};
}
