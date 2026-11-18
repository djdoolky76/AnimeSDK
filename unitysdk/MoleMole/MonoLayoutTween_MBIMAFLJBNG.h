#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_MONOLAYOUTTWEEN_MBIMAFLJBNG_CFCGBNEBMAL_OFFSET UNITYSDK_OFFSET(0x14699B90)
#define MOLEMOLE_MONOLAYOUTTWEEN_MBIMAFLJBNG_NHKHEEJPGMF_OFFSET UNITYSDK_OFFSET(0x14699BC0)
#define MOLEMOLE_MONOLAYOUTTWEEN_MBIMAFLJBNG__CTOR_OFFSET UNITYSDK_OFFSET(0x14699B80)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_MBIMAFLJBNG_TypeDefinitionIndex = 81372;

	class MonoLayoutTween_MBIMAFLJBNG : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* HODAIDNDKHD; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_MBIMAFLJBNG__CTOR_OFFSET))(this);
		}

		::System::Void CFCGBNEBMAL(::System::Single DMIAICJPPDL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_MBIMAFLJBNG_CFCGBNEBMAL_OFFSET))(this, DMIAICJPPDL);
		}

		::System::Single NHKHEEJPGMF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_MBIMAFLJBNG_NHKHEEJPGMF_OFFSET))(this);
		}
	};
}
