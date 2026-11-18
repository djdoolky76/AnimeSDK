#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOBPLEVELANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x162649F0)
#define MOLEMOLE_MONOBPLEVELANIMATION_PLAYANIMATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x16264B40)
#define MOLEMOLE_MONOBPLEVELANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x16264ED0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBPLevelAnimation_TypeDefinitionIndex = 67709;

	class MonoBPLevelAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* firstMoveCurve; // 0x18
		::UnityEngine::AnimationCurve* secondMoveCurve; // 0x20
		::UnityEngine::AnimationCurve* easeInOut; // 0x28
		::Foundation::Coroutine::CoroutineHandle NEIEMHLFGIL; // 0x30
		::System::Single JKAGGKKINMB; // 0x34
		::System::Single IFOKLBAOPGI; // 0x38
		::System::Single FNIOFNFDEEL; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_ONDESTROY_OFFSET))(this);
		}

		::System::Void PlayAnimationProgress(::System::UInt32 JMCLFJCPMPB, ::System::UInt32 MJDJLJMBIBF, ::System::Action_1<::System::Single>* POKICALLNDP, ::System::Action_1<::System::Single>* GMAICEDMLBN, ::UnityEngine::AnimationCurve* NLJOCJAIBAI)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::Single>*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_PLAYANIMATIONPROGRESS_OFFSET))(this, JMCLFJCPMPB, MJDJLJMBIBF, POKICALLNDP, GMAICEDMLBN, NLJOCJAIBAI);
		}
	};
}
