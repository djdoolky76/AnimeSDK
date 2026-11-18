#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginLaserLineRenderers; }

#define CBCCMGHJEII_EPBJOODDHDG_OFFSET UNITYSDK_OFFSET(0x1141CF50)
#define CBCCMGHJEII_HAFPFGLCCCE_OFFSET UNITYSDK_OFFSET(0x1141CB20)

inline static constexpr unsigned int CBCCMGHJEII_TypeDefinitionIndex = 44256;

class CBCCMGHJEII : public ::System::Object
{
public:
	static ::System::Void HAFPFGLCCCE(::MoleMole::MonoEffectPluginLaserLineRenderers* HKMFODFFBEF)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectPluginLaserLineRenderers*))((::PBYTE)hIl2Cpp + CBCCMGHJEII_HAFPFGLCCCE_OFFSET))(HKMFODFFBEF);
	}

	static ::System::Void EPBJOODDHDG(::MoleMole::MonoEffectPluginLaserLineRenderers* HKMFODFFBEF, ::UnityEngine::Vector3 CPILJNMFPJL, ::UnityEngine::Vector3 JCNEMPCJLGK)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffectPluginLaserLineRenderers*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CBCCMGHJEII_EPBJOODDHDG_OFFSET))(HKMFODFFBEF, CPILJNMFPJL, JCNEMPCJLGK);
	}
};
