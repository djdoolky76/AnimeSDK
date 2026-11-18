#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_AJEEBNCNHMN_OFFSET UNITYSDK_OFFSET(0x15ABCEF0)
#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_DLIDBNKMKCO_OFFSET UNITYSDK_OFFSET(0x15ABCCB0)
#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x15ABCE90)
#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x15ABCA60)
#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15ABCBF0)
#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15ABC9A0)
#define MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x15ABCE40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginRenderSetting_TypeDefinitionIndex = 74276;

	class MonoEffectPluginRenderSetting : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ForceFullScreenTransparent; // 0x18
		::System::Boolean enableHideOptions; // 0x19
		::System::Boolean ForceRenderScale1; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_ONDISABLE_OFFSET))(this);
		}

		::System::Void DLIDBNKMKCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_DLIDBNKMKCO_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_JMPNKFCKKFG_OFFSET))(this);
		}

		::System::Void AJEEBNCNHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINRENDERSETTING_AJEEBNCNHMN_OFFSET))(this);
		}
	};
}
