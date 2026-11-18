#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_GALGAMEDYNOPICTESTER_CHACFGGPGAB_OFFSET UNITYSDK_OFFSET(0x10D22470)
#define MOLEMOLE_GALGAMEDYNOPICTESTER_KNFLBLIJENB_OFFSET UNITYSDK_OFFSET(0x10D22300)
#define MOLEMOLE_GALGAMEDYNOPICTESTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D222B0)

namespace MoleMole
{
	inline static constexpr unsigned int GalgameDynoPicTester_TypeDefinitionIndex = 40777;

	class GalgameDynoPicTester : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAMEDYNOPICTESTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color KNFLBLIJENB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAMEDYNOPICTESTER_KNFLBLIJENB_OFFSET))(this);
		}

		::System::Void CHACFGGPGAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAMEDYNOPICTESTER_CHACFGGPGAB_OFFSET))(this);
		}
	};
}
