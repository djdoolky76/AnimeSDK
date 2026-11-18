#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigShaderCustomBase.h"

class NapGradient;
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B8A41F0)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_MODIFYENABLE_OFFSET UNITYSDK_OFFSET(0x1B8A4B00)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B8A4760)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B8A4A00)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B8A4860)
#define MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A4B50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShaderCustomFogItem_TypeDefinitionIndex = 55070;

	class ConfigShaderCustomFogItem : public ::MoleMole::Config::ConfigShaderCustomBase
	{
	public:
		::NapGradient* SC_FxCustomFogColorFar; // 0x28
		::UnityEngine::AnimationCurve* SC_FxCustomFogInvDistance; // 0x30
		::NapGradient* SC_FxCustomFogColorNear; // 0x38
		::UnityEngine::AnimationCurve* SC_FxCustomFogStart; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM__CTOR_OFFSET))(this);
		}

		::System::Void Evaluate(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_EVALUATE_OFFSET))(this, time);
		}

		::System::Void ProcessEnter(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_PROCESSENTER_OFFSET))(this, time);
		}

		::System::Void ProcessKeep(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_PROCESSKEEP_OFFSET))(this, time);
		}

		::System::Void ProcessExit(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_PROCESSEXIT_OFFSET))(this, time);
		}

		::System::Void ModifyEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHADERCUSTOMFOGITEM_MODIFYENABLE_OFFSET))(this, enable);
		}
	};
}
