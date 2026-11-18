#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace UnityEngine { class Animator; }

#define MOLEMOLE_STATEBASELAYER_JCDOBOBFOHB_OFFSET UNITYSDK_OFFSET(0x1A093C20)
#define MOLEMOLE_STATEBASELAYER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x1A0938C0)
#define MOLEMOLE_STATEBASELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A093BC0)

namespace MoleMole
{
	inline static constexpr unsigned int StateBaseLayer_TypeDefinitionIndex = 71248;

	class StateBaseLayer : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATEBASELAYER__CTOR_OFFSET))(this);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* ICAAMDMMDDJ, ::UnityEngine::AnimatorStateInfo LGAABHLIHKE, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATEBASELAYER_ONSTATEEXIT_OFFSET))(this, ICAAMDMMDDJ, LGAABHLIHKE, EEGBEFGJJBM);
		}

		::System::Void JCDOBOBFOHB(::UnityEngine::Animator* MIALFKCCCPI, ::UnityEngine::AnimatorStateInfo KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATEBASELAYER_JCDOBOBFOHB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
