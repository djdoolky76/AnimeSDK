#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOBPANIMATIONS_BPMOTIONANIMEND_OFFSET UNITYSDK_OFFSET(0x10D37C40)
#define MOLEMOLE_MONOBPANIMATIONS_BPMOTIONANIM_OFFSET UNITYSDK_OFFSET(0x10D37BB0)
#define MOLEMOLE_MONOBPANIMATIONS_CALCULATEBPPOS_OFFSET UNITYSDK_OFFSET(0x10D37880)
#define MOLEMOLE_MONOBPANIMATIONS_INITREWARDENTERANIM_OFFSET UNITYSDK_OFFSET(0x10D37680)
#define MOLEMOLE_MONOBPANIMATIONS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D37470)
#define MOLEMOLE_MONOBPANIMATIONS_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10D37AA0)
#define MOLEMOLE_MONOBPANIMATIONS_STARTREWARDENTERANIM_OFFSET UNITYSDK_OFFSET(0x10D374B0)
#define MOLEMOLE_MONOBPANIMATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x10D37CA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBPAnimations_TypeDefinitionIndex = 67995;

	class MonoBPAnimations : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationCurve* moveCurve; // 0x18
		::UnityEngine::RectTransform* bpScrollView; // 0x20
		::System::Single rewardDelayTime; // 0x28
		::System::Single rewardGapTime; // 0x2C
		::System::Double OBMBCGMDMJE; // 0x30
		::System::Single EEODALLOKMF; // 0x38
		::System::Boolean GDMJCENCNJB; // 0x3C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 EHFGCIKODJG; // 0x40
		::System::Single JLKCOPLKLPD; // 0x48
		::System::Single PMHJCKLNPCM; // 0x4C
		::System::Single BKOIDHHBBPN; // 0x50
		::System::Byte _padding1[0x4];
		::System::Action* IADLPMBCHJK; // 0x58
		::Foundation::Coroutine::CoroutineHandle HGIJHODLIBC; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_ONDESTROY_OFFSET))(this);
		}

		::System::Void StartRewardEnterAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_STARTREWARDENTERANIM_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitRewardEnterAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_INITREWARDENTERANIM_OFFSET))(this);
		}

		::System::Void BPMotionAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_BPMOTIONANIM_OFFSET))(this);
		}

		::System::Void BPMotionAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_BPMOTIONANIMEND_OFFSET))(this);
		}

		::System::Void CalculateBPPos(::System::Double EKGMLLJEJHM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPANIMATIONS_CALCULATEBPPOS_OFFSET))(this, EKGMLLJEJHM);
		}
	};
}
