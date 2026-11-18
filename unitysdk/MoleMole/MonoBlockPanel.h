#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOBLOCKPANEL_SETTIMESPANTAKEEFFECT_OFFSET UNITYSDK_OFFSET(0x130E7310)
#define MOLEMOLE_MONOBLOCKPANEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x130E7270)
#define MOLEMOLE_MONOBLOCKPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x130E7390)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBlockPanel_TypeDefinitionIndex = 74810;

	class MonoBlockPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single FMECNKFMJFJ; // 0x18
		::System::Single NOOKCECOBIK; // 0x1C
		::System::Boolean IDMKAALFGLG; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBLOCKPANEL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBLOCKPANEL_UPDATE_OFFSET))(this);
		}

		::System::Void SetTimeSpanTakeEffect(::System::Single KEJNOAFJFKC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBLOCKPANEL_SETTIMESPANTAKEEFFECT_OFFSET))(this, KEJNOAFJFKC);
		}
	};
}
